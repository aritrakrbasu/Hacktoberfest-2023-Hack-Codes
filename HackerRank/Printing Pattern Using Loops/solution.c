#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j,pos;
    scanf("%d", &n);

    for(i=1;i<=(2*n)-1;i++)
    {
        for(j=1;j<=(2*n)-1;j++)
        {
            pos=fmax(abs(n-i)+1,abs(n-j)+1);
            printf("%d ",pos);
        }
        printf("\n");
    }

    return 0;
}
