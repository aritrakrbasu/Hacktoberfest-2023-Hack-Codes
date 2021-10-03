#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,c=0,rem=0;
    scanf("%d", &n);
   
    while(n>0)
    {
        rem=n%10;
        c+=rem;
        n=n/10;
    }
    printf("%d",c);
    return 0;
}
