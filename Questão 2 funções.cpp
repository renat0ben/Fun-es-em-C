#include<stdio.h>
#include<locale.h>
 
 void verifi (int n) {
 	if(n%2==0){
 		printf("%i � par", n);
	 }
	 else{
	 	printf("%i � impar", n);
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
