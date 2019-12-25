#include <stdio.h>
 
int main() {
    int x, s, t, f;
    scanf("%i %i %i", &s, &t, &f);
    x = s+t+f;
    if(x > 23)
       x = x - 24;
    if(x < 0)
       x = x + 24;
    printf("%i\n",x);
    return 0;
}