int countVowels(string str)
{
    int count = 0;
    for (int i=0; i<str.length(); i++)
        if (str[i]=='a' or str[i]=='A' or str[i]=='e' or str[i]=='E' or str[i]=='i' or str[i]=='I' or str[i]=='o' or str[i]=='O' or str[i]=='u' or str[i]=='U' ) // Check for vowel
            ++count;
  //or we could have created a function to chck vowel
    return count;
}
 
