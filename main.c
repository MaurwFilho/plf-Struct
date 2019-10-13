#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"
#include "fila.h"
#include "lista.h"


int main()
{
    int op;
    do
    {
        system("cls");

        printf("1 - PILHA\n");
        printf("2 - FILA\n");
        printf("3 - LISTA\n");
        printf("0 - SAIR\n");
        scanf("%d",&op);

        switch(op)
        {
        case 1:
        {
            //PILHA
            criaPilha();

            int opcao;
            char nome[15];
            char nom[15];
            int codigo;
            int retorno;

            do
            {

                system("cls");

                printf("1 - inserir na pilha\n");
                printf("2 - remover da pilha\n");
                printf("3 - buscar pessoa do topo\n");
                printf("4 - imprimir pilha\n");
                printf("5 - retornar o tamanho da pilha\n");
                printf("0 - sair\n");

                scanf("%d", &opcao);

                switch(opcao)
                {

                case 1:
                {
                    printf("digite o codigo\n");
                    scanf("%d",&codigo);
                    printf("digite o nome a ser inserido\n");
                    scanf("%s",&nome);
                    retorno = push(codigo,nome);
                    if(retorno==1)
                    {
                        printf("elemento inserido com sucesso\n\n");
                        imprimePilha();
                    }
                    else
                    {
                        printf("NAO FOI POSSIVEL INSERIR O ELEMENTO\n");
                    }
                    break;
                }
                case 2:
                {
                    retorno = pop();
                    if(retorno==1)
                    {
                        printf("removido com sucesso\n");
                        imprimePilha();
                    }
                    else
                    {
                        printf("nao foi possivel remover o elemento da pilha\n");
                    }
                    break;
                }
                case 3:
                {
                    int a = pilhaVazia();
                    if(a==0)
                    {
                        printf("pessoa do topo da lista:\ncodigo=nome\n%d==%s\n",Pilha[topo].codigo, Pilha[topo].nome);
                    }
                    else
                    {
                        printf("A PILHA ESTA VAZIA\n");
                    }
                    break;
                }
                case 4:
                {
                    imprimePilha();
                    break;
                }
                case 5:
                {
                    printf("O tamanho da pilha eh: %d\n\n", topo+1);
                    break;
                }
                case 0:
                {
                    printf("VOLTANDO ...\n\n");
                    break;
                }
                default:
                {
                    printf("digite apenas de 0 a 5\n\n");
                }
                }

                system("pause");

            }
            while(opcao != 0);
            break;
        }
        case 2:
        {
            //FILA
            criaFila();

            int opcao;
            int codigo;
            char nome[15];
            int retorno;

            do
            {
                system("cls");

                printf("1 - inserir na fila\n");
                printf("2 - remover da fila\n");
                printf("3 - buscar pessoa do inicio\n");
                printf("4 - imprimir fila\n");
                printf("5 - retornar o tamanho da fila\n");
                printf("0 - sair\n");

                scanf("%d", &opcao);

                switch(opcao)
                {

                case 1:
                {
                    printf("Digite o codigo\n");
                    scanf("%d",&codigo);
                    printf("Digite o nome\n");
                    scanf("%s",&nome);
                    retorno = insere(codigo, nome);
                    if(retorno==1)
                    {
                        printf("\ninserido com sucesso\n");
                        imprimeFila();
                    }
                    else
                    {
                        printf("NAO FOI POSSIVEL INSERIR\n");
                    }
                    break;
                }
                case 2:
                {
                    retorno = exclui();
                    if(retorno==1)
                    {
                        printf("removido com sucesso\n");
                        imprimeFila();
                    }
                    else
                    {
                        printf("nao foi possivel remover da fila\n");
                    }
                    break;
                }
                case 3:
                {
                    int a = filaVazia();
                    if(a==0)
                    {
                        printf("pessoa do inicio da fila:\n%d==%s\n",Fila[0].codigo,Fila[0].nome);
                    }
                    else
                    {
                        printf("Nao existe pessoas na fila\n");
                    }
                    break;
                }
                case 4:
                {
                    imprimeFila();
                    break;
                }
                case 5:
                {
                    printf("O tamanho da fila eh: %d\n\n", tamanho);
                    break;
                }
                case 0:
                {
                    printf("VOLTANDO ...\n\n");
                    break;
                }
                default:
                {
                    printf("digite apenas de 0 a 5\n\n");
                }
                }

                system("pause");

            }
            while(opcao != 0);
            break;
        }
        case 3:
        {
            //LISTA
            criaLista();

            int opcao;
            char nome[15];
            char nom[15];
            int codigo;
            int retorno;
            int p;

            do
            {

                system("cls");

                printf("1 - inserir na lista\n");
                printf("2 - remover da lista\n");
                printf("3 - buscar pessoa na lista\n");
                printf("4 - imprimir lista\n");
                printf("5 - retornar o tamanho da lista\n");
                printf("0 - sair\n");

                scanf("%d", &opcao);

                switch(opcao)
                {

                case 1:
                {
                    printf("digite o codigo\n");
                    scanf("%d",&codigo);
                    printf("digite o nome a ser inserido\n");
                    scanf("%s",&nome);
                    retorno = inclui(codigo,nome);
                    if(retorno==1)
                    {
                        printf("elemento inserido com sucesso\n\n");
                        imprimeLista();
                    }
                    else
                    {
                        printf("NAO FOI POSSIVEL INSERIR O ELEMENTO\n");
                    }
                    break;
                }
                case 2:
                {
                    imprimeLista();
                    printf("digite a posicao que voce quer remover da lista\n");
                    scanf("%d",&p);
                    retorno = retira(p);
                    if(retorno==1)
                    {
                        printf("elemento removido com sucesso\n");
                    }
                    else
                    {
                        printf("nao foi possivel remover o elemento da lista\n");
                    }
                    break;
                }
                case 3:
                {
                 	char no[15];
					printf("digite o nome\n");
					scanf("%s",&no);
					buscarLista(no);   

                    break;
                }
                case 4:
                {
                    imprimeLista();
                    break;
                }
                case 5:
                {
                    printf("O tamanho da lista eh: %d\n\n", fim+1);
                    break;
                }
                case 0:
                {
                    printf("VOLTANDO ...\n\n");
                    break;
                }
                default:
                {
                    printf("digite apenas de 0 a 5\n\n");
                }
                }

                system("pause");

            }
            while(opcao != 0);
            break;
        }
        case 0:
        {
            printf("SAINDO ...\n");
            break;
        }
        default:
        {
            printf("digite apenas de 0 a 3\n\n");
        }
        }

    }
    while(op!=0);

    return 0;
}


