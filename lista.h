#define MAXTAM 5

typedef struct
{
    int codigo;
    char nome[15];
} Pessoaaa;

Pessoaaa Lista[MAXTAM];
int inicio;
int fim;

void criaLista();

int listaCheia();

int listaVazia();

int inclui(int cod, char nom[15]);

int retira(int pos);

void buscarLista(char nom[]); 

void imprimeLista();


