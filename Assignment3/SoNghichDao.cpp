//NHAP VAO SO NGUYEN DUONG KHONG QUA 4 CHU SO IN RA SO NGHICH DAO CUA NO
#include<stdio.h>
int main(){
int SoNhap;
printf("Nhap vao 1 so nguyen duong khong qua 4 chu so: ");
scanf("%d", &SoNhap);
if( SoNhap<0 || SoNhap>9999){
printf("So nhap vao khong dung.Hay nhap lai ");
}
else{
	int b=SoNhap;

	int so4=SoNhap%10;
	SoNhap/=10;
	int so3=SoNhap%10;
	SoNhap/=10;
	int so2=SoNhap%10;
	int so1=SoNhap/10;
	if(b>=1 && b<=9){
	printf("Khong co so nghich dao");
}
	if(b>=10 && b<=99){
	printf("So nghich dao cua so %d la %d%d: ",b,so4,so3 );
}
	if(b>=100 && b<=999){
	printf("So nghich dao cua so %d la %d%d%d: ",b,so4,so3,so2 );
}
	if(b>=1000 && b<=9999){
	printf("So nghich dao cua so %d la %d%d%d%d: ",b,so4,so3,so2,so1 );
}
}
}
