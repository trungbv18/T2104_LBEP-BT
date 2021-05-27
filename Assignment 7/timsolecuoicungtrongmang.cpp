#include<stdio.h>
int main(){
	int n,i,sole;
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d", &n);
	int arr[n];
	printf("Nhap vao lan luot cac so nguyen\n");
	for(i=0;i<n;i++){
		printf("So nguyen thu %d cua mang= ",i);
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i++){
		if (arr[i]%2 !=0){
		sole=arr[i];
		}
	}
	printf("So le cuoi cung trong mang vua nhap la %d", sole);
}
