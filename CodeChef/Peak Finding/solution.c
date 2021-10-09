#include <stdio.h>

int main(void) {
	int t,n,i,temp;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    int arr[n];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    temp=arr[0];
	    for(i=0;i<n;i++)
	    {
	        if (arr[i] > temp) 
            temp = arr[i]; 
	    }
	        printf("%d\n",temp);
	    
	}
	return 0;
}

