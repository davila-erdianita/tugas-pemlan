# include <stdio.h>
#include<conio.h>
#include<windows.h>

int input;
int biodata(){

		
	
	printf("\n\n			Nama 		 	: Davila Erdianita\n");
	printf("			NPM         	 	: 18081010120\n");
	printf("			alamat      	 	: jl. sumba no 20\n");
	printf("			jenis kelamin		: perempuan\n");
	printf("			jurusan			: Teknik Informatika\n");
	printf("			Angkatan		: 2018\n\n");
		
	
	return 0;
}
int main() {
system("color 03");
	
	char namadepan [15];
	char namabelakang [20];
	
	
printf("\n\n\n\n\n=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=\n\n");
	printf("									Masukkan nama depan anda	:");
	scanf("%s", (char *) & namadepan);
	printf ("									Masukkan nama belakang anda	: ");
	scanf("%s", (char *) & namabelakang);
	printf("\n\n<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\n");
	Sleep(2000);
	printf ("\n										Selamat Datang %s %s							\n\n", namadepan,namabelakang);
	
	Sleep(2000);
	
		Data:
	printf("\n\n			||***Biodata NPM 18081010120 ***||\n");
	printf("			||	1. Tampilkan Biodata	||\n");
	printf("			||	2. keluar		||\n");
	printf("			||______________________________||\n");
	printf("			Pilihan 	:         ");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
	biodata();
	goto Data;
	Sleep(1000);
	case 2:
	printf("\n\n<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\n");
	
	printf ("\n  										Terima Kasih %s %s                               \n\n", namadepan, namabelakang);
	break;	
	}
	getch();
}
	
	

