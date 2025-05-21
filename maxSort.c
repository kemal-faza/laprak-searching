#include <stdio.h>

int main()
{
    int N, i, pass, temp, IMax;

    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    int T[N];
    for (i = 0; i < N; i++)
    {
        printf("Masukkan nilai tabel elemen ke-%d: ", i + 1);
        scanf("%d", &T[i]);
    }

    for (pass = 0; pass < N - 1; pass++)
    {
        IMax = pass;
        for (i = pass + 1; i < N; i++)
        {
            if (T[IMax] <= T[i])
            {
                IMax = i;
            }
        }

        temp = T[IMax];
        T[IMax] = T[pass];
        T[pass] = temp;
    }

    for (i = 0; i < N; i++)
    {
        if (i == 0)
        {
            printf("[%d", T[i]);
        }
        else if (i == N - 1)
        {
            printf(", %d]", T[i]);
        }
        else
        {
            printf(", %d", T[i]);
        }
    }

    return 0;
}