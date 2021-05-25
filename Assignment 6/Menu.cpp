#include<stdio.h>
int main(){
	A:
	printf("\nMoi quy khach lua chon:\n");
	printf("So 1: Chon mon an!\n");
	printf("So 2: Goi do uong!\n");
	printf("So 3: Thanh toan!\n");
	printf("So 4: Thoat chuong trinh!\n");
	int n,c;
	int ThanhToan=0;
	printf("Chon so: ");
	scanf("%d", &n);
	
	switch(n){
		B:
		case 1:
			printf("1.Com suon:          35K\n");
			printf("2.Com ga:            30K\n");
			printf("3.Com rang dua bo :  35K\n");
			printf("4.Mi xao:            35K\n");
			printf("5.Pho bo:            35K\n");
			printf("6.Bun:               25K\n");
			printf("7.Quay lai!             \n");
			printf("Moi quy khach lua chon so tuong ung: ");
			scanf("%d", &n);
			switch(n){
				case 1:
					printf("Cam on quy khach da lua chon Com suon\n");ThanhToan+=+35;goto A;
				case 2:
					printf("Cam on quy khach da lua chon Com ga\n");ThanhToan+=+30;goto A;
				case 3:
					printf("Cam on quy khach da lua chon Com rang dua bo\n");goto A;
				case 4:
					printf("Cam on quy khach da lua chon Mi xao\n");goto A;
				case 5:
					printf("Cam on quy khach da lua chon Pho bo\n");goto A;
				case 6:
					printf("Cam on quy khach da lua chon Bun\n");goto A;
				case 7:
					goto A;
				default:
					printf("Quy khach da lua chon sai.Moi Quy khach lua chon lai!\n\n");goto B;
					}
			break;
		
		C:
		case 2:
			printf("1.Cocacola:          10K\n");
			printf("2.Nuoc cam:          10K\n");
			printf("3.Bo huc:            15K\n");
			printf("4.Bia:               15K\n");
			printf("5.Nutifood:   	     10K\n");
			printf("6.Tra chanh:         10K\n");
			printf("7.Quay lai!             \n");
			printf("Moi quy khach lua chon so tuong ung: ");
			scanf("%d", &n);
			switch(n){
				case 1:
					printf("Cam on quy khach da lua chon Cocacola\n");goto A;
				case 2:
					printf("Cam on quy khach da lua chon Nuoc camn");goto A;
				case 3:
					printf("Cam on quy khach da lua chon Bo huc\n");goto A;
				case 4:
					printf("Cam on quy khach da lua chon Bia\n");goto A;
				case 5:
					printf("Cam on quy khach da lua chon Nutifood\n");goto A;
				case 6:
					printf("Cam on quy khach da lua chon Tra chanh\n");goto A;
				case 7:
					goto A;
				default:
					printf("Quy khach da lua chon sai.Moi Quy khach lua chon lai!\n\n");goto C;
					}
			break;
		case 3:
			printf("So tien quy khach can thanh toan la: %d",ThanhToan);
			
			break;
		case 4:
			printf("Cam on quy khach!");
			break;
		default:
			printf("Quy khach da lua chon sai.Moi Quy khach lua chon lai!\n");goto A;
	}
}
