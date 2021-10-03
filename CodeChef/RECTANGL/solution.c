//author: Aritra Banerjee

#include <stdio.h>

int main(void) {
	int a,b,c,d,T;
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d%d%d%d",&a,&b,&c,&d);
	    if(a==b&&c==d||a==c&&b==d||a==d&&b==c)
	        printf("YES\n");
	    else
	        printf("NO\n");
	}
	return 0;
}

