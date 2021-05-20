#include<stdio.h>
int main(){
	float s=0;
	float y=1;
	while(y<=1000){
	s=s+1/y;
	y++;
	}
	printf("Tong tu 1+1/2+13....+1/1000= %f",s);
	
}
