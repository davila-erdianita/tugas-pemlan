#include<stdio.h>
#include<windows.h>
//tugas Davila Erdianita NPM 18081010120

int pangkat (int x, int n)
{
	if(n == 0)
	return 1;

	else{
		return x * pangkat(x,n-1);
	}
}
main(){
	int x, n;
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
	
	printf("%i ^%i =%i",x,n, pangkat (x,n));
	Sleep(5000);
	
	return 0;
}
