#include <stdio.h>
#include <string.h>

int main()
{
    char cumle[255];
    printf("Buyuk harflerle cumle giriniz...\n");
    scanf("%[^\n]s", cumle);

    int i;
    for(i = 0; i < strlen(cumle); i++)
    {
        if(i % 2 == 0)
            cumle[i] = toupper(cumle[i]);
        else
            cumle[i] = tolower(cumle[i]);
    }

    printf("Kucuk harflerle cumle ==>%s", cumle);

    return 0;
}
