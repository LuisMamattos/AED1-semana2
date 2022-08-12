/* Lista de alocação dinamica ex:1 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *v;
    v = (int *) malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("\nDigite o valor para a posicao %i do vetor: ", i+1);
        scanf("%i",&v[i]);
    }
    printf("vc digitou: \n");
    for (int i = 0;i < 5; i++)
    {
        printf("%i\n",v[i]);
    }
    free(v); 
}

