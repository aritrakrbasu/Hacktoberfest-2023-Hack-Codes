# https://leetcode.com/problems/reverse-integer/
class Solution:
    def reverse(self, x: int) -> int:
        answer = list()
        if(x<0):
            answer.append("-")
            x=x*-1
        tempList = list(str(x))
        tempList.reverse()
        answer.extend(tempList)
        returnThis = int("".join(answer))
        if returnThis < pow(-2,31) or returnThis > (pow(2,31)-1):
            return 0
        else:
            return returnThis