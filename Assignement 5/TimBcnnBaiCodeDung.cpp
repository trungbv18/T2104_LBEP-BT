#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap vao so a:");
	scanf("%d", &a);
	printf("Nhap vao so b:");
	scanf("%d", &b);
	int max,bcnn;
	if(a>b){
		max=a;
	}
	else{
		max=b;
	}
	for(int i=max;i<=a*b;i++){
		if (i%a==0 && i%b==0){
			bcnn=i;
			break;
		}
	}
	printf("Boi chung nho nhat cua 2 so la: %d",bcnn);
}
