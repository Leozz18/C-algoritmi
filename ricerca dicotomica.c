#include <stdio.h>

int ricercaDicotomica(int numeri[], int lunghezza, int valore) {
    int inizio = 0;
    int fine = lunghezza - 1;

    while (inizio <= fine) {
        int meta = (inizio + fine) / 2;
        if (numeri[meta] == valore) {
            return meta;
        }
        if (valore < numeri[meta]) {
            fine = meta - 1;
        } else {
            inizio = meta + 1;
        }
    }
    return -1;
}

int main() {
    int numeri[] = {1, 3, 5, 7, 9, 11};
    int lunghezza = 6;
    int valore = 7;

    int risultato = ricercaDicotomica(numeri, lunghezza, valore);

    if (risultato != -1) {
        printf("Valore %d trovato all'indice %d.\n", valore, risultato);
    } else {
        printf("Valore %d non trovato nell'array.\n", valore);
    }

    return 0;
}
