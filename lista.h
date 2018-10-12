typedef struct Lista lista;
struct Lista {
	no* cabeca;
	no* cauda;
	int tamanho;
};

int tamanho(lista *lista);		//Retorna tamanho da lista
int cabeca(lista *lista);		//Retorna item da cabeca da lista
int cauda(lista *lista);		//Retorna item da cauda da lista
no* busca(lista *lista, int elemento);		//Busca elemento na lista
void add(lista *lista, int elemento);		//Adiciona elemento na cauda da lista
void insere(lista *lista, int elemento, int posicao);		//Insere elemento apos posicao especifica
int remove(lista *lista, int elemento);		//Remove elemento especifico da lista
