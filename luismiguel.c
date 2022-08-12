/* Lista de ponteiro ex:1 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int inteiro = 1;
    float real = 2;
    char caracter = 'x';
    int *ptr_inteiro;
    float *ptr_real;
    char *ptr_caracter;	

	ptr_inteiro = &inteiro;
    ptr_real = &real;
    ptr_caracter = &caracter;

	printf("inteiro = %d\n", inteiro);
	printf("real = %.2f\n", real);
	printf("caracter = %c\n", caracter);

    *ptr_inteiro = 4;
    *ptr_real = 5;
    *ptr_caracter = 'y';

    printf("inteiro = %d\n", inteiro);
	printf("real = %.2f\n", real);
	printf("caracter = %c\n", caracter);

	return EXIT_SUCCESS;
}