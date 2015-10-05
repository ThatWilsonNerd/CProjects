#include <stdio.h>
#include <math.h>

int main() {
    int a, m = 80, i;
    printf("Input a number: ");
    scanf("%d",&m);
    printf("These are the prime numbers between 0 and %d: \n",m);
    for (a = 0; a <= m; a++ )
    {
    int c = 0;
        for (i = 2; i<a;i++)
        {
            if(a % i == 0)
            {
                c++;
            }
        }
        if(c == 0)
        {
            printf("%i\n",a);
        }
    }
    return 0;
}