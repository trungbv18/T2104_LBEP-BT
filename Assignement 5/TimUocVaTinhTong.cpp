//nhap vao 1 so tim cac uoc va tinh tong cac uoc cua no
#include<stdio.h>
int main(){
	int n;
	int s=0;
	printf("Nhap vao 1 so bat ky: ");
	scanf("%d", &n);
	if(n==0){
		printf("So nhap vao khong dung!");
	}
	else if(n>0){
	printf("Cac uoc cua %d la: ",n);
	for(int i=1; i<=n; i++){
	if(n%i==0){
	printf("%d ",i);
	s=s+i;
	}
	}
	printf("\nTong cac uoc tren bang: %d",s);	
	}
	if(n<0){
	printf("Cac uoc cua %d la: ",n);
	for(int i=n; i<=-n; i++){
	if(n%i==0){
	printf("%d ",i);
	s=s+(i);
	}
	}
	printf("\nTong cac uoc tren bang: %d",s);	
	}
	}
