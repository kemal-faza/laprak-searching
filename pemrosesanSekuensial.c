#include <stdio.h>

int main()
{
    int N, i;
    char firstLetter = 'A';

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    int tabNilai[N], hasilKonversi[N], frekuensiNilai[5];

    for (i = 0; i < 5; i++)
    {
        frekuensiNilai[i] = 0;
    }

    for (i = 0; i < N; i++)
    {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &tabNilai[i]);

        if (tabNilai[i] >= 80)
        {
            hasilKonversi[i] = 'A';
            frekuensiNilai[0]++;
        }
        else if (tabNilai[i] >= 70)
        {
            hasilKonversi[i] = 'B';
            frekuensiNilai[1]++;
        }
        else if (tabNilai[i] >= 55)
        {
            hasilKonversi[i] = 'C';
            frekuensiNilai[2]++;
        }
        else if (tabNilai[i] >= 40)
        {
            hasilKonversi[i] = 'D';
            frekuensiNilai[3]++;
        }
        else
        {
            hasilKonversi[i] = 'E';
            frekuensiNilai[4]++;
        }
    }

    for (i = 0; i < N; i++)
    {
        printf("%c = %d\n", firstLetter, frekuensiNilai[i]);
        firstLetter++;
    }

    return 0;
}