#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int tamanho(lista *lista) {
	return lista->tamanho;
}

int cabeca(lista *lista) {
	return lista->cabeca->item;
}

int cauda(lista *lista) {
	return lista->cauda->item;
}

no* busca(lista *lista, int elemento) {
	no *no = lista->cabeca;
	while (no->item != elemento && no != NULL)
		no = no->proximo;
	return no;
}

void add(lista *lista, int elemento) {
	no *novoNo = criaNo(elemento);
	lista->cauda->proximo = novoNo;
	lista->cauda = novoNo;
}

void insere(lista *lista, int elemento, int posicao) {
	no *novoNo = criaNo(elemento);
	no *aux = busca(lista, posicao);
	novoNo->proximo = aux->proximo;
	aux->proximo = novoNo;
	if (aux->item == lista->cauda)
		lista->cauda = novoNo;
}

int remove(lista *lista, int elemento) {
	no *aux = lista->cabeca;
	if (aux->item != elemento) {
		no *anterior = aux;
		aux = aux->proximo;
		while (aux->item != elemento && aux != NULL) {
			anterior = aux;
			aux = aux->proximo;
		}
		if (aux == NULL) {
			return -1;
		} else {
			anterior->proximo = aux->proximo;
			if (aux->item == lista->cauda) {
				lista->cauda = anterior;
			}
		}
	} else {
		lista->cabeca = aux->proximo;
	}
	free(aux);
}
