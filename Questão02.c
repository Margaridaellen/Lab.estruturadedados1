#include<stdio.h>
int main(void){
int x,*p;
x=100;
p=x;
printf("O valor de p = %p\t valor de *p=%d",p,*p);
}

// a) Mensagem de advertência
// b) Linha 5, p=x
// c) Não
// d) Alterando a linha 5, p=&x;
// e) Sim