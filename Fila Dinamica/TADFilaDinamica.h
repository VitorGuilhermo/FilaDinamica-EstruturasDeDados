struct TpFilaDinamica{
    char elemento;
    TpFilaDinamica *prox;
};
struct TpDescritor{
    TpFilaDinamica *inicio, *fim;
};

void inicializar(TpDescritor &desc){
    desc.inicio = desc.fim = NULL;
}

TpFilaDinamica *novaCaixa(char elemento){
    TpFilaDinamica *caixa = new TpFilaDinamica;
    caixa->elemento = elemento;
    caixa->prox = NULL;

    return caixa;
}
void inserir(TpDescritor &desc, char elemento){
    TpFilaDinamica *nc, *aux;

    nc = novaCaixa(elemento);

    if(desc.inicio == NULL)
        desc.inicio = desc.fim = nc;
    else{   //insere no fim
        desc.fim->prox = nc;
        desc.fim = nc;
    }
}
void retirar(TpDescritor &desc){
    TpFilaDinamica *aux;

    aux = desc.inicio;
    desc.inicio = desc.inicio->prox;
    delete(aux);
}
void exibir(TpDescritor &desc){
    TpFilaDinamica *aux;

    aux = desc.inicio;
    while(aux != NULL){
        printf("\t%c", aux->elemento);
        aux = aux->prox;
    }
}
