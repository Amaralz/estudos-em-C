#include <stdlib.h>
#include <stdio.h>

int main ()
{
int x[5][5],l,c;

for (int i = 0; i < 5; i++)
{
    for (int j = 1; j < 5; j++)
    {
        printf("digite alguns valores para armazenar nos nosso banco de dados:[%d][%d]",i,j);
        scanf("%d",&x[i][j]);
    }
    
}

    printf("digite a [linha] e a [coluna] do pedido que vc depositou:");
    scanf("%d",&l);
    scanf("%d",&c);

for (int i = l; i == l; i++)
{
    for (int j = c; j == c; j++)
    {
        printf("[%d][%d]:%d\n\n",i,j,x[i][j]);
    }   
}
    return 0;
}