/* Lista de ponteiro ex:20 */

#include <stdio.h>
#include <stdlib.h>


int negativos(float *vet, int N);

int main(void) {
    int n, retorno;float vetor[5];
    printf("DIGITE O NUMERO DE POSIÇÕES DO SEU VETOR: \n");
    scanf("%i",&n);
    for (int x=0; x< n; x++){
        printf("DIGITE O %io NUMERO DE SEU VETOR: \n", (x+1));
        scanf("%f",&vetor[x]);
    }
    retorno = negativos(&vetor[0],n);
    printf("retornou %d   ",retorno);    
}

int negativos(float *vet, int N){
    int cont = 0;
    for(int x=0; x < N; x++){
        if(*vet < 0){
            cont++;
        }
        vet++;
    }
    return(cont);
}