//NHAP VAO 3 SO A B C GIAI PHUONG TRINH BAC 2
#include <stdio.h>;
#include <math.h>;
int main(){
	float a,b,c,x;
	printf("Nhap vao lan luot 3 so a b c\n");
	printf("Nhap a: ");
	scanf("%f",&a);
	printf("Nhap b: ");
	scanf("%f",&b);
	printf("Nhap c: ");
	scanf("%f",&c);
	if(a==0 && b==0 && c==0){
		printf("Phuong trinh co vo so nghiem");
		}
	if(a==0 && b==0 && c!=0 ){
		printf("Phuong trinh vo nghiem");
		}
	if(a==0 && b!=0){
		x=-c/b;
		printf("Gia tri x= %f",x);
		}
	if(a!=0){
		float delta=b*b-4*a*c;
		if (delta<0){
			printf("Phuong trinh vo nghiem");
			}
		if (delta ==0){
			x=-b/(2*a);
			printf("Gia tri x= %f",x);
			}
		if (delta >0){
			printf("Phuong trinh co 2 nghiem phan biet: \n");
			x=(-b+sqrt(delta))/(2*a);
			printf("Gia tri x1= %f\n",x);
			x=(-b-sqrt(delta))/(2*a);
			printf("Gia tri x2= %f",x);
		}
		}
	}
