#include<stdio.h>
int i,j,a[8]={2,6,1,3,4,8,7,9};
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
	for(i=0;i<8;i++){
		for(j=i;j>0 && a[j]<a[j-1];j--){
			int temp=a[j-1];
			a[j-1]=a[j];
			a[j]=temp;
	
		}
	}
	printf("\n+------------------+");
	printf("\n|setelah diurutkan |\n");
	printf("+------------------+\n");
	view(i,a);
	return 0;
}
