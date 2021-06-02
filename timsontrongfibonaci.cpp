#include<stdio.h>
//0 1 1 2 3 5 8 13 21 34
int main(){
	int f1=-1;
	int f2=-1;
	int f3=1;
	int n;
	printf("Ban muon tim so thu bao nhieu trong day Fibonaci:");
	scanf("%d", &n);
	for(int i=0;i<=n;i++){
	f1=f2;
	f2=f3;
	f3=f1+f2;
	}
	printf("So thu %d trong day Fibonaci la:%d",n,f3);
}
