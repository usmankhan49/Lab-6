#include<stdio.h>

int main(){
    
    int pop_a = 10000;
    int pop_b = 8000;
    int growth_a = 250;
    int growth_b = 400;
    int year;
    
    while (pop_b <= pop_a){
        pop_a += growth_a;
        pop_b += growth_b;
        year++;
    }
    
    printf("Population of town A = %d\nPopulation of town B = %d\nyear = %d.", pop_a, pop_b, year);
    
    return 0;
}
