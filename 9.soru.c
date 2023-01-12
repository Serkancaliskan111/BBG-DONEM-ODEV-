#include <stdio.h>
#include <string.h>

int main()
{
    char cumle[255], kelimeler[50];
    printf("Cumle girin\n ");
    scanf("%[^\n]s", cumle);
    printf("Kelime girin");
    scanf("%s", kelimeler);

    if(strstr(cumle, kelimeler) == NULL)
        printf("%s kelimesi dizide bulunamadý.\n", kelimeler);
    else
        printf("%s kelimesi dizide bulundu\n", kelimeler);

    return 0;
}
