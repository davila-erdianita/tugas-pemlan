#include<stdio.h>
int i,j,a[8]={5,2,1,6,4,3,8,7};
void view(int i,int a[]){
	for(i=0;i<8;i++){
		printf("%d\t",a[i]);
	}
}

int main(){
	
	
	printf("+------------------+\n");
	printf("|Sebelum diurutkan |\n");
	printf("+------------------+\n");
	view(i,a);
	
	for(i=0;i<7;i++){
		for(j=i+1;j<8;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n+------------------+");
	printf("\n|setelah diurutkan |\n");
	printf("+------------------+\n");
	view(i,a);
	
}
