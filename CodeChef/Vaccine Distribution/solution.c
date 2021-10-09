#include <stdio.h>
 
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int d,n,dup,age;
	     int risk=0,nonrisk=0;
	    scanf("%d%d",&n,&d);
	    dup=n;
	    while(n--)
	    {
	        scanf("%d",&age);
	        if(age>=80 || age <=9)
	        {
	            risk++;
	        }
	        else
	        {
	            nonrisk++;
	        }
	    }
	    if(d==1)
	    {
	        printf("\n%d",dup);
	    }else
	    {
	        int rem,days;
	        rem=risk%d;
	        if(rem)
	        {
	            days=risk/d+1;
	        }else
	        {
	            days=risk/d;
	        }
	        rem=nonrisk%d;
	        if(rem)
	        {
	            days+=nonrisk/d+1;
	        }else
	        {
	            days+=nonrisk/d;
	        }
	        printf("\n%d",days);
	    }
	}
	return 0;
}

