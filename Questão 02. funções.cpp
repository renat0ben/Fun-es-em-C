#include<stdio.h>
#include<locale.h>
 
 void verifi (int n) {
 	if(n==0){
 		printf("%i � neutro", n);
	 }
	 else if(n<0){
	 	printf("%i � negativo", n);
	 }
	 else{
	 	printf("%i � positivo", n);
	 }
}
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite um n�mero: \n");
	scanf("%i", &n);
	verifi(n);
	return(0);
}
	 
