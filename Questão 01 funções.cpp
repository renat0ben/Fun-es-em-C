#include<stdio.h>
#include<locale.h>

void verifi (int n) {
if(n==0){
	printf("%i é igual a 0!\n", n);
}
else{
	printf("%i não é igual a 0!", n);
}
}
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite um número inteiro: ");
	scanf("%i", &n);
	verifi(n);
	return(0);
}
