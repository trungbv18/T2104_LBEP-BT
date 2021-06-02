#include <stdio.h>
int main(){
	int n;
	printf("Nhap so nguyen n= ");
	scanf("%d",&n);
	if(n<0){
		printf("So vua nhap khong dung");
	}else if(n==0){
		printf("Khong co tiem can duoi trong day fibonaci");
	}else if(n == 1){
		printf("tiem can duoi= 0");
	}else if(n==2){
		printf("tiem can duoi= 1");
	}else{
		int f1=1,f2=1,f3=2;
		while(f2+f3<n){
			f1=f2;
			f2=f3;
			f3= f1+f2;
		}
		printf("So tiem can duoi %d trong day fibonaci la %d\n",n,f3);
	}
	
}
