// Author: Harshvardhan Singh
// Question Link: https://www.codechef.com/START9C/problems/XLSQUARE

#include <stdio.h>
#include <math.h>

int main(void)
{
    int T,A,N,i;
    scanf("%d",&T);
	while(T--)
	{
	    scanf("%d %d",&N,&A);
	    
	    for(i=1; i<=N; i++)
	    {
	        if(N<pow(i,2))
	        {
            // prints the side length of the largest square if N is less than any power of two between 1 and N
	            printf("%d\n", (i-1)*A);
	            break;
	        }
	        
	        else if(N == pow(i,2))
	        {
            // prints the side length of the largest square if N equals any power of two between 1 and N
	           printf("%d\n",i*A); 
	           break;
	        }
	    }
	    
	}
	
	// your code goes here
	return 0;
}

