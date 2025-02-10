#include <stdio.h>

int main() {
    int first_number , second_number;
    
    scanf("%d  %d",&first_number,&second_number);
    if(first_number>second_number){
        printf("True\n");
    }
    else(first_number<second_number){
        printf("False\n");
    }
    return 0;
}