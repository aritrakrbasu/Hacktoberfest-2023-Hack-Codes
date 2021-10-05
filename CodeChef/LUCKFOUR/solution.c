//author: Aritra Banerjee

#include <stdio.h>

int main(void) {
int t;
scanf("%d",&t);
while(t--){
    int n;
    int c=0;
    scanf("%d",&n);
    while(n>0){
        if(n%10==4)
        c++;
        n=n/10;
    }
    printf("%d\n",c);
}
	return 0;
}