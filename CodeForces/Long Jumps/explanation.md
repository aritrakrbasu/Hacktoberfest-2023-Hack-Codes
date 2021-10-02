## Explanation

In this problem they are asking us to find the maximum score that could be obtained from traversing 
the array with some skips in between.

## My Approach :

Traverse the array/vector from the 0th index. Now simultaneously store the value that could be obtained by going straight away to i+v[i] from ith index.

If another position has already reached out to i+v[i] then it is required to take the maximum
of the points from this position and already present score.


Run Through for Test Case:

a=[7,3,2,1,3]

1. Start from 7 , index is 0 [not 1 based indexing]
    Now store the score obtined v[i]+mp[i] in mp[i+v[i]] .
    Hence mp[7]=7+0=7.

2. Go to index 1.
    mp[3+1]=mp[4]=3+0=3

3. Go to index 2
    mp[2+2]=mp[4]=2+0=2

4. Go to index 3
    mp[1+3]=mp[4]
    As we have already encountered mp[4] at step 3 hence it already has a score.
    So take the maximum score that could be obtained for this index 
    mp[4]=max(mp[4],v[3]+mp[3]) = max(2,1)=2

5. Go to index 4
    Now mp[3+4]=mp[7]= v[4]+mp[4]
    From previous steps we know max score at index 4 is mp[4]= 2
    mp[7] = 3+2=5


As we could see the max score could be obtained by go from index 0 to index 7

Hence score is 7.
