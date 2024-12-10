#include <stdio.h>


void bubblesort(int array[], int n);

int main() {
	int array[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(array) / sizeof(array[0]);

	printf("Array originale: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");

	bubblesort(array, n);

	printf("Array ordinato: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");

	return 0;
}


void bubblesort(int array[], int n) {
	for (int i = 0; i < n-1; i++) {

		int scambi = 0;


		for (int j = 0; j < n-i-1; j++) {
			if (array[j] > array[j+1]) {

				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;


				scambi = 1;
			}
		}


		if (scambi == 0) {
			break;
		}
	}
}
