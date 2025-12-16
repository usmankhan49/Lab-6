 #include<stdio.h>
int main(){
    float value=30000;
    int years=0;
    while (value >=15000){
        years++;
        value=value*0.9;
        printf("value = %.2f years = %d \n", value, years);
    }
    printf("\nIt took %d years for the car value to drop below $15,000.\n", years);
    return 0;
}
 
 
