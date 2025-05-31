
#include <stdio.h>
#include <string.h>

int main() {
    int N = 0;
    scanf("%d", &N);

    unsigned long long int ans = 1;
    for (int i = 1; i <= N; i++) {
        ans *= i;
    }
    char str[100];
    sprintf(str, "%lld", ans);

    int len = strlen(str), p = len - 4;

    for (int i = p; i < len; i++) {  
        printf("%c", str[i]);
    }
    return 0;
}



