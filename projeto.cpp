#include<stdio.h>

int soma(int a, int b){
	int soma_num = a+b;
	return soma_num;
}
int subtracao(int a, int b){
	int sub_num = a-b;
	return sub_num;
}
int multiplicacao(int a, int b){
	int mult_num = a*b;
	return mult_num;
}
int divisao(int a, int b){
	int div_num = a/b;
	return div_num;
}
int main (){
	printf("soma dos numeros: %d \n", soma(5,5));
	printf("subtracao dos numeros: %d \n", subtracao(5,2));
	printf("multiplicacao dos numeros: %d \n", multiplicacao(3,3));
	printf("divisao dos numeros: %d \n", divisao(3,3));
	return 0;
}
