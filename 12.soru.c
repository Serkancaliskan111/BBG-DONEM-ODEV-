#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
    char c�mle[255];
    printf("Bir c�mle girin: ");
    scanf("%[^\n]s", c�mle);

    int i;
    system("color 1E");
    printf("C�mle: ");
    for (i = 0; i < strlen(c�mle); i++)
    {
        printf("%c", c�mle[i]);
        Sleep(1000);
        system("color 4E");
    }
    printf("\n");
    return 0;
}
