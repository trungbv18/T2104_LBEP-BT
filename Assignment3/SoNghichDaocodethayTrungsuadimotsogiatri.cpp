#include<stdio.h>
int main(){
	int x;
	int y=0;
	printf("nhap vao so nguyen duong x ko qua 4 chu so: ");
	scanf("%d", &x);
		if( x>0 ){
		y=x%10+y*10;
		x/=10;
	}
		if( x>0 ){
		y=x%10+y*10;
		x/=10;
	}
		if( x>0 ){
		y=x%10+y*10;
		x/=10;
	}
		if( x>0 ){
		y=x%10+y*10;
		x/=10;
	}
	printf("So nghich dao la: %d",y);
	}
