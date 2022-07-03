#include <stdio.h>
int main(){
    int a=0,b=1,k;
    k=a+b;
    
    printf("enter the limit :");
    int j;
    scanf("%d",&j);
    printf("%d%d",a,b);
    for(int i=2;i<=j;i++){
        printf("%d",k);
        a=b;
        b=k;
        k=a+b;
        
        
    }
    return 0;
}