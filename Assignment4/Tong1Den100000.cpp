#include<stdio.h>
int main(){
	float n=0;
	float s=1;
	while(n<100000){
	s=s+n;
	n=n+1;
	}
	printf("tong tu 1+2+3+...+100000= : %f",s);
	}
