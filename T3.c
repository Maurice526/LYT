#include<stdio.h> 
int main()
{
	int a[5]={5,3,1,3,5};
	int i, j, k; 
	for(i=0;i<=4;i++){
		for(k=(5-a[i])/2;k>=1;k--){
			printf(" ");
		}
		for(j=1;j<=a[i];j++){
				printf("*");
		}
		for(k=(5-a[i])/2;k>=1;k--){
			printf(" ");
		}
	printf("\n");
	}
	return 0;
} 
