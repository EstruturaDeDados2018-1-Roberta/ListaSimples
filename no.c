#include <stdio.h>
#include <stdlib.h>
#include "no.h"

no* criaNo(int item) {
	no *novoNo = (no*)malloc(sizeof(no));
	novoNo->item = item;
	novoNo->proximo = NULL;
	return novoNo;
}
