use cervejaria;
show tables;
desc processos;

 create table processos (
id int primary key auto_increment,
maceracao float,
malteacao float,
moagem float,
brassagem float,
fervura float,
resfriamento float,
fermentacao float,
maturacao float,
filtragem float,
pasteurizacao float
);