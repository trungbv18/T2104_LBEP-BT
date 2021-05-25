#include<stdio.h>
int main(){
	int nam;
	int TienGui;
	printf("nhap vao so tien gui: ");
	scanf("%d", &TienGui);
	printf("so nam gui: ");
	scanf("%d", &nam);
	int year=0;
	while(year<nam){
	TienGui=TienGui+TienGui*8/100;
	year=year+1;
	}
	printf("so tien la: %d",TienGui);
	}
