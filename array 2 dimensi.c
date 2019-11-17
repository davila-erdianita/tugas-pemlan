#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct matkul{
	double ipk;
	int sks[10];
	float nilai[10];
	char n_matkul[10][10];
};
struct mhs{
	char nama[10];
	char npm [10];
	struct matkul matkul[10];
};
int main() {
	int i,y;
	float total_ip=0;
	float total_ipk=0;
	int total_sks=0;
	struct mhs mhs[20];
	
	strcpy (mhs[0].nama,"hari");
	strcpy (mhs[0].npm,"100034");
	strcpy (mhs[0].matkul[0].n_matkul[0],"Bahasa Indonesia");
	mhs[0].matkul[0].nilai[0]= 3.25;
	mhs[0].matkul[0].sks[0]=4;
	strcpy (mhs[0].matkul[1].n_matkul[1],"Agama");
	mhs[0].matkul[1].nilai[1]= 3.10;
	mhs[0].matkul[1].sks[1]=4;
	strcpy (mhs[0].matkul[2].n_matkul[2],"Bela Negara");
	mhs[0].matkul[2].nilai[2]= 3.45;
	mhs[0].matkul[2].sks[2]=3;
	strcpy (mhs[0].matkul[3].n_matkul[3],"Kewirausahaan");
	mhs[0].matkul[3].nilai[3]= 3.00;
	mhs[0].matkul[3].sks[3]=3;
	
	strcpy (mhs[1].nama,"loan");
	strcpy (mhs[1].npm,"100035");
	strcpy (mhs[1].matkul[0].n_matkul[0],"Bahasa Indonesia");
	mhs[1].matkul[0].nilai[0]= 3.20;
	mhs[1].matkul[0].sks[0]=4;
	strcpy (mhs[1].matkul[1].n_matkul[1],"Agama");
	mhs[1].matkul[1].nilai[1]= 3.25;
	mhs[1].matkul[1].sks[1]=4;
	strcpy (mhs[1].matkul[2].n_matkul[2],"Bela Negara");
	mhs[1].matkul[2].nilai[2]= 3.95;
	mhs[1].matkul[2].sks[2]=4;
	strcpy (mhs[1].matkul[3].n_matkul[3],"Kewirausahaan");
	mhs[1].matkul[3].nilai[3]= 3.00;
	mhs[1].matkul[3].sks[3]=4;
	
	strcpy (mhs[2].nama,"dona");
	strcpy (mhs[2].npm,"100036");
	strcpy (mhs[2].matkul[0].n_matkul[0],"Bahasa Indonesia");
	mhs[2].matkul[0].nilai[0]= 3.15;
	mhs[2].matkul[0].sks[0]=4;
	strcpy (mhs[2].matkul[1].n_matkul[1],"Agama");
	mhs[2].matkul[1].nilai[1]= 3.20;
	mhs[2].matkul[1].sks[1]=4;
	strcpy (mhs[2].matkul[2].n_matkul[2],"Bela Negara");
	mhs[2].matkul[2].nilai[2]= 3.65;
	mhs[2].matkul[2].sks[2]=3;
	strcpy (mhs[2].matkul[3].n_matkul[3],"Kewirausahaan");
	mhs[2].matkul[3].nilai[3]= 3.70;
	mhs[2].matkul[3].sks[3]=3;
	
	strcpy (mhs[3].nama,"mia");
	strcpy (mhs[3].npm,"100037");
	strcpy (mhs[3].matkul[0].n_matkul[0],"Bahasa Indonesia");
	mhs[3].matkul[0].nilai[0]= 3.00;
	mhs[3].matkul[0].sks[0]=4;
	strcpy (mhs[3].matkul[1].n_matkul[1],"Agama");
	mhs[3].matkul[1].nilai[1]= 3.65;
	mhs[3].matkul[1].sks[1]=4;
	strcpy (mhs[3].matkul[2].n_matkul[2],"Bela Negara");
	mhs[3].matkul[2].nilai[2]= 3.25;
	mhs[3].matkul[2].sks[2]=3;
	strcpy (mhs[3].matkul[3].n_matkul[3],"kewirausahaan");
	mhs[3].matkul[3].nilai[3]= 3.45;
	mhs[3].matkul[3].sks[3]=3;
	
	strcpy (mhs[4].nama,"bian");
	strcpy (mhs[4].npm,"100038");
	strcpy (mhs[4].matkul[0].n_matkul[0],"Bahasa Indonesia");
	mhs[4].matkul[0].nilai[0]= 3.57;
	mhs[4].matkul[0].sks[0]=4;
	strcpy (mhs[4].matkul[1].n_matkul[1],"Agama");
	mhs[4].matkul[1].nilai[1]= 3.29;
	mhs[4].matkul[1].sks[1]=4;
	strcpy (mhs[4].matkul[2].n_matkul[2],"Bela Negara");
	mhs[4].matkul[2].nilai[2]= 3.85;
	mhs[4].matkul[2].sks[2]=3;
	strcpy (mhs[4].matkul[3].n_matkul[3],"Kewi");
	mhs[4].matkul[3].nilai[3]= 3.25;
	mhs[4].matkul[3].sks[3]=3;
	
	printf ("\n					PROGRAM MENGHITUNG IPK MAHASISWA					\n\n");
	char input[10];

	printf ("silahkan mencari nama mahasiswa: ");
	scanf ("%s",&input);
	  printf(" \n          ***********       Selamat Datang %s data anda akan ditampilkan    **********         ",input);
	  Sleep (3000);
	for(i=0; i<5; i++){
		if (!strcmp(mhs[i].nama,input)){
			printf("\n||Nama depan		\t\t: %s			||\n",mhs[i].nama);
			printf("||NPM mahasiswa			\t: %s		||\n",mhs[i].npm);
			for(y=0; y<4; y++){
				printf("||Nama Mata Kuliah	\t\t: %s		||\n",mhs[i].matkul[y].n_matkul[y]);
				printf("||Nilai			\t\t: %.2f			||\n",mhs[i].matkul[y].nilai[y]);
				printf("||Sks			\t\t: %d			||\n",mhs[i].matkul[y].sks[y]);
 				total_ip = total_ip + ((mhs[i].matkul[y].nilai[y])*(mhs[i].matkul[y].sks[y]));
				total_sks = total_sks+mhs[i].matkul[y].sks[y];
	 	}
	}
	}
	total_ipk =total_ip/total_sks;
	printf("\n\n|Total Sks : %d|\n",total_sks);
	printf("|IPK : %.2f|\n\n",total_ipk);
	
	return 0;
}
