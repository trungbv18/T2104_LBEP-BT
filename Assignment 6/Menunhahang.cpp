#include<stdio.h>
int main(){
	A:
	printf("\nMoi quy khach lua chon:\n");
	printf("So 1: Chon mon an!\n");
	printf("So 2: Goi do uong!\n");
	printf("So 3: Thanh toan!\n");
	printf("So 4: Thoat chuong trinh!\n");
	int n;
	int ThanhToan;
	printf("Chon so: ");
	scanf("%d", &n);

	if(n==1){
		B:
			printf("1.Com suon:          35K\n");
			printf("2.Com ga:            30K\n");
			printf("3.Com rang dua bo :  35K\n");
			printf("4.Mi xao:            35K\n");
			printf("5.Pho bo:            35K\n");
			printf("6.Bun:               25K\n");
			printf("7.Quay lai!             \n");
			printf("Moi quy khach lua chon so tuong ung: ");
			scanf("%d", &n);
				if(n==1){
				printf("Cam on quy khach da lua chon Com suon\n");
				ThanhToan+=35;
				goto A;
				}
				else if(n==2){
				printf("Cam on quy khach da lua chon Com ga\n");
				ThanhToan+=30;
				goto A;
				}
				else if(n==3){
				printf("Cam on quy khach da lua chon Com rang dua bo\n");
				ThanhToan+=35;
				goto A;
				}
				else if(n==4){
				printf("Cam on quy khach da lua chon Mi xao\n");
				ThanhToan+=35;
				goto A;
				}
				else if(n==5){
				printf("Cam on quy khach da lua chon Pho bo\n");
				ThanhToan+=35;
				goto A;
				}
				else if(n==6){
				printf("Cam on quy khach da lua chon Bun\n");
				ThanhToan+=25;
				goto A;
				}
				else if(n==7){
				goto A;
				}
				else{
				printf("\nQuy khach da lua chon sai.Moi Quy khach lua chon lai!\n");goto B;
				}
			}
			if(n==2){
		C:
			printf("1.Cocacola:          10K\n");
			printf("2.Nuoc cam:          10K\n");
			printf("3.Bo huc:            15K\n");
			printf("4.Bia:               15K\n");
			printf("5.Nutifood:   	     10K\n");
			printf("6.Tra chanh:         10K\n");
			printf("7.Quay lai!             \n");
			printf("Moi quy khach lua chon so tuong ung: ");
			scanf("%d", &n);
			if(n==1){
				printf("Cam on quy khach da lua chon Cocacola\n");
				ThanhToan+=10;
				goto A;
				}
				else if(n==2){
				printf("Cam on quy khach da lua chon Nuoc cam\n");
				ThanhToan+=10;
				goto A;
				}
				else if(n==3){
				printf("Cam on quy khach da lua chon Bo huc\n");
				ThanhToan+=15;
				goto A;
				}
				else if(n==4){
				printf("Cam on quy khach da lua chon Bia\n");
				ThanhToan+=15;
				goto A;
				}
				else if(n==5){
				printf("Cam on quy khach da lua chon Nutifood\n");
				ThanhToan+=10;
				goto A;
				}
				else if(n==6){
				printf("Cam on quy khach da lua chon Tra chanh\n");
				ThanhToan+=10;
				goto A;
				}
				else if(n==7){
				goto A;
				}
				else{
				printf("\nQuy khach da lua chon sai.Moi Quy khach lua chon lai!\n");goto C;
				}
			}
			
			if(n==3){
				if(ThanhToan==0){
					printf("Quy khach chua goi do an.Moi quy khach goi them do an!\n");
					goto A;
					}
				else
					printf("So tien quy khach can thanh toan tong cong la: %dK",ThanhToan);
					printf("\n\t\tCam on quy khach!");

			}
			if(n==4){
				printf("Cam on quy khach.Hen gap lai!");
			}
			}
