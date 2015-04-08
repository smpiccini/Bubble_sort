#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(int argc, char** argv) {
    int v[N];
    int i,j,scambia;
    for (i=0;i<N;i++) {
        printf("Inserisci il %d° valore: ", i+1);
        scanf("%d", &v[i]);
    }
    for (i=0;i<N;i++) {
        for (j=N-1;j>i;j--) {
            if (v[j]<v[j-1]) {
                scambia=v[j];
                v[j]=v[j-1];
                v[j-1]=scambia;
            }
        }
    }
    printf("In ordine crescente, i valori della lista sono:\n");
    for (i=0;i<N;i++) {
        printf("%d\n", v[i]);
    }
    return (EXIT_SUCCESS);
}

