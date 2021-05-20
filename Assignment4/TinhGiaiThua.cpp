#include<stdio.h>
int main(){
	int n,y;
	float s;
	printf("nhap vao so nguyen duong can tinh giai thua: ");
	scanf("%d", &n);
	s=y=n;
	if(n<0){
	printf("so nhap vao khong dung!");
	}	
	else{
		while(n>1){
		s=s*(n-1);
		n--;
		}
		printf("%d ! = %f", y ,s);
	}
}
