#include <stdio.h>
#include <string.h>


int main() {
    printf("\n[--------Program is started--------]\n\n");
   
    int i=0;
    long long int n=0;
    scanf("%ld",&n);
     
    char str[40];
    sprintf(str,"%d",n);
    int len=strlen(str);
    printf("\n===================================\n\n");   
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
    for(i=0;i<=len+commas;i++) {
        printf("%c",result[i]);
    }    
    printf("\n\n[--------End of program--------]\n\n");
    return 0;
}
















    // printf("\n%s\n",str);
    // printf("===================================\n");
        
    
    //  int  commas=(len-1)/3;
    //  printf("%d\n",commas);
    //  printf("===================================\n");
    


    // while(i<=len){
    //       printf("%c",str[i++]);        
    // }



    // char result[50];
    // result[0]=str[0];
    // result[1]=str[1];
    // result[2]=',';
    // result[3]=str[2];
    // result[4]=str[3];
    // result[5]=str[4];
    // result[6]=',';
    // result[7]=str[5];
    // result[8]=str[6];
    // result[9]=str[7];



//amr input 3 , comma =0
//mane indek declear 3ta , last indesk no 02 
// new str= len 3+commas=3 , commas =0 (charr 3ta)
// comma soho indesk lagbe 03ta ,                     //0
// indesk declear =3 , last indesk 02
// from last indesk 02  assign to = last indesk 02
//

//amr input 4 , comma =1
//mane indek declear 4ta , last indesk no 03
// new str= len 4+commas=5 , commas =1 (char 5ta)
// comma soho indesk lagbe 05ta ,
// indesk declear =5 , last indesk 04
// from last indesk 03  assign to = last indesk 04
//
//amr input 5 , comma =1
//mane indek declear 5ta , last indesk no 04
// new str= len 5+commas=6 , commas =1 (char 6ta)
// comma soho indesk lagbe 07ta ,                      //1
// indesk declear =7 , last indesk 05
// from last indesk 04  assign to = last indesk 05
//

//amr input 6 , comma =1
//mane indek declear 6ta , last indesk no 05
// new str= len 6+commas=7 , commas =1 (char 7ta)
// comma soho indesk lagbe 07ta ,
// indesk declear =7 , last indesk 06
// from last indesk 05  assign to = last indesk 06
//

//amr input 7 , comma =2
//mane indek declear 7ta , last indesk no 06
// new str= len 7+commas=9 , commas =2 (char 9ta)
// comma soho indesk lagbe 00ta ,
// indesk declear =9 , last indesk 08
// from last indesk 06  assign to = last indesk 08
//
//amr input 8 , comma =2
//mane indek declear 8ta , last indesk no 07
// new str= len 8+commas=10 , commas =2 (char 10ta)
// comma soho indesk lagbe 10ta ,                      //2
// indesk declear =10 , last indesk 09
// from last indesk 07  assign to = last indesk 09
//

//amr input 9 , comma =2
//mane indek declear 9ta , last indesk no 08
// new str= len 9+commas=11 , commas =2 (char 11ta)
// comma soho indesk lagbe 11ta ,
// indesk declear =11 , last indesk 10
// from last indesk 08  assign to = last indesk 10
//

//amr input 10 , comma =3
//mane indek declear 10ta , last indesk no 09
// new str= len 10+commas=13 , commas =2 (char 13ta)
// comma soho indesk lagbe 13ta ,                      //3
// indesk declear =13 , last indesk 12
// from last indesk 09  assign to = last indesk 12    
//









//     int A;
//     scanf("%d", &A);

//     char str[20];
//     sprintf(str, "%d", A); // Convert integer to string

//     int len = strlen(str);
//     int commas = (len - 1) / 3; // Number of commas needed
//     int newLen = len + commas;

//     char result[25]; // Resulting string with commas
//     result[newLen] = '\0'; // Null-terminate

//     int i = len - 1;
//     int j = newLen - 1;
//     int count = 0;

//     while (i >= 0) {
//         result[j--] = str[i--];
//         count++;
//         if (count == 3 && i >= 0) {
//             result[j--] = ',';
//             count = 0;
//         }
//     }

//     printf("%s\n", result);

//...................................................................................................
    
//     long int n=0;
//     scanf("%ld",&n);
     
//     char str[40];
//     sprintf(str,"%d",n);
//     int len=strlen(str);
//     int i_c=0, count=0, commas=(len-1)/3;
//     int k=(len+commas), p=len-1;

//     char result[50];
//     result[k]='\0';
//     while(p>=0){
//         result[--k]=str[p--];
//         count++;
//         if(count==3 && i_c<commas){
//             result[--k]=',';
//             i_c++;
//             count=0;
//         }
//     }
//     for(int i=0;i<=len+commas;i++) {
//         printf("%c",result[i]);
//     }
//     return 0;
// }