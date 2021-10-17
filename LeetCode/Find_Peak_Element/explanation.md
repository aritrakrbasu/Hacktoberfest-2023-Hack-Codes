- First Checking for the base cases i.e.

` if(end == 0):
            return 0
        if(nums[0] > nums[1]):
            return 0
        if(nums[len(nums)-1] > nums[len(nums)-2]):
            return (len(nums)-1) `

- Then recursively searching for the peak.