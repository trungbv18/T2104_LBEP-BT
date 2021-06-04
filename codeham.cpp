#include<stdio.h>
//0 1 1 2 3 5 8 13 21 34

void timsothunfibonaci(int n){
	int f1=-1;
	int f2=-1;
	int f3=1;
	for(int i=0;i<=n;i++){
	f1=f2;
	f2=f3;
	f3=f1+f2;
	}
	printf("So thu %d trong day Fibonaci la:%d",n,f3);
}

void timsodaonguoc(int m){
	int sobandau=m;
	int y=0;
	while(m>0){
		y=m%10 +y*10;
		m/=10;
	}
	printf("So dao nguoc cua %d la: %d",sobandau,y);
}

void songuyentotieptheo(int snt){
	int count=0;
	for (int j=1;j<=snt;j++){
	if(snt%j==0){
	count++;
	}
	}
	if (count>2){
		printf("so vua nhap khong phai so nguyen to");
	}
	else{

		int snt2;
		for(snt2=snt+1;true;snt2++){
			int count1=0;
			for (int j=1;j<=snt2;j++){
			if(snt2%j==0){
				count1++;
			}
			}
			if(count1==2){
				break;
			}
		}
	printf("So nguyen to tiep theo lon hon %d va gan %d nhat la: %d",snt,snt,snt2);
	
	}
}
	
int main(){
	int n;
	printf("Ban muon tim so thu bao nhieu trong day Fibonaci:");
	scanf("%d", &n);
	timsothunfibonaci(n);
	int sodaonguoc;
	printf("\nNhap vao 1 so: ");
	scanf("%d" , &sodaonguoc);
	timsodaonguoc(sodaonguoc);
	int snt;
	printf("\nNhap vao 1 so nguyen to: ");
	scanf("%d", &snt);
	songuyentotieptheo(snt);

}
