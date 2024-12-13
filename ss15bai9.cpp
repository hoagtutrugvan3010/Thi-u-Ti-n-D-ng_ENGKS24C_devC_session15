#include <stdio.h>
#include <string.h>

void xoaKyTu(char *chuoi, char kyTu) {
    int i, j = 0;
    int length = strlen(chuoi);

    for (i = 0; i < length; i++) {
        if (chuoi[i] != kyTu) {
            chuoi[j++] = chuoi[i];
        }
    }
    chuoi[j] = '\0'; 
}
	int main() {
    	char chuoi[1000] = "hoag tu trug van";
    	char kyTu;
   			printf("chuoi ban dau: %s\n", chuoi);
    		printf("nhap ki tu can xoa: ");
    		scanf(" %c", &kyTu);
    			xoaKyTu(chuoi, kyTu);
   			printf("chuoi sau khi xoa '%c': %s\n", kyTu, chuoi);

   	 return 0;
}

