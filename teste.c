
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
  char nome[50][50];

  for (int i = 0; i < 50; i++)
  {
    for (int j = 0; j < 50; j++)
    {
      nome[i][j] = '#';
    }
  }
  for (int i = 0; i < 50; i++)
  {
    for (int j = 0; j < 50; j++)
    {
      printf("%c ", nome[i][j]);
    }
    printf("\n");
  }

  return 0;
}
