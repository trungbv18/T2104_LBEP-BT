//nhap mang n so nguyen sx va tim so max sau do nhap them m so nguyen sx be>lon va tim so max luon
#include<stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("Nhap so phan tu mang: ");
	scanf("%d", &n);
	int *arr;
	arr = (int *)malloc(n* sizeof(int)); 
	for(int i=0;i<n;i++){
		printf("\nSo thu %d trong mang= ",i);
		scanf("%d", &arr[i]);
	}
		for(int i=0;i<n-1;i++){
		for (int j=0; j<n-i-1;j++){
			if (arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
			arr[j+1]=temp;	
			}
		}
	}
		for (int k=0;k<n;k++){
			printf("%d\t",arr[k]);
		}
		printf("\nSo lon nhat trong mang ban dau= %d",arr[n-1]);
		
	int m;
	printf("\nNhap so phan tu muon tang them cho mang: ");
	scanf("%d", &m);
	arr = (int *)realloc(arr,m*sizeof(int));
		for(int i=n;i<m+n;i++){
		printf("\nSo thu %d trong mang= ",i);
		scanf("%d", &arr[i]);
	}
		for(int i=0;i<m+n-1;i++){
		for (int j=0; j<m+n-i-1;j++){
			if (arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
			arr[j+1]=temp;	
			}
		}
	}
		for (int k=0;k<m+n;k++){
			printf("%d\t",arr[k]);
		}
		printf("\nSo lon nhat trong mang sau khi them= %d",arr[m+n-1]);
}

