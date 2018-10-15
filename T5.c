#include<stdio.h> 
#include <math.h>
int su(n){
    int i;
	for(i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return 1;
} 
int main(){
	int j,k = 0;
	for(j = 1; j <= 100; j++){
		if(su(j) == 1){
			printf("%d ", j);
			k++;
			if(k == 5){
				printf("\n");
				k = 0;
			}
		}	
	}
	return 0;
}
