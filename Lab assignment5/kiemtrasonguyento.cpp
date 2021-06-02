#include<stdio.h>
int main(){
	int n,i;
	int count=0;
	printf("Nhap so nguyen n:");
	scanf("%d", &n);
	if(n<=1){
		printf("%d ko la so nguyen to",n);
	}
	else{
	for(i=2;i<n;i++){
	if(n%i==0){
	count++;
	}
	}
	if(count>=1){
		printf("%d khong phai so nguyen to", n);
	}
	else{
		printf("%d la so nguyen to", n);
	}
	}
	
}
