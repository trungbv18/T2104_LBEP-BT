#include<stdio.h>
int main(){
	int a,b,y,bcnn;
	printf("Nhap vao so a:");
	scanf("%d", &a);
	printf("Nhap vao so b:");
	scanf("%d", &b);
	if(a>=b){
		y=a;
	}
	else{
		y=b;
	}
	int i;
	for(i=y;;i++){
	if(i%a==0 && i%b==0){
		bcnn=i;
	}
	}
	printf("Boi chung nho nhat cua 2 so la: %d",bcnn);
}
