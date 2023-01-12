#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char cumle[255];
    printf("Kucuk harflerle bir cümle giriniz...\n ");
    scanf("%[^\n]s", cumle);

    int i;
    if(cumle[0] != ' ')
        cumle[0] = toupper(cumle[0]);
    for(i = 1; i < strlen(cumle); i++)
    {
        if(cumle[i - 1] == ' ')
            cumle[i] = toupper(cumle[i]);
    }
    printf("Yeni cumle==> %s", sentence);

    return 0;
}
