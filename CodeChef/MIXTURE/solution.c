// Author : Shreya Gupta
//Question Link : https://www.codechef.com/OCT21C/problems/MIXTURE


#include <stdio.h>

int main(void) {
int T,A,B,i,x,y,z;
scanf("%d",&T);
//This will take the input
for(i=1;i<=T;i++){
    scanf("%d%d",&A,&B);
    //This will take the input
   x= ((A>0) && (B>0)) ;
   y= ((A>0) && (B==0) );
  z= ( (A==0) && (B>0)) ;
    // Use of AND Operator 
    if(x){
        printf("Solution\n");
    }
    else if(y){
        printf("Solid\n");
    }
    
    else if(z){
        printf("Liquid\n");
    }
    
    else { printf("Nothing\n");
}
}


	return 0;
}
