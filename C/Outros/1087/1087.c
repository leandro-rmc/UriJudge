#include <stdio.h>

int main()
{
    int x1,y1,x2,y2,r1,r2;

    scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
    while ((x1 + y1 + x2 + y2) != 0){
        r1 = x1 - x2;
        r2 = y1 - y2;
        if (r1 == 0 || r2 == 0){
            if (r1 == 0 && r2 == 0 || (x1 == x2) && (y1 == y2))
                printf("0\n");
            else
                printf("1\n");
        }
        else
            if(r1*r1 == r2*r2)
                printf("1\n");
            else
                printf("2\n");
    scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
    }
    return 0;
}