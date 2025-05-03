#include <stdio.h>

int main (){


//movimentação rainha 8 casas p/ esquerda
for (int rainha = 0; rainha < 8; rainha++)
{
    if (rainha == 8) break;
    {
        printf("A rainha movimentou para Esquerda!\n");
    }
} printf("\n");

//Movimentação Bispo 5 Casas p/ diagonal cima à direita

int bispo = 0;
while (bispo <5)
{
    printf("O Bispo movimentou para a direita cima!\n");
bispo++;
}
printf("\n");
//Movimentação da torre 5 casas p/ Direita


int torre = 0;
do
{
    printf("A torre movimentou para a direita!\n");
    torre++;
} while (torre < 5);
printf("\n");

//Movimentação Cavalo

int movicavalo = 1;

while (movicavalo--)
{
    for (int i = 0; i < 2; i++)
    {
        printf("O cavalo movimentou para Baixo!\n");
    }
    printf("O cavalo movimentou para Esquerda!\n");
}




return 0;


}