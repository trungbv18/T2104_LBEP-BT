#include<stdio.h>
int main(){
	int nam;
	int TienGui,TienThuVe;
	printf("Nhap vao so tien gui: ");
	scanf("%d", &TienGui);
	printf("So tien mong muon thu ve: ");
	scanf("%d", &TienThuVe);
	int year=0;
	while(TienGui<=TienThuVe){
	TienGui=TienGui+TienGui*8/100;
	year=year+1;
	}
	printf("So nam phai cho doi la: %d nam",year);
	}
