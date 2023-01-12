#include <stdio.h>
#include <ctype.h>

int main() {
    char cumle[1000];
    int i;

    printf("Cumle girin: ");
    fgets(cumle, sizeof(cumle), stdin);

    for (i = 0; cumle[i] != '\0'; i++) {
        if (i == 0 || isspace(cumle[i-1])) {
            cumle[i] = toupper(cumle[i]);
        }
    }

    printf("Cumle (ilkel harfleri buyuk): %s", cumle);

    return 0;
}
