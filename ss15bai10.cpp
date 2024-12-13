#include <stdio.h>
#include <string.h>

void demKyTu(char *chuoi) {
    int tanSo[256] = {0}; 
    int i;
    for (i = 0; chuoi[i] != '\0'; i++) {
        tanSo[(unsigned char)chuoi[i]]++;
    }
    printf("cac ky tu va so lan xuat hien:\n");
    for (i = 0; i < 256; i++) {
        if (tanSo[i] > 0) {
            printf("%c: %d\n", i, tanSo[i]);
        }
    }
}

int main() {
    char chuoi[100] = "em yeu thay Back 24kright";
    printf("chuoi ban dau la: %s\n", chuoi);
    demKyTu(chuoi);

    return 0;
}


