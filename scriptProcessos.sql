use cervejaria;
show tables;
desc processos;

 create table processos (
id int primary key auto_increment,
maceracao decimal(4,2),
malteacao decimal(4,2),
moagem decimal(4,2),
brassagem decimal(4,2),
fervura decimal(4,2),
resfriamento decimal(4,2),
fermentacao decimal(4,2),
maturacao decimal(4,2),
filtragem decimal(4,2),
pasteurizacao decimal(4,2)
);
