#include<stdio.h>
#include<math.h>

int main(){
    
    int principal = 1000;
    float rate = 5;
    int year = 0;
    float amount;
    
    while (year < 10){
        year++;
        amount = principal * pow((1 + rate / 100), year);
        printf("\nYour amount after %d year will be %.2f.", year, amount);
    }
    
    return 0;
}
