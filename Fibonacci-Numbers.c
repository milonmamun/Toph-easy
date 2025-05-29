#include <stdio.h>


int main() {
        int n=0;
        scanf("%d",&n);
        int p=n-1, i=1;        
        int j=n+1;
        int a[j];
        a[0]=1;
        a[1]=1;
        int x=2,y=0,z=1;
        do{
            a[x++]=a[y++]+a[z++];
            i++;
        }while(i<=n); 
        printf("%d",a[p]);  
    return 0;
}

// #include <stdio.h>

// int main() {
//     int N;
//     scanf("%d", &N);

//     if (N == 1 || N == 2) {
//         printf("1\n");
//         return 0;
//     }

//     long long a = 1, b = 1, fib;
//     for (int i = 3; i <= N; i++) {
//         fib = a + b;
//         a = b;
//         b = fib;
//     }

//     printf("%lld\n", fib);
//     return 0;
// }
