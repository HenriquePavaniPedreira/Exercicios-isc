#include <stdio.h>
#include <stdlib.h>

int main(void){

    int *p;
    int i, elementos;

    printf("digite a quantidade de elementos do vetor:\n");
    scanf("%d", &elementos);

    p = (int *)(malloc(elementos * sizeof(int)));

    if (p == NULL){
        printf("Erro de alocação\n");
        system("pause");
        exit(1);
    }
    printf("\n");

    for (i = 0; i < elementos; i++){
        printf("digite o numero para o indice [%d]:\n", i);
        scanf("%d", &p[i]);
    }
    printf("\n");

    for (i = 0; i < elementos; i++){
        printf("valor armazenado no indice [%d] = %d\n", i, p[i]);
    }
    printf("\n");

    free(p);
    system("pause");
    return 0;
}
