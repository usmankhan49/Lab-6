#include<stdio.h>

int main(){
	
	int base, power;
	int i;
	int answer = 1;
	
	printf("Enter a base and a non-negative exponent: ");
	scanf("%d%d", &base, &power);
	
	for (i = 1; i <= power; i++ ){
		answer *= base;
	}
	
	printf("%d", answer);
	
	return 0;
}
