#include <stdio.h>
#include <string.h>
int main(){
	char s[50];
	printf("Nhap vao mot chuoi: ");
	scanf("%s",s);
	int a,e,i,o,u,k;
	a = e = i = o = u = k = 0;
	for(int j=0;j<strlen(s);j++){
		if (s[j]=='a'|| s[j]=='A'){
			a++;
		}
		else if (s[j]=='e' ||s[j]=='E'){
			e++;
		}
		else if (s[j]=='i' ||s[j]=='I'){
			i++;
		}
		else if (s[j]=='o' ||s[j]=='O'){
			o++;
		}
		else if (s[j]=='u' ||s[j]=='U'){
			u++;
		}
		else{
			k++;
		}
	}
	printf("a xuat hien %d lan trong chuoi\n",a);
	printf("e xuat hien %d lan trong chuoi\n",e);
	printf("i xuat hien %d lan trong chuoi\n",i);
	printf("o xuat hien %d lan trong chuoi\n",o);
	printf("u xuat hien %d lan trong chuoi\n",u);
	printf("cac ky tu khac xuat hien %d lan trong chuoi",k);
}
