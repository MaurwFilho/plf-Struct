#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

void criaPilha()
{
    topo = -1;
}

int pilhaCheia()
{
    if(topo==MAXTAM-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int pilhaVazia()
{
    if(topo==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int push(int cod, char nm[15])
{
    int f = pilhaCheia();
    if(f==0)
    {
        topo++;
        Pilha[topo].codigo = cod;
        strcpy(Pilha[topo].nome, nm);
        return 1;
    }
    else
    {
        printf("A PILHA ESTA CHEIA\n");
        return 0;
    }
}

int pop()
{
    int t = pilhaVazia();
    int aux;
    if(t==0)
    {
        topo--;
        return 1;
    }
    else
    {
        printf("A PILHA ESTA VAZIA\n");
        return 0;
    }
}

void imprimePilha()
{
    int i;
    if(topo>=0)
    {
        printf("Pilha no momento\n");
        printf("codigo=nome\n");
        for(i=topo; i>=0; i--)
        {
            printf("%d==%s\n",Pilha[i].codigo,Pilha[i].nome);
        }
    }
    else
    {
        printf("A PILHA ESTA VAZIA\n");
    }
}
