#define MAXTAM 5

typedef struct
{
    int codigo;
    char nome[15];
} Pessoa;

Pessoa Pilha[MAXTAM];
int topo;

void criaPilha();

int pilhaCheia();

int pilhaVazia();

int push(int cod, char nm[15]);

int pop();

void imprimePilha();


