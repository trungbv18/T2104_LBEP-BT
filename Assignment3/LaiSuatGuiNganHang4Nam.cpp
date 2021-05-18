//GUI 4000$ VAO NGAN HANG LAI 8%/NAM THÌ SAU 4 NAM LAI BN NEU GUI 4 NAM LS CONG DON
#include<stdio.h>
int main(){
	float a;
	printf("Nhap vao so tien gui ngan hang trong 4 nam: ");
	scanf("%f",&a);
	float nam1=a+a*8/100;
	float nam2=nam1+nam1*8/100;
	float nam3=nam2+nam2*8/100;
	float nam4=nam3+nam3*8/100;
	printf("Lai suat 8%% / nam.Tong so tien sau 4 nam ca goc va lai cong don la: %f",nam4);
	}
