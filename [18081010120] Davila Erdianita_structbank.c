#include <stdio.h>
#include <string.h>
#include<conio.h>

struct alamat{
 char jalan[15];int norumah;
 char kota[15],provinsi[17];
};
struct tanggallahir{
 int tanggal, bulan, tahun;
};
//davila erdianita[18081010120]
struct nasabah{
 int norek;
 int umur;
 double saldo;
 char bank[5];
 char namadpn[20];
 char namabkg[10];
 struct alamat addr;
 struct tanggallahir tgllahir;
};

typedef struct nasabah nasabah;
int main()
{
 int i, input, cari;
 char c[5];
 double jmlBCA,jmlMDR,max,min;
 while (input != 1 || input != 2 || input != 3 || input != 4 || input != 5 || input != 6 || input != 7 || input != 8 ){
 nasabah nsb[2];


strcpy(nsb[0].namadpn, "Mona");
strcpy(nsb[0].namabkg, "Lisa");
strcpy(nsb[0].bank, "BCA");
strcpy(nsb[0].addr.jalan, "jl.Melati ");
strcpy(nsb[0].addr.kota, "Makassar");
strcpy(nsb[0].addr.provinsi, "Sulawesi selatan");
nsb[0].umur = 22;
nsb[0].saldo = 300000000;
nsb[0].addr.norumah = 1;
nsb[0].norek = 12345;
nsb[0].tgllahir.tanggal = 30;
nsb[0].tgllahir.bulan = 7;
nsb[0].tgllahir.tahun = 1997;

strcpy(nsb[1].namadpn, "Maya");
strcpy(nsb[1].namabkg, "Dhani");
strcpy(nsb[1].bank, "Mandiri");
strcpy(nsb[1].addr.jalan, "jl.Pahlawan ");
strcpy(nsb[1].addr.kota, "Surabaya");
strcpy(nsb[1].addr.provinsi, "Jawa Timur");
nsb[1].umur = 54;
nsb[1].saldo = 250000000;
nsb[1].addr.norumah = 25;
nsb[1].norek = 12346;
nsb[1].tgllahir.tanggal = 10;
nsb[1].tgllahir.bulan = 5;
nsb[1].tgllahir.tahun = 1965;

strcpy(nsb[2].namadpn, "Maria");
strcpy(nsb[2].namabkg, "Law");
strcpy(nsb[2].bank, "BCA");
strcpy(nsb[2].addr.jalan, "jl.Buntu ");
strcpy(nsb[2].addr.kota, "Banjarmasin");
strcpy(nsb[2].addr.provinsi, "Kalimantan Selatan");
nsb[2].umur = 19;
nsb[2].saldo = 300000000;
nsb[2].addr.norumah = 1;
nsb[2].norek = 12347;
nsb[2].tgllahir.tanggal = 30;
nsb[2].tgllahir.bulan = 7;
nsb[2].tgllahir.tahun = 2000;

strcpy(nsb[3].namadpn, "Agus");
strcpy(nsb[3].namadpn, "Slamet");
strcpy(nsb[3].bank, "Mandiri");
strcpy(nsb[3].addr.jalan, "jl.Lawu");
strcpy(nsb[3].addr.kota, "Surabaya");
strcpy(nsb[3].addr.provinsi, "Jawa Timur");
nsb[3].umur = 22;
nsb[3].saldo = 350000000;
nsb[3].addr.norumah = 3;
nsb[3].norek = 12348;
nsb[3].tgllahir.tanggal = 25;
nsb[3].tgllahir.bulan = 2;
nsb[3].tgllahir.tahun = 1997;

strcpy(nsb[4].namadpn, "Brian");
strcpy(nsb[4].namabkg, "adam");
strcpy(nsb[4].bank, "BCA");
strcpy(nsb[4].addr.jalan, "jl.Durian");
strcpy(nsb[4].addr.kota, "Ambon");
strcpy(nsb[4].addr.provinsi, "Maluku");
nsb[4].umur = 20;
nsb[4].saldo = 100000000;
nsb[4].addr.norumah = 1;
nsb[4].norek = 12349;
nsb[4].tgllahir.tanggal = 9;
nsb[4].tgllahir.bulan = 4;
nsb[4].tgllahir.tahun = 1999;



Menu:
	printf("\n\n			||	***********Data Nasabah***********	||\n");
	printf("			||	1. Tampilkan Data Nasabah		||\n");
	printf("			||	2. Pencarian Data Input Nama		||\n");
	printf("			||	3. Akumulasi saldo total nasabah	||\n");
	printf("			||	4. Pencarian Data berdasarkan kota	||\n");
	printf("			||	5. Pencarian Data berdasarkan provinsi	||\n");
	printf("			|| 	6. Tampilkan nasabah umur tertentu	||\n");
	printf("			||	7. Tampilkan Nasabah saldo terbanyak	||\n");
	printf("			||	8. Tampilkan Nasabah saldo tersedikit	||\n");
	printf("			||______________________________________________||\n");
	printf("			Pilihan 	:         ");
	scanf("%d", &input);
	if (input == 1)
	{

	for(i = 0 ; i<5 ; i++){

				printf("	   ==========Data Nasabah==========       \n");
				printf("Bank      	         =%s\n",nsb[i].bank);
				printf("Saldo 	      	   	 =%.2f\n",nsb[i].saldo);
				printf("Nama Nasabah	 	 =%s %s\n",nsb[i].namadpn,nsb[i].namabkg);
				printf("Umur Nasabah	 	 =%i\n",nsb[i].umur);
				printf("Tempat tanggal lahir	 =%i-%i-%i\n",nsb[i].tgllahir.tanggal,nsb[i].tgllahir.bulan,nsb[i].tgllahir.tahun);
				printf("Alamat Rumah 		 =%s no %i kota %s ,%s\n",nsb[i].addr.jalan,nsb[i].addr.norumah,nsb[i].addr.kota,nsb[i].addr.provinsi);
	}

	}else if (input == 2){
	printf("Masukkan Nama depan dengan awalan kata bekapital(Contoh 'Brian') : \n");
			scanf("%s", &c);
			for(i = 0; i<5; i++){
				if(strstr(nsb[i].namadpn, c)){
					printf("	   ==========Data Nasabah==========       \n");
					printf("No Rekening	      	 =%i\n",nsb[i].norek);
					printf("Bank      	         =%s\n",nsb[i].bank);
					printf("Saldo 	      	   	 =%.2f\n",nsb[i].saldo);
					printf("Nama Nasabah	 	 =%s %s\n",nsb[i].namadpn,nsb[i].namabkg);
					printf("Umur Nasabah	 	 =%i\n",nsb[i].umur);
					printf("Tempat tanggal lahir	 =%i-%i-%i\n",nsb[i].tgllahir.tanggal,nsb[i].tgllahir.bulan,nsb[i].tgllahir.tahun);
					printf("Alamat Rumah 		 =%s no %i kota %s ,%s\n",nsb[i].addr.jalan,nsb[i].addr.norumah,nsb[i].addr.kota,nsb[i].addr.provinsi);
				 }else if(strstr(nsb[i].namadpn, c)){
					for(i = 4; i>=0; i--){

					printf("	   ==========Data Nasabah==========       \n");
					printf("No Rekening	      	 =%i\n",nsb[i].norek);
					printf("Bank      	         =%s\n",nsb[i].bank);
					printf("Saldo 	      	   	 =%.2f\n",nsb[i].saldo);
					printf("Nama Nasabah	 	 =%s %s\n",nsb[i].namadpn,nsb[i].namabkg);
					printf("Umur Nasabah	 	 =%i\n",nsb[i].umur);
					printf("Tempat tanggal lahir	 =%i-%i-%i\n",nsb[i].tgllahir.tanggal,nsb[i].tgllahir.bulan,nsb[i].tgllahir.tahun);
					printf("Alamat Rumah 		 =%s no %i kota %s ,%s\n",nsb[i].addr.jalan,nsb[i].addr.norumah,nsb[i].addr.kota,nsb[i].addr.provinsi);
					break;
				}
				}
		}
	}else if (input == 3){
			 	jmlBCA=nsb[0].saldo+nsb[2].saldo+nsb[4].saldo;
			 	jmlMDR=nsb[1].saldo+nsb[3].saldo;
			 	printf("Akumulasi Total Saldo Nasabah BCA \n");
			 	printf("%.2f + %.2f + %.2f		:%.2f \n",nsb[0].saldo,nsb[2].saldo,nsb[4].saldo, jmlBCA);
				printf("Akumulasi Total Saldo Nasabah Mandiri    \n");
				printf("%.2f + %.2f 				:%.2f \n",nsb[1].saldo,nsb[3].saldo, jmlMDR);
	}else if (input == 4){
		printf("Pencarian Data berdasarkan kota, dengan awalan kata bekapital(Contoh'Surabaya')  : \n");
			scanf("%s", &c);
			for(i = 0; i<5; i++){
			//davila erdianita [18081010120]
				if(strstr(nsb[i].addr.kota, c)){
					printf("	   ==========Data Nasabah==========       \n");
					printf("No Rekening	      	 =%i\n",nsb[i].norek);
					printf("Bank      	         =%s\n",nsb[i].bank);
					printf("Saldo 	      	   	 =%.2f\n",nsb[i].saldo);
					printf("Nama Nasabah	 	 =%s %s\n",nsb[i].namadpn,nsb[i].namabkg);
					printf("Umur Nasabah	 	 =%i\n",nsb[i].umur);
					printf("Tempat tanggal lahir	 =%i-%i-%i\n",nsb[i].tgllahir.tanggal,nsb[i].tgllahir.bulan,nsb[i].tgllahir.tahun);
					printf("Alamat Rumah 		 =%s no %i kota %s ,%s\n",nsb[i].addr.jalan,nsb[i].addr.norumah,nsb[i].addr.kota,nsb[i].addr.provinsi);
					 }else if(strstr(nsb[i].addr.kota, c)){
					for(i = 4; i>=0; i--){

					printf("	   ==========Data Nasabah==========       \n");
					printf("No Rekening	      	 =%i\n",nsb[i].norek);
					printf("Bank      	         =%s\n",nsb[i].bank);
					printf("Saldo 	      	   	 =%.2f\n",nsb[i].saldo);
					printf("Nama Nasabah	 	 =%s %s\n",nsb[i].namadpn,nsb[i].namabkg);
					printf("Umur Nasabah	 	 =%i\n",nsb[i].umur);
					printf("Tempat tanggal lahir	 =%i-%i-%i\n",nsb[i].tgllahir.tanggal,nsb[i].tgllahir.bulan,nsb[i].tgllahir.tahun);
					printf("Alamat Rumah 		 =%s no %i kota %s ,%s\n",nsb[i].addr.jalan,nsb[i].addr.norumah,nsb[i].addr.kota,nsb[i].addr.provinsi);
					break;
				}
				}
		}

	}else if (input == 5){

				printf("Pencarian Data berdasarkan Provinsi, (hanya perlu ketik nama depan provinsi KAPITAL contoh 'Jawa'): \n");
				scanf("%s", &c);
				for(i = 0; i<5; i++){

				if(strstr(nsb[i].addr.provinsi, c)){
					printf("	   ==========Data Nasabah==========       \n");
					printf("No Rekening	      	 =%i\n",nsb[i].norek);
					printf("Bank      	         =%s\n",nsb[i].bank);
					printf("Saldo 	      	   	 =%.2f\n",nsb[i].saldo);
					printf("Nama Nasabah	 	 =%s %s\n",nsb[i].namadpn,nsb[i].namabkg);
					printf("Umur Nasabah	 	 =%i\n",nsb[i].umur);
					printf("Tempat tanggal lahir	 =%i-%i-%i\n",nsb[i].tgllahir.tanggal,nsb[i].tgllahir.bulan,nsb[i].tgllahir.tahun);
					printf("Alamat Rumah 		 =%s no %i kota %s ,%s\n",nsb[i].addr.jalan,nsb[i].addr.norumah,nsb[i].addr.kota,nsb[i].addr.provinsi);
				 }else if(strstr(nsb[i].addr.provinsi, c)){
					for(i = 4; i>=0; i--){

					printf("	   ==========Data Nasabah==========       \n");
					printf("No Rekening	      	 =%i\n",nsb[i].norek);
					printf("Bank      	         =%s\n",nsb[i].bank);
					printf("Saldo 	      	   	 =%.2f\n",nsb[i].saldo);
					printf("Nama Nasabah	 	 =%s %s\n",nsb[i].namadpn,nsb[i].namabkg);
					printf("Umur Nasabah	 	 =%i\n",nsb[i].umur);
					printf("Tempat tanggal lahir	 =%i-%i-%i\n",nsb[i].tgllahir.tanggal,nsb[i].tgllahir.bulan,nsb[i].tgllahir.tahun);
					printf("Alamat Rumah 		 =%s no %i kota %s ,%s\n",nsb[i].addr.jalan,nsb[i].addr.norumah,nsb[i].addr.kota,nsb[i].addr.provinsi);
					break;
				}
				}
		}
	}else if (input == 6){
			printf("Pencarian Data Berdasarkan Umur Nasabah : \n");
			scanf("%i", &cari);
			for(i = 0; i<5; i++){
				if(nsb[i].umur== cari){
				printf("	   ==========Data Nasabah==========       \n");
					printf("No Rekening	      	 =%i\n",nsb[i].norek);
					printf("Bank      	         =%s\n",nsb[i].bank);
					printf("Saldo 	      	   	 =%.2f\n",nsb[i].saldo);
					printf("Nama Nasabah	 	 =%s %s\n",nsb[i].namadpn,nsb[i].namabkg);
					printf("Umur Nasabah	 	 =%i\n",nsb[i].umur);
					printf("Tempat tanggal lahir	 =%i-%i-%i\n",nsb[i].tgllahir.tanggal,nsb[i].tgllahir.bulan,nsb[i].tgllahir.tahun);
					printf("Alamat Rumah 		 =%s no %i kota %s ,%s\n",nsb[i].addr.jalan,nsb[i].addr.norumah,nsb[i].addr.kota,nsb[i].addr.provinsi);
				}else if(nsb[i].umur== cari){
					for(i = 4; i>=0; i--){

					printf("	   ==========Data Nasabah==========       \n");
					printf("No Rekening	      	 =%i\n",nsb[i].norek);
					printf("Bank      	         =%s\n",nsb[i].bank);
					printf("Saldo 	      	   	 =%.2f\n",nsb[i].saldo);
					printf("Nama Nasabah	 	 =%s %s\n",nsb[i].namadpn,nsb[i].namabkg);
					printf("Umur Nasabah	 	 =%i\n",nsb[i].umur);
					printf("Tempat tanggal lahir	 =%i-%i-%i\n",nsb[i].tgllahir.tanggal,nsb[i].tgllahir.bulan,nsb[i].tgllahir.tahun);
					printf("Alamat Rumah 		 =%s no %i kota %s ,%s\n",nsb[i].addr.jalan,nsb[i].addr.norumah,nsb[i].addr.kota,nsb[i].addr.provinsi);
				break;
					}
				}
			}
		}else if(input == 7){


			 for(i=0; i<5; i++){
        	 if(nsb[i].saldo>300000000){
    printf ("nilai %.2f= Saldo Tertinggi\n",nsb[i].saldo);
    break;
        }
			 }



}else if(input == 8){

    for(i=0; i<5; i++){
        if(nsb[i].saldo<150000000)
		{
		printf ("nilai %.2f= Saldo Terendah\n",nsb[i].saldo);
		break;
			}
		}
 }
}
getch();
return 0;
}








