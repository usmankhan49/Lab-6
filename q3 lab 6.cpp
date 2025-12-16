#include<stdio.h>
int main() {
    int days=1;          
	float daily_distance=500;      
    while (daily_distance <= 2000){
        days++;    
        daily_distance *= 1.05;             
    }
    printf("It will take %d days to run at least 2000 meters.\n", days);

    printf("Distance on final day: %.2f meters\n", daily_distance);
    return 0;
}

