#include<stdio.h>
int main(){
	int a,b,x,ucln;
	printf("Nhap vao so a:");
	scanf("%d", &a);
	printf("Nhap vao so b:");
	scanf("%d", &b);
	if(a<=b){
		x=a;
	}
	else{
		x=b;
	}
	int i;
	for(i=1;i<=x;i++){
	if(a%i==0 && b%i==0){
		ucln=i;
	}
	}
	printf("Uoc chung lon nhat cua 2 so la: %d",ucln);
}
