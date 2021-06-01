
void insole (int arr[],int n){
	printf("Cac so le trong mang la: ");
	for (int i=0;i<n;i++){
		if (arr[i]%2 ==1){
			printf("%d\t",arr[i]);
		}
	}
}



void timkiemsotrongmang(int arr[], int n, int x){
	int count=0;
	for (int i=0;i<n;i++){
		if (arr[i]==x){
			count++;
		}
	}
	if (count >0){
		printf("Co %d trong mang",x);
	}
	else{
		printf("Khong co %d trong mang",x);
		}
	}
	
	
	
int ucln (int a,int b){
	int min,ucmax;
	if (a<b){
		min=a;
	}
	else{
		min=b;
	}
	for(int i=1;i<=min;i++){
		if (a%i==0 & b%i==0){
			ucmax=i;
		}
	}
	return ucmax;
}



int bcnn (int a, int b){
	int max,bcnn;
	if (a>b){
		max=a;
	}
	else{
		max=b;
	}
	for(int i=max;i<=a*b;i++){
		if (i%a==0 && i%b==0){
			bcnn=i;
			break;
		}
	}
	return bcnn;
}







