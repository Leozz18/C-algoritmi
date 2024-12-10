#include <stdio.h>


void scambia(int array[], int indice1, int indice2) {
    int temporaneo = array[indice1];
    array[indice1] = array[indice2];
    array[indice2] = temporaneo;
}


int partizione(int array[], int basso, int alto) {
    int pivot = array[alto]; 
    int indiceMinore = basso - 1; 

    for (int i = basso; i < alto; i++) {
        if (array[i] < pivot) { 
            indiceMinore++;
            scambia(array, indiceMinore, i);
        }
    }
    scambia(array, indiceMinore + 1, alto); 
    return indiceMinore + 1;
}

void quicksort(int array[], int basso, int alto) {
    if (basso < alto) {
        int indicePivot = partizione(array, basso, alto); 

        
        quicksort(array, basso, indicePivot - 1);
        quicksort(array, indicePivot + 1, alto);
    }
}

// Funzione per stampare un array
void stampaArray(int array[], int dimensione) {
    for (int i = 0; i < dimensione; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}


int main() {
    int numeri[] = {10, 7, 8, 9, 1, 5};
    int dimensione = sizeof(numeri) / sizeof(numeri[0]);

    printf("Array originale:\n");
    stampaArray(numeri, dimensione);

    quicksort(numeri, 0, dimensione - 1);

    printf("Array ordinato:\n");
    stampaArray(numeri, dimensione);

    return 0;
}
