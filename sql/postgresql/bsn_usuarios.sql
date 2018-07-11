drop table if exists bsn_usuarios;
create table bsn_usuarios
(
  cod_usuario serial not null,
  key_usuario char(36) not null,
  usuario varchar(25) not null,
  senha char(128) not null,
  registro timestamp not null default now(),
  primary key (cod_usuario),
  unique (key_usuario),
  unique (usuario)
);

create or replace function bsn_binsert_usuarios() returns trigger as $$
  begin
    new.key_usuario = uuid_generate_v4();
    new.cod_usuario = nextval('bsn_usuarios_cod_usuario_seq');
    return new;
  end;
$$ language 'plpgsql';
create trigger bsn_binsert_usuarios before insert on bsn_usuarios for each row execute procedure bsn_binsert_usuarios();
insert into bsn_usuarios VALUES (null, null, 'admin', encode(digest('admin', 'sha512'), 'hex'), now());