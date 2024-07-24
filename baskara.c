#include <stdio.h>
#include<math.h>
#include <locale.h>


int main (){

int delta, a, b,c;
float x1,x2;

printf("Informe valor de a: ");
scanf("%d", &a);
printf("Informe valor de b: ");
scanf("%d", &b);
printf("Informe valor de c: ");
scanf("%d", &c);

delta = ((b*b) - (4*a*c));
printf("Delta = %d\n",delta);

if (delta < 0 || a == 0){
    setlocale(LC_ALL,"Portuguese");
    printf("Essa conta n�o possui raizes");
}else{

    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
setlocale(LC_ALL,"Portuguese");  
printf("O valor de x' � %f\n",x1);
printf("O valor de x'' � %f\n",x2);
    
}


}