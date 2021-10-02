public class Solution {
    int nt, n1 = 0, n2 =1, n3 = 1;
    public int tribonacci(int n) {
        if(n==0)
            return n1;
        else if((n==1)||(n==2))
            return n2;
        else
        {   if(n>2)
            {
                 nt = n1 + n2 + n3;
                n1=n2;
                n2=n3;
                n3=nt;
                tribonacci(--n);  
            }
            return nt;
        }
        
    }
}
