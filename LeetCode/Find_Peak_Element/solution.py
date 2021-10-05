# author : Anirban Dey (https://github.com/anirbandey303)
# Question Link : https://leetcode.com/problems/find-peak-element/

import math
class Solution:
    def peak(self,nums,start,end):
        if(end == 0):
            return 0
        if(nums[0] > nums[1]):
            return 0
        if(nums[len(nums)-1] > nums[len(nums)-2]):
            return (len(nums)-1)
        mid = math.floor( (start+end)/2 )
        if( nums[mid-1] > nums[mid] ):
            return self.peak(nums,start,mid-1)
        elif( nums[mid+1] > nums[mid] ):
            return self.peak(nums,mid+1,end)
        else:
            return mid

    def findPeakElement(self, nums: List[int]) -> int:
        number = self.peak(nums,0,len(nums)-1)
        return number