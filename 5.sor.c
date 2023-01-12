#include <stdio.h>

int main()
{
    int n, i;
    printf("Dizinin uzunlugunu dirini");
    scanf("%d", &n);

    int A[n], B[n];
    printf("Dizi elemanlarini giriniz..\n");
    for(i = 0; i < n; i++)
        scanf("%d", &A[i]);

    for(i = 0; i < n; i++)
        B[i] = -A[n - i - 1];

    printf("Ters cevrilmis dizi...\n");
    for(i = 0; i < n; i++)
        printf("%d ", B[i]);

    return 0;
}
