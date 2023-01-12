#include <stdio.h>
#include <stdlib.h>

void degistir(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[], int n)
{
    int i, j;
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] < arr[j + 1])
                degistir(&arr[j], &arr[j + 1]);
        }
    }
}

int main()
{
    int n, i;
    printf("Dizinin uzunlugunu giriniz...\n ");
    scanf("%d", &n);

    int A[n], B[n], C[n], D[n];
    printf("A dizisinin elemanlarini giriniz...\n ");
    for(i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("B dizisinin elemanlarini giriniz...\n ");
    for(i = 0; i < n; i++)
        scanf("%d", &B[i]);

    printf("C dizisinin elemanlarini giriniz...\n");
    for(i = 0; i < n; i++)
        scanf("%d", &C[i]);

    for(i = 0; i < n; i++)
        D[i] = A[i] + B[i] - C[i];

    sort(D, n);

    printf("D dizisinin elamanlari...\n");
    for(i = 0; i < n; i++)
        printf("%d ", D[i]);

    return 0;
}
