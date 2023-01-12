#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    int length, i;

    printf("Cumle giriniz...\n ");
    scanf("%[^\n]s", sentence);

    length = strlen(sentence);

    printf("Tersten cumle : ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", sentence[i]);
    }

    return 0;
}
