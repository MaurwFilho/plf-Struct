#define MAXTAM 5

typedef struct
{
    int codigo;
    char nome [15];
} Pessoaa;

Pessoaa Fila[MAXTAM];
int tamanho;
int fim;

void criaFila();

int filaCheia();

int filaVazia();

int insere(int cod, char nm[15]);

int exclui();

void imprimeFila();


