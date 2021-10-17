//Write a program to take two numbers as input and print their difference if the first number is greater than the second number otherwise print their sum.//


#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("%d",a-b);
    else
    printf("%d",a+b);
    
    return 0;
}
