#include<stdio.h>
#include<locale.h>
 
 void verifi (int n) {
 	if(n%2==0){
 		printf("%i é par", n);
	 }
	 else{
	 	printf("%i é impar", n);
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
