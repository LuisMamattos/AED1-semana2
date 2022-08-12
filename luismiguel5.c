/* Lista de alocação dinamica ex:3 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *v, tam, pares = 0, impares = 0;
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
        if((v[i] % 2) == 0){
            pares++;
        }else{
            impares++;
        }
    }
    printf("%i pares\n%i impares\n",pares, impares);
    free(v); 
}

