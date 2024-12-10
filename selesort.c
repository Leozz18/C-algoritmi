#include <stdio.h>

void selection_sort(int array[], int n);

int main() {
	int array[] = {64, 25, 12, 22, 11};
	int n = sizeof(array) / sizeof(array[0]);

	printf("Array originale: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");

	selection_sort(array, n);

	printf("Array ordinato: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");

	return 0;
}

void selection_sort(int array[], int n) {
	for (int i = 0; i < n - 1; i++) {

		int min_idx = i;
		for (int j = i + 1; j < n; j++) {
			if (array[j] < array[min_idx]) {
				min_idx = j;
			}
		}


		int temp = array[min_idx];
		array[min_idx] = array[i];
		array[i] = temp;
	}
}
