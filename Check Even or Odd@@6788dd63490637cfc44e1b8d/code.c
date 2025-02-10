#include <stdio.h>
int main() {
    int n;
    printf("Enter:");
    scanf("%d",&n);
    if(n%2==0){
        printf("Even");
    }
    else(n%2!=0){
        printf("Odd");
    }
    return 0;
}