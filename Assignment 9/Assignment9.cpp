#include<stdio.h>
#include "thuvienas9.h"	
int main(){
	int n;
	printf("Nhap so phan tu cua mang= ");
	scanf("%d", &n);
	int arr[n];
	for (int i=0;i<n;i++){
		printf("Phan tu thu %d cua mang= ",i);
		scanf("%d", &arr[i]);
	}
	//In ra man hinh cac so le co trong mang
	insole(arr,n);
	//Tim kiem so trong mang
	int x;
	printf("\nSo can tim kiem trong mang= ");
	scanf("%d", &x);
	timkiemsotrongmang(arr,n,x);
	//Tim ucln trong 2 so 
	int a,b;
	printf("\nNhap vao so a= ");
	scanf("%d", &a);
	printf("Nhap vao so b= ");
	scanf("%d", &b);
	printf("Uoc chung lon nhat cua %d va %d = %d", a,b,ucln(a,b));
	//tim BCNN
	printf("\nBoi chung nho nhat cua %d va %d = %d", a,b,bcnn(a,b));

}
	
