#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio2.h>
#include <string.h>
#include <windows.h>
#include "TADFilaDinamica.h"

int main(){
    TpDescritor descritor;

    inicializar(descritor);

    inserir(descritor, 'A');
    inserir(descritor, 'B');
    inserir(descritor, 'C');

    retirar(descritor);

    exibir(descritor);
}
