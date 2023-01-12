#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, element;
    printf("Dizi uzunlugunu giriniz\n ");
    scanf("%d", &n);

    int arr[n];
    printf("dizi elemanlarini giriniz\n ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int count[n];
    for(i = 0; i < n; i++)
        count[i] = -1;

    for(i = 0; i < n; i++)
    {
        element = arr[i];
        if(count[element] == -1)
            count[element] = 1;
        else
            count[element]++;
    }

    for(i = 0; i < n; i++)
    {
        if(count[i] != -1)
            printf("%d : %d\n", i, count[i]);
    }

    return 0;
}
