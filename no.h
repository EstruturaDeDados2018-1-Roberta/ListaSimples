typedef struct No no;
struct No {
	int item;
	no *proximo;
};

no* criaNo(int item);
