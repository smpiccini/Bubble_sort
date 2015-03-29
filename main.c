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
    for (j=N;j>0;j--) {
        for (i=0;i<j;i++) {
            if (v[i]>v[i+1]) {
                scambia=v[i];
                v[i]=v[i+1];
                v[i+1]=scambia;
            }
        }
    }
    printf("In ordine crescente, i valori della lista sono:\n");
    for (i=0;i<N;i++) {
        printf("%d\n", v[i]);
    }
    return (EXIT_SUCCESS);
}

