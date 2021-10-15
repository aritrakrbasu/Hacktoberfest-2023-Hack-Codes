#include<stdio.h>
int main()
{
    int N1;
    printf("ENTER N1: ");
    scanf("%d", &N1);
    int N2;
    printf("ENTEr N2: ");
    scanf("%d", &N2);
    int N3 ;
    printf("ENTER N3: ");
    scanf("%d", &N3);
    int N4;
     printf("ENTER N4: ");
    scanf("%d", &N4);
    if (N1 >= N2 && N1 >= N3 && N1 >= N4)
    printf("%d IS BIG",N1);
    else if (N2 >= N1 && N2 >= N3 && N2 >= N4)
    printf("%d IS BIG",N2);
    else if (N3 >=N1 && N3 >= N2 && N3 >= N4)
   printf("%d IS BIG",N3);
   else
   printf("%d is big",N4);
    return 0 ;
    
}