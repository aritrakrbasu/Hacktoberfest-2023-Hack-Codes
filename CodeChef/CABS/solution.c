//author: Aritra Banerjee

#include <stdio.h>

int main(void) {
	int t,x,y; 
	scanf("%d",&t); 
	while(t--){ 
	    scanf("%d %d",&x,&y); 
	    if(x>y)
	    printf("second\n");
	     if(x<y)
	    printf("first\n");
	     if(x==y)
	    printf("any\n");
    }	return 0;
}
