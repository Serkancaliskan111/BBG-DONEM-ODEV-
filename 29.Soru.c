printf("C�mleyi girin: ");
gets(cevap);

for(i = 0; i < strlen(cevap); i++) {
    int uzunluk = 0;
    while(cevap[i] != ' ' && cevap[i] != '\0') {
        i++;
        uzunluk++;
    }
    if(uzunluk > max) {
        max = uzunluk;
        max_index = i - max;
    }
    if(uzunluk < min) {
        min = uzunluk;
        min_index = i - uzunluk;
    }
}
printf("En uzun ile en k�sa kelime aras�ndaki karakter say�s� fark�: %d", max - min);

return 0;
