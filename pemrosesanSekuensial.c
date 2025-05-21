#include <stdio.h>

int main()
{
    int N, i, banyakA = 0, banyakB = 0, banyakC = 0, banyakD = 0, banyakE = 0;

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    int tabNilai[N], hasilKonversi[N];

    for (i = 0; i < N; i++)
    {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &tabNilai[i]);

        if (tabNilai[i] >= 80)
        {
            hasilKonversi[i] = 'A';
            banyakA++;
        }
        else if (tabNilai[i] >= 70)
        {
            hasilKonversi[i] = 'B';
            banyakB++;
        }
        else if (tabNilai[i] >= 55)
        {
            hasilKonversi[i] = 'C';
            banyakC++;
        }
        else if (tabNilai[i] >= 40)
        {
            hasilKonversi[i] = 'D';
            banyakD++;
        }
        else
        {
            hasilKonversi[i] = 'E';
            banyakE++;
        }
    }

    printf("A = %d\n", banyakA);
    printf("B = %d\n", banyakB);
    printf("C = %d\n", banyakC);
    printf("D = %d\n", banyakD);
    printf("E = %d\n", banyakE);

    return 0;
}