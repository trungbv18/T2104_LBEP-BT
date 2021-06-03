#include <stdio.h>
#include <string.h>
void nhapstring(char s[]){
	printf("Nhap chuoi:");
	scanf("%s",s);
}
void nhapmangstring(char arrs[][50],int n){
	for(int i=0;i<n;i++){
		nhapstring(arrs[i]);
	}
}
int main(){
	int n;
	printf("Nhap so chuoi n=");
	scanf("%d",&n);
	char arrs[n][50];
	nhapmangstring(arrs,n);
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(strcmp(arrs[j],arrs[j+1]) >0){
				char tmp[50];
				strcpy(tmp,arrs[j]);
				strcpy(arrs[j],arrs[j+1]);
				strcpy(arrs[j+1],tmp);
			}
		}
	}
	printf("Sau khi sap xep theo bang alphabet:\n");
	for(int i=0;i<n;i++){
		printf("%s\n",arrs[i]);
	}
}
