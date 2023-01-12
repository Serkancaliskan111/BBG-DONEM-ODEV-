#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
    char cümle[255];
    printf("Bir cümle girin: ");
    scanf("%[^\n]s", cümle);

    int i;
    system("color 1E");
    printf("Cümle: ");
    for (i = 0; i < strlen(cümle); i++)
    {
        printf("%c", cümle[i]);
        Sleep(1000);
        system("color 4E");
    }
    printf("\n");
    return 0;
}
