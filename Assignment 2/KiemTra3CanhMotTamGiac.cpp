//NHAP VAO 3 SO A B C KIEM TRA NO CO PHAI 3 CANH TAM GIAC KHONG VA TINH S VA P
//HOI THAY TAI SAO DAT Z=A+B+C O DAU LAI KO TINH DUOC CHU VI DAT O DUOI LAI TINH DUOC
#include <stdio.h>
#include <math.h>
	int main(){
	float a,b,c,p,x,dt;
	printf("Nhap vao lan luot 3 so a b c\n");
	printf("Nhap a: ");
	scanf("%f", &a);
	printf("Nhap b: ");
	scanf("%f", &b);
	printf("Nhap c: ");
	scanf("%f", &c);
	if (a+b>c && a+c>b && b+c>a){
		printf("%f %f %f la 3 canh cua mot tam giac\n",a,b,c);
		p=(a+b+c);
		printf("Chu vi cua tam giac la: %f\n",p);
		x=p/2;
		dt=sqrt(x*(x-a)*(x-b)*(x-c));
		printf("Dien tich cua tam giac la: %f",dt);
		}
	else{
		printf("%f %f %f khong la 3 canh cua mot tam giac",a,b,c);
		}
		
	}
