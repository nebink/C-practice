#include <stdio.h>
int main(){
    printf("For finding the factorial of the no.");
    int fact=1;
    printf("\nEnter the no. :");
    int j;
    scanf("%d",&j);
    for(int i=1; i<=j; i++){
        fact=fact*i;
    }
    printf("The factorial of the given number = %d",fact);
    
    return 0;
}
