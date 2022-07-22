#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <limits.h>

int main(){
	int contador;
	unsigned long int total;
	total=0;
    #pragma omp parallel for shared(total) private(contador)
	for (contador = 1; contador <= 1000; contador=contador+1) {
		total=total+contador;
	}
	printf("suma %lu Pili \n",total);
}

