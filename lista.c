#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

void criaLista()
{
    inicio = 0;
    fim = -1;
}

int listaCheia()
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
int listaVazia()
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

int inclui(int cod, char nom[15])
{
    int i, retorno, ud, pos;
    retorno = listaCheia();
    if(retorno==0)
    {
        printf("voce quer setar uma posicao?\nse sim digite =>1\nse nao digite =>0\n:");
        scanf("%d",&ud);
        if(ud==1)
        {
            printf("digite a posicao para o valor\n");
            scanf("%d",&pos);
            if(pos<=fim)
            {
                int i;
                for(i=fim; i>=pos; i--)
                {
                    Lista[i+1] = Lista[i];
                }
                Lista[pos].codigo = cod;
                strcpy(Lista[pos].nome, nom);
                fim++;
            }
            else
            {
                printf("\nESSA POSICAO NAO EXISTE NA LISTA, O ELEMENTO FOI INSERIDO NA SEQUENCIA\n");
                Lista[fim+1].codigo = cod;
                strcpy(Lista[fim+1].nome, nom);
                fim++;
            }
        }
        else
        {
            Lista[fim+1].codigo = cod;
            strcpy(Lista[fim+1].nome, nom);
            fim++;
        }
        return 1;
    }
    else
    {
        printf("A LISTA ESTA CHEIA\n");
        return 0;
    }
}

int retira(int pos)
{
    int r = listaVazia();
    if(r==0)
    {
        int i;
        if(pos<fim){
			for(i=pos; i<fim; i++)
        	{
            Lista[i] = Lista[i+1];
        	}
        	fim--;
		} else{
			printf("Indice Invalido\n");
		}
        
        return 1;
    }
    else
    {
        return 0;
    }
}

void buscarLista(char nom[]){
	int retorno = listaVazia();
	if(retorno==0){
		int i;
		int flag = 0;
		for(i=0;i<=fim;i++){
			if(strcmp(nom, Lista[i].nome)==0){
				printf("o nome existe na lista e esta no indice %d\n",i);
				flag = 1;
				break;
			}
		}
		if(flag==0){
			printf("o nome nao existe na lista\n");
		}
	}else{
		printf("A LISTA ESTA VAZIA\n");
	}
}

void imprimeLista()
{
    int f = listaVazia();

    if(f==0)
    {
        int i;
        printf("Lista no momento\n");
        printf("pos codigo=nome\n");
        for(i=0; i<=fim; i++)
        {
            printf("%d   %d==%s\n",i,Lista[i].codigo,Lista[i].nome);
        }
    }
    else
    {
        printf("A LISTA ESTA VAZIA\n");
    }
}
