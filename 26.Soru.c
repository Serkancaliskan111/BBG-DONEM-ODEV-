#include <stdio.h>

int main() {
    int num, max = 0, i;

    printf("Int degere sahip bir sayi giriniz...\n ");
    scanf("%d", &num);


    for (i = 1; i <= num; i++) {
        max = max * 10 + 9;
    }

    printf("en b�y�k tamsay� ile %d basamakl� en k���k tamsay� aras�ndaki fark  %d", num, max, max - num);

    return 0;
}
