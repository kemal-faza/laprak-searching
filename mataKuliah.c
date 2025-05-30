#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_MK 100

void addMK(int TabMK[], int *NMK)
{
    int MKX, i;
    printf("Masukkan kode mata kuliah yang baru: ");
    scanf("%d", &MKX);

    for (i = 0; i < *NMK; i++)
    {
        if (TabMK[i] == MKX)
        {
            printf("Kode mata kuliah sudah ada.\n");
            return;
        }
    }

    if (*NMK < MAX_MK)
    {
        TabMK[*NMK] = MKX;
        (*NMK)++;
        printf("Kode mata kuliah berhasil ditambahkan.\n");
    }
    else
    {
        printf("Tabel sudah penuh.\n");
    }
}

void sortMK(int TabMK[], int NMK)
{
    int i, pass, temp, iMax;
    for (pass = 0; pass < NMK - 1; pass++)
    {
        iMax = pass;
        for (i = pass + 1; i < NMK; i++)
        {
            if (TabMK[iMax] >= TabMK[i])
            {
                iMax = i;
            }
        }

        temp = TabMK[iMax];
        TabMK[iMax] = TabMK[pass];
        TabMK[pass] = temp;
    }
}

void printMK(int TabMK[], int NMK)
{
    printf("[");
    for (int i = 0; i < NMK; i++)
    {
        printf("%d", TabMK[i]);
        if (i < NMK - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
}

int main()
{
    int NMK, N;
    int TabMK[MAX_MK] = {1, 2, 3, 4, 6};
    NMK = 5;

    printf("Tabel sebelum ditambahkan elemen baru: ");
    printMK(TabMK, NMK);

    printf("Berapa kali anda ingin melakukan penambahan: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        addMK(TabMK, &NMK);
    }

    sortMK(TabMK, NMK);

    printf("Tabel setelah ditambahkan elemen baru: ");
    printMK(TabMK, NMK);

    return 0;
}