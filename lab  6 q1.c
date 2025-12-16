#include<stdio.h>
int main() {
    int day=0;          
	int total=0;      
    while (total <= 100){
        day++;    
        total += day;             
    }
    printf("It will take %d days to reach or exceed $100 in savings.\n", day);
    return 0;
}

