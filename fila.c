#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.h"

void criaFila()
{
    tamanho = 0;
    fim = -1;
}

int filaCheia()
{
    if(fim==MAXTAM-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int filaVazia()
{
    if(fim==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int insere(int cod, char nm[15])
{
    int j = filaCheia();
    if(j==0)
    {
        tamanho++;
        fim++;
        Fila[fim].codigo = cod;
        strcpy(Fila[fim].nome, nm);
        return 1;
    }
    else
    {
        printf("A FILA ESTA CHEIA\n");
        return 0;
    }
}

int exclui()
{
    int t = filaVazia();
    int i;
    if(t==0)
    {
        for(i=0; i<fim; i++)
        {
            Fila[i] = Fila[i+1];
        }
        tamanho--;
        fim--;
        return 1;
    }
    else
    {
        printf("A FILA ESTA VAZIA\n");
        return 0;
    }
}

void imprimeFila()
{
    int i;
    if(fim>=0)
    {
        printf("Fila no momento\n");
        printf("codigo=nome\n");
        for(i=0; i<=fim; i++)
        {
            printf("%d==%s\n",Fila[i].codigo,Fila[i].nome);
        }
    }
    else
    {
        printf("A FILA ESTA VAZIA\n");
    }
}
