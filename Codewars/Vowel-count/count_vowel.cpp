bool isVowel(char ch)
{
    ch = toupper(ch);
    return (ch=='A' or ch=='a' || ch=='E' or ch=='e' || ch=='I' or ch=='i' ||
                       ch=='O' or ch=='o' || ch=='U' or ch=='u');
}
 
int countVowels(string str)
{
    int count = 0;
    for (int i=0; i<str.length(); i++)
        if (isVowel(str[i])) // Check for vowel
            ++count;
    return count;
}