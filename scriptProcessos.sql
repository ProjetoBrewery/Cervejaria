use cervejaria;
show tables;
desc processos;

 create table processos (
id int primary key auto_increment,
maceracao1 decimal(4,2),
malteacao1 decimal(4,2),
malteacao2 decimal(4,2),
malteacao3 decimal(4,2),
moagem1 decimal(4,2),
brassagem1 decimal(4,2),
brassagem2 decimal(4,2),
brassagem3 decimal(4,2),
fervura1 decimal(4,2),
resfriamento1 decimal(4,2),
resfriamento2 decimal(4,2),
resfriamento3 decimal(4,2),
fermentacao1 decimal(4,2),
maturacao1 decimal(4,2),
pasteurizacao1 decimal(4,2),
servir1 decimal(4,2)
);

desc processos;


