As the test case have 10^5 order we may have get TLE in brut force so we go for some more optimal one.
Here it is...
1. First of all we take the array elements and its index in a map
2. Itearate upto 1000 as it is the highest value of array element and check for coprime through gcd and also check the array elements present in map or not.
3. If condition satisfied calculate maximum value of (i+j)