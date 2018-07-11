
drop table if exists bsn_produtos_fabricantes;
create table bsn_produtos_fabricantes
(
  cod_fabricante serial not null,
  key_fabricante char(36) not null,
  key_usuario char(36) not null,
  fabricante varchar(25) not null,
  logo varchar(100),
  registro timestamp not null,
  primary key (cod_fabricante),
  unique (key_fabricante),
  unique (fabricante)
);

drop table if exists bsn_produtos_tipos;
create table bsn_produtos_tipos
(
  cod_tipo serial not null,
  key_tipo char(36) not null,
  key_usuario char(36) not null,
  tipo varchar(25) not null,
  registro timestamp not null,
  primary key (cod_tipo),
  unique (key_tipo),
  unique (tipo)
);

drop table if exists bsn_produtos_categorias;
create table bsn_produtos_categorias
(
  cod_categoria serial not null,
  key_categoria char(36) not null,
  key_usuario char(36) not null,
  categoria varchar(25) not null,
  registro timestamp not null,
  primary key (cod_categoria),
  unique (key_categoria),
  unique (categoria)
);

drop table if exists bsn_produtos;
create table bsn_produtos
(
  cod_produto serial not null,
  key_produto char(36) not null,
  key_usuario char(36) not null,
  key_fabricante char(36) not null,
  key_tipo char(36),
  key_categoria char(36),
  produto varchar(30) not null,
  custo numeric(10,2) not null default 0,
  venda numeric(10,2) not null default 0.01,
  estoque bigint not null default 0,
  barcode varchar(70),
  peso numeric(10,3),
  altura numeric(10,3),
  largura numeric(10,3),
  profundidade numeric(10,3),
  registro timestamp not null,
  primary key (cod_produto),
  unique (key_produto),
  unique (key_fabricante, key_tipo, key_categoria, produto)
);

create view bsn_produto as select t1.*, usuario, fabricante, tipo, categoria from bsn_produtos t1
  inner join bsn_usuarios t2 using (key_usuario)
  inner join bsn_produtos_fabricantes t3 using (key_fabricante)
  inner join bsn_produtos_tipos t4 using (key_tipo)
  inner join bsn_produtos_categorias t5 using (key_categoria);

create or replace function bsn_before_insert_produtos_fabricantes() returns trigger as $$
  begin
    if (new.key_fabricante isnull) then
      new.key_fabricante = uuid_generate_v4();
      new.cod_fabricante = nextval('bsn_produtos_fabricantes_cod_fabricante_seq');
    end if;
    return new;
  end;
$$ language 'plpgsql';

create or replace function bsn_before_insert_produtos_tipos() returns trigger as $$
  begin
    if new.key_tipo isnull then
      new.key_tipo = uuid_generate_v4();
      new.cod_tipo = nextval('bsn_produtos_tipos_cod_tipo_seq');
    end if;
    return new;
  end;
$$ language 'plpgsql';


create or replace function bsn_before_insert_produtos_categorias() returns trigger as $$
  begin
    if new.key_categoria isnull then
      new.key_categoria = uuid_generate_v4();
      new.cod_categoria = nextval('bsn_produtos_categorias_cod_categoria_seq');
    end if;
    return new;
  end;
$$ language 'plpgsql';

create or replace function bsn_before_insert_produtos() returns trigger as $$
  begin
    if new.key_produto isnull then
      new.key_produto = uuid_generate_v4();
      new.cod_produto = nextval('bsn_produtos_cod_produto_seq');
    end if;
    return new;
  end;
$$ language 'plpgsql';

create or replace function bsn_after_delete_produtos_fabricantes() returns trigger as $$
  begin
    delete from bsn_produtos where key_fabricate=old.key_fabricante;
    return old;
  end;
$$ language 'plpgsql';

create or replace function bsn_after_delete_produtos_categorias() returns trigger as $$
  begin
    delete from bsn_produtos where key_categoria=old.key_categoria;
    return old;
  end;
$$ language 'plpgsql';

create or replace function bsn_after_delete_produtos_tipos() returns trigger as $$
  begin
    delete from bsn_produtos where key_tipo=old.key_tipo;
    return old;
  end;
$$ language 'plpgsql';

create trigger bsn_before_insert_produtos_fabricantes before insert on bsn_produtos_fabricantes for each row execute procedure bsn_before_insert_produtos_fabricantes();
create trigger bsn_after_delete_produtos_fabricantes after delete on bsn_produtos_fabricantes for each row execute procedure bsn_after_delete_produtos_fabricantes();
create trigger bsn_before_insert_produtos_categorias before insert on bsn_produtos_categorias for each row execute procedure bsn_before_insert_produtos_categorias();
create trigger bsn_after_delete_produtos_categorias after delete on bsn_produtos_categorias for each row execute procedure bsn_after_delete_produtos_categorias();
create trigger bsn_before_insert_produtos_tipos before insert on bsn_produtos_tipos for each row execute procedure bsn_before_insert_produtos_tipos();
create trigger bsn_after_delete_produtos_tipos after delete on bsn_produtos_tipos for each row execute procedure bsn_after_delete_produtos_tipos();
create trigger bsn_before_insert_produtos before insert on bsn_produtos for each row execute procedure bsn_before_insert_produtos();