#include <stdio.h>
#include <string.h>

void vietHoaChuCaiDau(char *chuoi) {
    int i;
    int vietHoa = 1; 

    for (i = 0; chuoi[i] != '\0'; i++) {
        if (vietHoa && ((chuoi[i] >= 'a' && chuoi[i] <= 'z') || (chuoi[i] >= 'A' && chuoi[i] <= 'Z'))) {
            if (chuoi[i] >= 'a' && chuoi[i] <= 'z') {
                chuoi[i] = chuoi[i] - ('a' - 'A');
            }
            	vietHoa = 0;
        } else if (chuoi[i] == ' ') {
            vietHoa = 1;
        }
    }
}

	int main() {
   		char chuoi[] = "hoag tu trug van";
   		vietHoaChuCaiDau(chuoi);
   		printf("chuoi sau khi viet hoa chu cai dau la: %s\n", chuoi);



    return 0;
}

