#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,cv,s,p;
		printf("Nhap vao 3 so bat ky la 3 canh cua tam giac\n");
		printf("Nhap a: ");
		scanf("%f", &a);
		printf("Nhap b: ");
		scanf("%f", &b);
		printf("Nhap c: ");
		scanf("%f", &c);	
	while (a+b<=c || a+c<=b || b+c<=a){
		printf("So vua nhap vao khong la 3 canh cua tam giac.Hay nhap lai\n");
		printf("Nhap a: ");
		scanf("%f", &a);
		printf("Nhap b: ");
		scanf("%f", &b);
		printf("Nhap c: ");
		scanf("%f", &c);
	}
	printf("Day la 3 canh cua mot tam giac!\n");
	cv=a+b+c;
	printf("Chu vi tam giac la: %f\n", cv);
	p=cv/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("Dien tich tam giac la: %f ", s);
}
