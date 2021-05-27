// 2. Nh?p m?ng n s? nguyên, tìm s? duong nh? nh?t

#include<stdio.h>
int main(){
	int n,i,j,min;
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d", &n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("So thu %d trong mang= ",i);
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i++){
	if (arr[i]>0){
		min=arr[i];
		break;
		}
		}
	for (j=i+1;j<n;j++){
		if (arr[j]>0 && arr[j]<min ){
			min=arr[j];
		}
		}
		printf("So nguyen duong nho nhat trong mang= %d", min);
	}




