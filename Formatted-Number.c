#include <stdio.h>
#include <string.h>


int main() {    
    long int n=0;
    scanf("%ld",&n);
     
    char str[40];
    sprintf(str,"%d",n);
    int len=strlen(str);
    int i_c=0, count=0, commas=(len-1)/3;
    int k=(len+commas), p=len-1;

    char result[50];
    result[k]='\0';
    while(p>=0){
        result[--k]=str[p--];
        count++;
        if(count==3 && i_c<commas){
            result[--k]=',';
            i_c++;
            count=0;
        }
    }
    for(int i=0;i<=len+commas;i++) {
        printf("%c",result[i]);
    }
    return 0;
}
