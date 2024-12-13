#include<stdio.h>
#include<string.h>
int main(){
	char str[]= "hoag tu trug van 30 10 20000006";
	int len= strlen(str);
	int sokitu=0,sochuso=0,sokitudacbiet=0;
	for(int i=0;i<len;i++){
		if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
			sokitu++;
		}else if(str[i]>='0' && str[i] <='9'){
			sochuso++;
		}else {
			sokitudacbiet++;
		}
	}
	printf("so luong ki tu la : %d\nso luong chu so la : %d\nso luong ki tu dac biet la : %d",sokitu,sochuso,sokitudacbiet);
	


 return 0;
 }

