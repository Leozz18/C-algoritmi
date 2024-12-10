#include <stdio.h>

void insertsort(int vet[], int n, int lunghezza);
int trovaindice(int vet[], int n, int lunghezza);
void shiftr(int vet[], int lunghezza, int index);
void nicocado(int vet[], int n, int lunghezza);

int main() {
    int vet[] = {0, 0, 0, 0, 0}, lunghezza = 5;

    printf("Inserisci 5 numeri:\n");
    for (int i = 0; i < lunghezza; i++) {
        int n;
        scanf("%d", &n);
        insertsort(vet, n, lunghezza);
    }

    printf("\nArray ordinato: ");
    for (int j = 0; j < lunghezza; j++) {
        printf("%d ", vet[j]);
    }
    printf("\n");

    int valore_da_cercare;
    printf("\nInserisci un valore da cercare: ");
    scanf("%d", &valore_da_cercare);

    nicocado(vet, valore_da_cercare, lunghezza);

    return 0;
}

void insertsort(int vet[], int n, int lunghezza) {
    int index = trovaindice(vet, n, lunghezza);
    shiftr(vet, lunghezza, index);
    vet[index] = n;
}

int trovaindice(int vet[], int n, int lunghezza) {
    int index = 0;

    while (index < lunghezza && vet[index] < n && vet[index] != 0) {
        index++;
    }
    return index;
}

void shiftr(int vet[], int lunghezza, int index) {
    for (int i = lunghezza - 1; i > index; i--) {
        vet[i] = vet[i - 1];
    }
}

void nicocado(int vet[], int n, int lunghezza) {
    int basso = 0, alto = lunghezza - 1;
    int media = 0;

    while (basso <= alto) {
        media = basso + (alto - basso) / 2;

        if (n == vet[media]) {
            printf("Valore trovato all'indice: %d\n", media);
            return; 
        }

        if (n < vet[media]) {
            alto = media - 1; 
        } else {
            basso = media + 1; 
        }
    }

    printf("Valore non trovato.\n");
}
