#include <stdio.h>

int main()
{
    int N, X, i, IX, last;

    printf("Masukkan panjang tabel: ");
    scanf("%d", &N);

    int T[N];

    for (i = 0; i < N; i++)
    {
        printf("Masukkan nilai tabel elemen ke-%d: ", i);
        scanf("%d", &T[i]);
    }

    printf("Masukkan nilai X: ");
    scanf("%d", &X);

    last = T[N - 1];
    i = 0;

    while (T[i] < X)
    {
        i++;
    }

    T[N - 1] = last;

    if (i < N - 1 || X == last)
    {
        IX = i;
    }
    else
    {
        IX = -1;
    }

    printf("IX = %d\n", IX);

    return 0;
}