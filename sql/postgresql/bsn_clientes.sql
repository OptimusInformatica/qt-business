drop table if exists bsn_clientes;
create table bsn_clientes
(
  cod_cliente serial not null,
  key_cliente char(36) not null,
  key_usuario char(36) not null,
  cliente varchar(25) not null,
  nome varchar(50) not null,
  documento varchar(18),
  ie varchar(18),
  im varchar(18),
  registro timestamp not null default now(),
  primary key (cod_cliente),
  unique (key_cliente),
  unique (cliente)
);

drop table if exists bsn_clientes_addr;
create table bsn_clientes_addr
(
  cod_addr serial not null,
  key_cliente char(36) not null,
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
  unique (cep, key_cliente, numero)
);

drop table if exists bsn_clientes_mail;
create table bsn_clientes_mail
(
  cod_mail serial not null,
  key_cliente char(36) not null,
  key_usuario char(36) not null,
  email varchar(70),
  phone varchar(15),
  registro timestamp not null default now(),
  primary key (cod_mail),
  unique (email, key_cliente, phone)
);

create or replace function bsn_before_insert_clientes() returns trigger as $$
  begin
    if (new.key_cliente isnull) then
      new.cod_cliente = nextval('bsn_clientes_cod_cliente_seq');
      new.key_cliente = uuid_generate_v4();
    end if;
    return new;
  end;
$$ language 'plpgsql';
create trigger bsn_before_insert_clientes before insert on bsn_clientes for each row execute procedure bsn_before_insert_clientes();

create or replace function bsn_after_insert_clientes() returns trigger as $$
  begin
    insert into bsn_clientes_addr (key_cliente, key_usuario) values (new.key_cliente, new.key_usuario);
    insert into bsn_clientes_mail (key_cliente, key_usuario) values (new.key_cliente, new.key_usuario);
    return new;
  end;
$$ language 'plpgsql';
create trigger bsn_after_insert_clientes after insert on bsn_clientes for each row execute procedure bsn_after_insert_clientes();

create or replace function bsn_after_delete_clientes() returns trigger as $$
  begin
    delete from bsn_clientes_addr where key_cliente=old.key_cliente;
    delete from bsn_clientes_mail where key_cliente=old.key_cliente;
  end;
$$ language 'plpgsql';
create trigger bsn_adelete_clientes after delete on bsn_clientes for each row execute procedure bsn_after_delete_clientes();

create or replace view bsn_cliente as select
  t1.*,
  usuario,
  rua,
  bairro,
  cidade,
  uf,
  cep,
  numero,
  complemento,
  phone,
  email
from bsn_clientes t1
  inner join bsn_usuarios t2 using (key_usuario)
  inner join bsn_clientes_addr t3 using (key_cliente)
  inner join bsn_clientes_mail t4 using (key_cliente);