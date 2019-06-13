#include<stdio.h>

int soma(int a, int b){
	int soma_num = a+b;
	return soma_num;
}



int subtracao(int a, int b){
	int sub_num = a-b;
	return sub_num;
}

int main (){
	printf("soma dos numeros: %d \n", soma(5,5));
	printf("subtracao dos numeros: %d \n", subtracao(5,2));

	return 0;
}
