/*Function in C*/
#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
}
     int max_of_four(int a,int b,int c,int d)
     {
         if(a>b && a>c && a>d)
             return a;
         else if(b>c && b>d)
             return b;
         else if(c>d)
             return c;
         else
             return d;
    
    return 0;
}
