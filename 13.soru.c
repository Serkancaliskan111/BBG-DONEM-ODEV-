#include <stdio.h>
#include <string.h>

int main()
{
    char c�mle[255], kelime[50];
    printf("Bir c�mle girin: ");
    scanf("%[^\n]s", c�mle);

    int i, j, sonHarf, sayac = 0;
    for (i = 0; i < strlen(c�mle); i++)
    {
        j = 0;
        while (c�mle[i] != ' ' && i < strlen(c�mle))
        {
            kelime[j] = c�mle[i];
            j++;
            i++;
        }
        kelime[j] = '\0';
        sonHarf = strlen(kelime) - 1;
        if (kelime[sonHarf] == 'a')
            sayac++;
    }
    printf("C�mlede %d adet 'a' ile biten kelime var\n", sayac);
    return 0;
}
