Copy code
#include <stdio.h>

int main()
{
    int n, i;
    printf("Dizinin Uzunlugunu giriniz..\n");
    scanf("%d", &n);

    int A[n];
    for(i = 0; i < n; i++)
    {
        if(i % 2 == 0)
            A[i] = 0;
        else
            A[i] = 1;
    }

    printf("Cevap olan dizi\n");
    for(i = 0; i < n; i++)
        printf("%d ", A[i]);

    return 0;
}
