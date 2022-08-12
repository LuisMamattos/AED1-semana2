/* Lista de alocação dinamica ex:2 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *v, tam;
    printf("Informe o tamanho do vetor: \n");
    scanf("%d", &tam);
    v = (int *) malloc(tam * sizeof(int));

    for (int i = 0; i < tam; i++)
    {
        printf("\nDigite o valor para a posicao %i do vetor: ", i+1);
        scanf("%i",&v[i]);
    }
    printf("vc digitou: \n");
    for (int i = 0;i < tam; i++)
    {
        printf("%i\n",v[i]);
    }
    free(v); 
}

