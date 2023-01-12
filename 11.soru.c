#include <stdio.h>
#include <string.h>

int main()
{
    char kelime[255];
    printf("Bir kelime girin: ");
    scanf("%s", kelime);

    int i;
    printf("Kelime: ");
    for (i = 0; i < strlen(kelime); i++)
    {
        printf("%c ", kelime[i]);
    }
    printf("\n");
    return 0;
}
