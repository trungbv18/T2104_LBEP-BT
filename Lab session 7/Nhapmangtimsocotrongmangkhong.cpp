#include<stdio.h>
int main(){
	int n,i,x;
	int count=0;
	printf("Nhap so phan tu cua mang:");
	scanf("%d", &n);
	int arr[n];
	for (i=0;i<n;i++){
		printf("So thu %d trong mang= ",i);
		scanf("%d", &arr[i]);
		}
	printf("Nhap vao 1 so de tim kiem co trong mang khong: ");
	scanf("%d", &x);
	for(i=0;i<n;i++){
		if (arr[i]==x){
		count++;
		}
	}
		if(count>=1){
			printf("Co %d trong mang vua nhap", x);

		}
		else{
			printf("Khong Co %d trong mang vua nhap", x);
		}
}
