#include<stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu mang: ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0;i<n;i++){
		if (i==0){
			printf("\nNhap so thu %d trong mang= ",i);
			scanf("%d", &arr[i]);
		}
		else{
		
			int x;
			int count=0;
			while (count==0){
			printf("\Nhap so thu %d trong mang= ",i);
			scanf("%d", &x);
			for(int i=0;i<n;i++){
				if (arr[i]==x){
					count++;
					break;
				}
		}
			if (count>0){
				printf("So %d da co trong mang\n",x);
				count=0;
			}
			else{
				arr[i]=x;
				break;
			}
		}
		}
		}
		printf("Cac so trong mang sau khi nhap la: ");
		for(int i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
}
