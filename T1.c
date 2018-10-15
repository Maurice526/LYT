#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d", &a, &b, &c);
	if((a > 0) && (b > 0)&&(c > 0)&&(a + b>c)){
		if(a == b&&b == c&&a == c)
			printf("1");
		if((a == b && a != c)||(b == c && a != b)||(a == c && b != c))
			printf("2");
		if(a != b && b != c && a != c)
			printf("3");
	}
	else
		printf("0");
	return 0;
} 
