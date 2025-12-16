#include <stdio.h>

int main() {
    
    int student_id;
    int last_digit, second_last_digit;
    int sum, num, factorial = 1;
 
    printf("Enter your student ID:  ");
    scanf("%d", &student_id);
 
    last_digit = student_id % 10;
    second_last_digit = (student_id / 10) % 10;
    sum = last_digit + second_last_digit;
    
    for (num = 1; num <= sum; num++ ){
        factorial *= num;
    }
    
    printf("The factorial of %d is %d.", sum, factorial);
    

    return 0;
}


