//Nhap vao 3 so tim so nho nhat
#include <stdio.h>
int main(){
	int a,b,c;
	printf("Nhap vao lan luot 3 so a b c\n");
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c:");
	scanf("%d", &c);
	if (a<b){
		if (a<c){
			printf("%d la so nho nhat",a);
				}
		else{
			printf("%d la so nho nhat",c);
			}
			}
	else{
		if (b<c){
			printf("%d la so nho nhat",b);
				}
		else{
			printf("%d la so nho nhat",c);
			}
		}
	}
