#include <string.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>

int main(){
	data();
	array_3dimensi();
	return 0;
}

void array_3dimensi(){
	int tigadimensi [3][3][3]={{{5,1,5},{6,2,8},{1,2,1}},{{-3,2,5},{-4,3,4},{-5,7,8}},{{3,1,2},{-5,2,1},{-2,5,1}}};
	int i,j,k;
	float jarak = 0;
	float ab[2],bc[2];
	for(i=0; i<3; i++){
		printf("\nArray  %d \n", i+1);
		
		for(j=0;j<1;j++){
			for(k=0;k<1;k++){	
		printf("\n");
	ab[i] = sqrt((pow(tigadimensi[i][0][0] - tigadimensi[i][1][0],2))+(pow(tigadimensi[i][0][1] - tigadimensi[i][1][1],2))+(pow(tigadimensi[i][0][2] - tigadimensi[i][1][2],2)));
	bc[i] = sqrt((pow(tigadimensi[i][1][0] - tigadimensi[i][2][0],2))+(pow(tigadimensi[i][1][1] - tigadimensi[i][2][1],2))+(pow(tigadimensi[i][1][2] - tigadimensi[i][2][2],2)));			
	printf("Lintasan ab %d = %f \nLintasan bc %d = %f \nHasil = %f\n\n",i+1,ab[i],i+1,bc[i],ab[i]+bc[i]);
	
			    break;
			}
		}	
}

}

void data(){
	int data [3][3][3]={{{5,1,5},{6,2,8},{1,2,1}},{{-3,2,5},{-4,3,4},{-5,7,8}},{{3,1,2},{-5,2,1},{-2,5,1}}};
	int i,j,k;
	system ("color 79");
		printf("\n \t\t\t\t\t\t\t\t\t======================");
		printf("\n \t\t\t\t\t\t\t\t\t||Davila Erdianita||\n\t\t\t\t\t\t\t\t\t|| NPM 18081010120||");
		printf("\n \t\t\t\t\t\t\t\t\t======================");
		Sleep(3000);
		system("cls");
		printf("\n \t\tPROGRAM MENGHITUNG ARRAY 3 DIMENSI");

	for(i=0; i<3; i++){	
		printf(" \n\n==array %i== \n",i+1);
		
		for(j=0;j<3;j++){
			printf("\n");
			
		
			for(k=0;k<3;k++)
		{		
		printf("%i\t", data [i][j][k]);
		
}
 }

}
}

