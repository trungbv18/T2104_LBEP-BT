// 3. Nh?p m?ng n s? nguyên, tìm s? lu?ng các s? duong liên ti?p nhi?u nh?t
#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d", &n);
	int arr[n];
	for (int i=0;i<n;i++){
		printf("Phan tu thu %d trong mang= ",i);
		scanf("%d", &arr[i]);
	}
	int count=0; 
	int count1=0;
	for (int i=0;i<n;i++){
		if (arr[i]>0) {
			count+=arr[i];
		}
		else{
			count=0;
			}
		if(count>count1){
			count1=count;
			}
	}
	printf("Chuoi so duong lien tiep co tong max = %d",count1);
}
