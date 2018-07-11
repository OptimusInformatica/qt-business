drop table if exists bsn_empresas;
create table bsn_empresas
(
  cod_empresa serial not null,
  key_empresa char(36) not null,
  key_usuario char(36) not null,
  empresa varchar(25) not null,
  nome varchar(50) not null,
  documento varchar(18),
  ie varchar(18),
  im varchar(18),
  registro timestamp not null default now(),
  primary key (cod_empresa),
  unique (key_empresa),
  unique (empresa)
);

drop table if exists bsn_empresas_addr;
create table bsn_empresas_addr
(
  cod_addr serial not null,
  key_empresa char(36) not null,
  key_usuario char(36) not null,
  cep char(9),
  rua varchar(70),
  numero int,
  complemento varchar(30),
  bairro varchar(50),
  cidade varchar(50),
  uf char(2),
  registro timestamp not null default now(),
  primary key (cod_addr),
  unique (cep, key_empresa, numero)
);

drop table if exists bsn_empresas_mail;
create table bsn_empresas_mail
(
  cod_mail serial not null,
  key_empresa char(36) not null,
  key_usuario char(36) not null,
  email varchar(70),
  phone varchar(15),
  registro timestamp not null default now(),
  primary key (cod_mail),
  unique (email, key_empresa, phone)
);
create or replace function bsn_before_insert_empresas() returns trigger as $$
  begin
    if new.cod isnull then
      new.cod_empresa = nextval('bsn_empresas_cod_empresa_seq');
      new.key_empresa = uuid_generate_v4();
    end if;
    return new;
  end;
$$ language 'plpgsql';
create trigger bsn_before_insert_empresas before insert on bsn_empresas for each row execute procedure bsn_before_insert_empresas();


create or replace function bsn_after_insert_empresas() returns trigger as $$
  begin
    insert into bsn_empresas_addr (key_empresa, key_usuario) values (new.key_empresa, new.key_usuario);
    insert into bsn_empresas_mail (key_empresa, key_usuario) values (new.key_empresa, new.key_usuario);
    return new;
  end;
$$ language 'plpgsql';
create trigger bsn_after_insert_empresas after insert on bsn_empresas for each row execute procedure bsn_after_insert_empresas();

create or replace function bsn_after_delete_empresas() returns trigger as $$
  begin
    delete from bsn_empresas_addr where key_empresa=old.key_empresa;
    delete from bsn_empresas_mail where key_empresa=old.key_empresa;
  end;
$$ language 'plpgsql';
create trigger bsn_adelete_empresas after delete on bsn_empresas for each row execute procedure bsn_after_delete_empresas();

create or replace view bsn_empresa as select t1.*, usuario, rua, bairro, cidade, uf, cep, numero, complemento, phone, email from bsn_empresas t1
  inner join bsn_usuarios t2 using (key_usuario)
  inner join bsn_empresas_addr t3 using (key_empresa)
  inner join bsn_empresas_mail t4 using (key_empresa);