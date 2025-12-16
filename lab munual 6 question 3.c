#include<stdio.h>

int main(){
    
    int student_id = 2038;
    int last_digit, second_last_digit;
    int count = 1;
    int num = 1;
    
    
    last_digit = student_id % 10;
    second_last_digit = (student_id / 10) % 10;
    
    while ( count <= 10 ){
       if (num % last_digit == 0 && num % second_last_digit == 0){
       printf("%d) %d is divisible by both %d and %d.\n", count, num, last_digit, second_last_digit);
       count++;
       }
       num++;
       
    }
    return 0;
}
