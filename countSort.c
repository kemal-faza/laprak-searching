#include <stdio.h>
#include <stdlib.h>

void CountSORT(int T[], int N)
{
    // Mencari nilai minimum dan maksimum dalam array T
    int ValMin = T[0], ValMax = T[0];
    for (int i = 1; i < N; i++)
    {
        if (T[i] < ValMin)
            ValMin = T[i];
        if (T[i] > ValMax)
            ValMax = T[i];
    }

    // Membuat array TabCount dengan ukuran sesuai range nilai
    int range = ValMax - ValMin + 1;
    int *TabCount = (int *)calloc(range, sizeof(int));

    // Inisialisasi TabCount
    for (int i = 0; i < range; i++)
    {
        TabCount[i] = 0;
    }

    // Counting: menghitung frekuensi setiap elemen
    for (int i = 0; i < N; i++)
    {
        TabCount[T[i] - ValMin]++;
    }

    // Pengisian kembali: T₁ ≤ T₂ ... ≤ Tₙ
    int K = 0;
    for (int i = 0; i < range; i++)
    {
        if (TabCount[i] != 0)
        {
            // Mengulang sebanyak TabCount[i] kali
            for (int j = 0; j < TabCount[i]; j++)
            {
                T[K] = i + ValMin;
                K++;
            }
        }
    }

    // Bebaskan memori
    free(TabCount);
}

int main()
{
    int N;
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &N);

    int *T = (int *)malloc(N * sizeof(int));

    printf("Masukkan %d elemen: ", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &T[i]);
    }

    CountSORT(T, N);

    printf("Array setelah diurutkan: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", T[i]);
    }
    printf("\n");

    free(T);
    return 0;
}