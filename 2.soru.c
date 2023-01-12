#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("Dizinin uzunlugunu giriniz...\n ");
    scanf("%d", &n);

    int A[n], B[n], C[n];
    printf("Elemanlari giriniz...\n ");
    for(i = 0; i < n; i++)
        scanf("%d", &A[i]);

    int sum = 0;
    for(i = 0; i < n; i++)
        sum += A[i];
    float avg = (float)sum / n;

    int b_count = 0, c_count = 0;
    for(i = 0; i < n; i++)
    {
        if(A[i] < avg)
            B[b_count++] = A[i];
        else
            C[c_count++] = A[i];
    }

    printf("Aritmetik ortalama: %.2f\n", avg);
    printf("Ortalamadan kucuk olan elemanlar:\n");
    for(i = 0; i < b_count; i++)
        printf("%d ", B[i]);

    printf("\nortalamadan daha buyuk olan elemanlar:\n");
    for(i = 0; i < c_count; i++)
        printf("%d ", C[i]);

    return 0;
}
