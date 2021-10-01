# https://leetcode.com/problems/palindrome-number/

class Solution:
    def isPalindrome(self, x: int) -> bool:
        tempList = list(str(x))
        tempList.reverse()
        return str(x)=="".join(tempList)
        