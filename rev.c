#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,r,n2=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        n2=n2*10+r;
    }
    printf("%d",n2);
    return 0;
}
