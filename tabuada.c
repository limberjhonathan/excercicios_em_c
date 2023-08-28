#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int tamanho;

	printf("Digite o tamanho de sua array: ");
	scanf_s("%d", &tamanho);

	int* myArray = (int*)malloc(tamanho * sizeof(int));

	for (int i = 0; i < tamanho; i++) {
		printf("Digite o %d° valor de sua array: ", i+1);
		scanf_s("%d", &myArray[i]);
	}
	
	for (int v = 0; v < tamanho; v++) {
		printf("Essa é a tabuada do %d\n", v);
		for (int i = 0; i <= 10; i++) {
			printf("%d X %d = %d\n", myArray[v], i, myArray[v] * i);
		}
		printf("\n");
	}
}