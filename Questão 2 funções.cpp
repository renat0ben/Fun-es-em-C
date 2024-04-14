#include<stdio.h>
#include<locale.h>
 
 void verifi (int n) {
 	if(n==0){
 		printf("%i é neutro", n);
	 }
	 else if(n<0){
	 	printf("%i é negativo", n);
	 }
	 else{
	 	printf("%i é positivo", n);
	 }
}
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite um número: \n");
	scanf("%i", &n);
	verifi(n);
	return(0);
}
	
