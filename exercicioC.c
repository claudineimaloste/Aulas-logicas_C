/*
Faça um programa que tenha uma função que receba um vetor de inteiros como parâmetro e retorne o
maior valor. 

*/


#include <stdio.h>
#include <locale.h>
int maiorValor (int vetor[], int qtd){

int maior = 0;

for (int i = 0; i < qtd; i++){

if (i == 0){

    maior = vetor [i];
 }
 if(vetor [i] > maior){

    maior = vetor [i];
 }

}
return maior;

}


int main (){
int vetor [50],tam, maior;
printf("Informe o tamanho do vetor: ");
scanf("%d",&tam);
if (tam >= 50){
    setlocale(LC_ALL,"portuguese");
    printf("Valor excede o total de posições");
}else{

    for(int i = 0; i < tam; i++){
        printf("Informe os valores: ");
        scanf("%d",&vetor[i]);

    }
    maior = maiorValor (vetor,tam);
    setlocale(LC_ALL,"portuguese");
    printf("O maior valor digitado é: %d",maior);
}


    return 0;
}