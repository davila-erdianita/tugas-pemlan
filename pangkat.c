#include <stdio.h>

#include <windows.h>
int main(){
	int x, n, c, d=1;
	//Tugas Davila Erdianita npm 18081010120
	
	char namadepan [15];
	char namabelakang [20];
	printf("									Masukkan nama depan anda	:");
	scanf("%s", (char *) & namadepan);
	printf ("									Masukkan nama belakang anda	: ");
	scanf("%s", (char *) & namabelakang);
	printf("\n\n<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>\n\n");
	Sleep(2000);
	printf ("\n										Selamat Datang %s %s							\n\n", namadepan,namabelakang);
	
	Sleep(5000);
	
	system("cls");
	

	printf ("\n										Program Pangkat 							\n\n");	
	printf("masukkan angka :");
	scanf("%i",&x);
	printf("masukkan pangkat :");
	scanf("%i",&n);

	for(c=1;c<=n; c++)
	{d=d*x;}
	
	printf("%i^%i=%i", x,n,d);
	Sleep(5000);
	return 0;
}

