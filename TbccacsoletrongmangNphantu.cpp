#include<stdio.h>
int main(){
	int n,i;
	int count=0;
	float t=0;
	printf("Nhap so phan tu cua mang:");
	scanf("%d", &n);
	int arr[n];
	for (i=0;i<n;i++){
		printf("So thu %d trong mang= ",i);
		scanf("%d", &arr[i]);
		}
	for (i=0;i<n;i++){
		if (arr[i] %2!=0){
			t+=arr[i];
			count++;
	}
	}

	printf("Trung binh cong cac so le trong mang = %f",t/count);

}
