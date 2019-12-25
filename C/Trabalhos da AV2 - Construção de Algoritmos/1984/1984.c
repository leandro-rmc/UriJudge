#include <stdio.h>

int main()
{
    unsigned long long n;
    scanf("%llu",&n);
    while (n > 0){
        printf("%llu",n % 10);
        n /= 10;
    }
    printf("\n");
    return 0;
}