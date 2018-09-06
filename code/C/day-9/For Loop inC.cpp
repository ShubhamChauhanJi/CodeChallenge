/*For Loop in C*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{

  	// Complete the code.
  char *word[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    for ( ; a >= 1 && a <= b; a++)
    {
        if (a <= 9)
            printf("%s\n", word[a - 1]);
        else if (a % 2)
            printf("odd\n");
        else
            printf("even\n");
    }

