//nhap vao 1 so in ra cac so chan nho hon n
#include<stdio.h>
int main(){
	int n,i;
	printf("Nhap vao mot so bat ky: ");
	scanf("%d", &n);
    printf("Cac so chan nho hon %d la: ",n);
	for(i=0;i<n;i++){
		if (i%2==0){
	printf("%d ",i);
	}	
	}
}
