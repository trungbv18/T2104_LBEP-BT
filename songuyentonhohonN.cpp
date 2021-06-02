#include<stdio.h>
//hoi thay tai sao dat int count=0 o dau lai ko dc dat sau vong lap for lai dc
int main(){
	int n;
	printf("Nhap vao so nguyen duong n: ");
	scanf("%d", &n);
	printf("Cac so nguyen to nho hon %d la: ",n);
	for (int i=2;i<n;i++){
	int count=0;
	for (int j=1;j<=i;j++){
	if(i%j==0){
	count++;
	}
	}
	if(count==2){
	printf("%d ",i);
	}
	}

}
