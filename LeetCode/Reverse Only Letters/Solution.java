public class Solution {
    public String reverseOnlyLetters(String s) {
        char arr[] = s.toCharArray();
            int len = arr.length;
            char temp;
            int i =0, j=len-1;
            while(i<j)
            {
                while((!Character.isAlphabetic(arr[i]))&&(i<(len-1)))
                        i++;
                while((!Character.isAlphabetic(arr[j]))&&(j>0))
                        j--;
                if(i<j)
                {
                  temp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = temp;
                  i++;
                  j--;  
                }
                else
                    break;
                
            }
                    
                   
            String str = String.valueOf(arr);
            return str;
                
        } 
}
