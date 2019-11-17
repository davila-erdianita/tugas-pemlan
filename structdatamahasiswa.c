#include <stdio.h>
#include <stdlib.h>
//Davila Erdianita npm 18081010120
struct biodata {
	int npm;
	float ipk;
};
typedef struct biodata biodata;
int main()
{
	int i, pilih, cari;

		system("color 03");
		printf("**********Data Mahasiswa************ \n");
		Sleep (2000);
		
		

	biodata m[2];
	
	m[0].npm=1213;
	m[0].ipk=3.5;
	m[1].npm=1311;
	m[1].ipk=4;
	
			for(i = 0; i<2; i++){
				printf("NPM %d dengan IPK %f \n\n", m[i].npm, m[i].ipk);
			}
			
	
			printf("Data Mahasiswa Berdasarkan NPM  Bawah ke Atas: \n\n");
			for(i = 1 ; i>=0; i--){
				printf("NPM %d dengan IPK %f \n\n", m[i].npm, m[i].ipk);	
		}	
		
	
			printf("Silahkan masukkan NPM yang dicari : \n");
			scanf("%d", &cari);
			for(i = 0; i<2; i++){
				if(m[i].npm == cari){
				printf("NPM %d dengan IPK %f \n\n", m[i].npm, m[i].ipk);
					break;
				}
		
			}			
		
	
 
	return 0;
}
	
