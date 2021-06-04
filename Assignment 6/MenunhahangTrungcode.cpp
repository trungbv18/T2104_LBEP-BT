#include<stdio.h>
int main(){
	int lc1,lc2;
	int ThanhToan=0;
	do {
		printf("1.Goi mon an\n");
		printf("2.Goi do uong\n");
		printf("3.Thanh toan\n");
		printf("4.Thoat chuong trinh\n");
		printf("Moi quy khach lua chon: ");
		scanf("%d", &lc1);
		if (lc1==1){
			do{
			printf("Moi quy khach chon mon an!\n\n");
			printf("1.Com suon:          35K\n");
			printf("2.Com ga:            30K\n");
			printf("3.Com rang dua bo :  35K\n");
			printf("4.Mi xao:            35K\n");
			printf("5.Pho bo:            35K\n");
			printf("6.Bun:               25K\n");
			printf("7.Quay lai!             \n");
			printf("Moi quy khach lua chon so tuong ung: ");
			scanf("%d", &lc2);
				if(lc2==1){
					printf("Cam on quy khach da lua chon Com suon\n");
					ThanhToan+=35;
				}
				else if (lc2==2){
					printf("Cam on quy khach da lua chon Com ga\n");
					ThanhToan+=30;
				}
				else if (lc2==3){
					printf("Cam on quy khach da lua chon Com rang dua bo\n");
					ThanhToan+=35;
				}
				else if (lc2==4){
					printf("Cam on quy khach da lua chon Mi xao\n");
					ThanhToan+=35;
				}
				else if (lc2==5){
					printf("Cam on quy khach da lua chon Pho bo\n");
					ThanhToan+=35;
				}
				else if (lc2==6){
					printf("Cam on quy khach da lua chon Bun\n");
					ThanhToan+=25;
				}
				
			}
			while ( lc2 !=7);

		}
		else if (lc1==2){
			do{
			printf("1.Cocacola:          10K\n");
			printf("2.Nuoc cam:          10K\n");
			printf("3.Bo huc:            15K\n");
			printf("4.Bia:               15K\n");
			printf("5.Nutifood:   	     10K\n");
			printf("6.Tra chanh:         10K\n");
			printf("7.Quay lai!             \n");
			printf("Moi quy khach lua chon so tuong ung: ");
			scanf("%d", &lc2);
				if(lc2==1){
					printf("Cam on quy khach da lua chon Cocacola\n");
					ThanhToan+=10;
				}
				else if (lc2==2){
					printf("Cam on quy khach da lua chon Nuoc cam\n");
					ThanhToan+=10;
				}
				else if (lc2==3){
					printf("Cam on quy khach da lua chon Bo huc\n");
					ThanhToan+=15;
				}
				else if (lc2==4){
					printf("Cam on quy khach da lua chon Bia\n");
					ThanhToan+=15;
				}
				else if (lc2==5){
					printf("Cam on quy khach da lua chon Nutifood\n");
					ThanhToan+=10;
				}
				else if (lc2==6){
					printf("Cam on quy khach da lua chon Tra chanh\n");
					ThanhToan+=10;
				}
			}
			while ( lc2 !=7);
		}
		else if (lc1==3){
			if(ThanhToan==0){
				printf("Quy khach chua chon mon an.Moi quy khach lua chon mon an!\n\n");
			}else{
			printf("So tien quy khach can thanh toan= %dK",ThanhToan);break;
			}
		}
	}
	while (lc1 !=4);
}
