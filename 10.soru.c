#include <stdio.h>
#include <string.h>

int main()
{
    char cumle[255];
    printf("Cumle giriniz..\n ");
    scanf("%[^\n]s", cumle);

    int i;
    printf("Yeni cumle: ");
    for (i = 0; i < strlen(cumle); i++)
    {
        printf("%c%c", cumle[i], cumle[i]);
    }
    printf("\n");
    return 0;
}
