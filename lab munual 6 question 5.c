#include <stdio.h>

int main(){
    
    int id;
    int sum = 0;
    int x, i = 1;
    int digit;
    
    printf("Enter your student ID: ");
    scanf("%d", &id);
    
    for (i ; i <= 4; i++){
     digit = (id / x) % 10;
     sum += digit;
     x = x * 10;
    }
    
    printf("sum = %d.", sum);
    
    return 0;
}

