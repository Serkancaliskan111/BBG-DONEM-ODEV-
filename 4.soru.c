#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    printf("Dizinin uzunlugunu giriniz...\n");
    scanf("%d", &n);

    int A[n], B[n], C[n];
    printf("Dizinin elemanlarini giriniz...\n");
    for(i = 0; i < n; i++)
        scanf("%n", &A[i]);

    for(i = 0; i < n; i++)
    {
        B[i] = A[i] * A[i];
        C[i] = sqrt(A[i]);
    }

    int scalar_product = 0;
    for(i = 0; i < n; i++)
        scalar_product += B[i] * C[i];

    printf(" B ve C skaler carpimi: %d", scalar_product);

    return 0;
}
