#include<stdio.h>
#include<string.h>

       
int main(){
       int n=0;
       printf("\nEnter number with space : ");
       scanf("%d",&n);

	    for(int i=1; i<=n;i++){
            for(int j=1;j<=(n-i);j++){
                printf(" ");
            }
            for(int k=1;k<=i;k++){
                if(k>1){
                    printf(" ");
                }
             printf("*");                
            }         
         printf("\n");
        }	          
return 0;
}

