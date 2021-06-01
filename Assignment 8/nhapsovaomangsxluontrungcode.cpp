//nhap n so nguyen nhap gia tri vao va mang sap xep luon
#include<stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu mang: ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("\nSo thu %d trong mang= ",i);
		scanf("%d", &arr[i]);
		for (int j=i; j>=1;j--){
			if (arr[j]<arr[j-1])
			{
				int temp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;		
			}
		}

		for (int k=0;k<=i;k++){
			printf("%d\t",arr[k]);
	}	
}
}
