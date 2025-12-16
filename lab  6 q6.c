
#include <stdio.h>

int main(){
    
    int id;
    int digit;
    int rev_num = 0;
    
    printf("Enter a positive 4 digit number: ");
    scanf("%d", &id);
    
    while (id != 0){
        digit = id % 10;
        id = id / 10;
        rev_num = rev_num * 10 + digit;
    }
    printf("%d", rev_num);
    
    
    return 0;
}

