#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao 1 so: ");
	scanf("%d",&n);	
	printf("Cac so dao nguoc nho hon %d la: ",n);
	int x,y;	
	for (int i=1;i<n;i++){
	x=0;
	for(int y=i;y!=0;y/=10){
		x=y%10+x*10;
	}
	printf("\n%d",x);
	} 
}
