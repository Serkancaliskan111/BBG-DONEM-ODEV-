#include <stdio.h>
#include <string.h>

int main()
{
    char cümle[255], kelime[50];
    printf("Bir cümle girin: ");
    scanf("%[^\n]s", cümle);

    int i, j, sonHarf, sayac = 0;
    for (i = 0; i < strlen(cümle); i++)
    {
        j = 0;
        while (cümle[i] != ' ' && i < strlen(cümle))
        {
            kelime[j] = cümle[i];
            j++;
            i++;
        }
        kelime[j] = '\0';
        sonHarf = strlen(kelime) - 1;
        if (kelime[sonHarf] == 'a')
            sayac++;
    }
    printf("Cümlede %d adet 'a' ile biten kelime var\n", sayac);
    return 0;
}
