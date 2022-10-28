One fine day, Geek gave a challenge to one of his friend. The challenge was to find the sum of divisors of the Geek's favourite elements.
Geek's favourite elements are the integers in that array that have exactly four divisors.
Given an array of integer a and size of array n, return the sum of divisors of the Geek's favourite elements.

Example 1:
Input:
n = 3
arr = [6,10,4]
Output: 30
Explanation:
The answer is the sum of divisors of 6 and 10 only.

Example 2:
Input:
n = 5
arr = [1,2,3,4,5]
Output: 0
Explanation:
There is no element in the array having exactly four divisors.

Constraints:
1 <=n<-104 1 <-a[i] <- 105

Your Task:
You don't need to read input or print anything. Your task is to complete the function GeekFavouriteElements() which takes a[] as input parameters and returns the sum of divisors of the Geek's favourite elements.

Expected Time Complexity: O(n*sqrt(m)), where m is greatest element in the array. 
Expected Auxiliary Space: O(n)
