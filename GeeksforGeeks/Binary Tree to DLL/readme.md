# Binary Tree to DLL

Author: Sanket Mathur  
Question Link : [https://practice.geeksforgeeks.org/problems/binary-tree-to-dll/1](https://practice.geeksforgeeks.org/problems/binary-tree-to-dll/1)

## Problem Statement

Given a Binary Tree (BT), convert it to a Doubly Linked List(DLL) In-Place. The left and right pointers in nodes are to be used as previous and next pointers respectively in converted DLL. The order of nodes in DLL must be same as Inorder of the given Binary Tree. The first node of Inorder traversal (leftmost node in BT) must be the head node of the DLL.

**Your Task:**  
You don't have to take input. Complete the function bToDLL() that takes root node of the tree as a parameter and returns the head of DLL . The driver code prints the DLL both ways.

## Sample Input

**Input:**  
```
      1  
    /  \  
   3    2  
```  
**Output:**  
3 1 2  
2 1 3  
**Explanation:** DLL would be 3<=>1<=>2

**Input:**  
```
       10  
      /   \  
     20   30  
   /   \  
  40   60  
```  
**Output:**  
40 20 60 10 30  
30 10 60 20 40  
**Explanation:**  DLL would be  
40<=>20<=>60<=>10<=>30.

## Constraints

**Expected Time Complexity:** O(N).  
**Expected Auxiliary Space:** O(H).  
**Note:** H is the height of the tree and this space is used implicitly for the recursion stack.

**Constraints:**  
1 ≤ Number of nodes ≤ 10^5  
1 ≤ Data of a node ≤ 10^5