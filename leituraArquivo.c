# include <stdio.h>
# include <locale.h>

int main (){
  FILE *arq;
  char nomeArquivo [12];
  char caracter = 0;
  int contaCaracter = 0;
  char c;

  printf("informe o nome do arquivo a ser aberto: ");
  fgets(nomeArquivo,12,stdin);
  
  printf("Informe o caracter a ser pesquisado: ");
  scanf(" %c",&caracter);
  arq = fopen(nomeArquivo, "r");
  if(arq){
    for(c = getc(arq); c != EOF; c = getc(arq)){
      if(c == caracter){
        contaCaracter ++;
    }
   
  }
   printf("Existe(m) %d caracter(es) '%c' no arquivo %s",contaCaracter,caracter,nomeArquivo);
  }else{

      setlocale(LC_ALL,"Portuguese");
    printf("Arquivo não localizado, verifique se o nome do arquivo está correto!");
  }
  
  fclose(arq);
  arq = NULL;
  

return 0;
}