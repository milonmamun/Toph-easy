#include<stdio.h>


int main(){
   
    int n;

    printf("Enter an integer number(from -200000000 to 200000000):");
    scanf("%d",&n);

    if(-200000000<=n && n<=200000000)
    {
        printf("\nYout entered number is: %d", n);
        
    }else
        printf("Your entered number is not in range");
    
    return 0;
}