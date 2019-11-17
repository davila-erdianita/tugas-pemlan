#include <stdio.h>
#include <conio.h>

//Davila Erdianita npm 18081010120
int main() {
	int i, pilih, cari;
	while (pilih != 1 || pilih != 2 || pilih != 3){
		int npm[3] = {110,111,113};
		float ipk[3] = {3.80,4.00,3.60};
		
		system("color 03");
		printf("				Selamat Datang\n");
		printf(" 		....menu utama sesaat lagi akan ditampilkan....");
		
		Sleep (5000);
		system("cls");
		printf("======Program Data======");
		printf("\n =======Menu Utama=====\n");
		printf("[1]  data Mahasiswa NPM atas ke NPM bawah"); 
		printf("\n[2] data Mahasiswa NPM bawah ke NPM atas");
		printf(" \n[3] mencari data\n");
		printf("Pilihan Anda : \n");
		scanf("%d", &pilih);
		system("cls");
		if(pilih == 1){
			printf("Data Mahasiswa Berdasarkan NPM Atas ke Bawah: \n\n");
			for(i = 0; i<3; i++){
				printf("Npm : %d\n", npm[i]);
				printf("ipk : %f\n\n", ipk[i]);
			}
			
		} else if (pilih == 2){
			printf("Data Mahasiswa Berdasarkan NPM  Bawah ke Atas: \n\n");
			for(i = 2 ; i>=0; i--){
				printf("Npm : %d\n", npm[i]);
				printf("ipk : %f\n\n", ipk[i]);	
		}	
		
		} else if (pilih == 3){
			printf("Silahkan masukkan NPM yang dicari : \n");
			scanf("%d", &cari);
			for(i = 0; i<3; i++){
				if(npm[i] == cari){
					printf("Npm : %d\n", npm[i]);
					printf("ipk : %f\n\n", ipk[i]);
					break;
				}
			}			
		} else {
			printf("Inputan Salah");
	}
	}
 
	return 0;
}
