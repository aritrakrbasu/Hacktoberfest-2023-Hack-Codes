# Problem: Mirror Tree

## Problem Statement

Given a binary tree, convert it into its mirror tree. The mirror tree of a binary tree is obtained by swapping the left and right subtrees of each node. The task is to complete the function `mirror(root)` that takes the root node of the tree as a parameter and converts the tree into its mirror image.

### Example 1:

**Input:**
    1
   / \
  3   2

**Output:**
    1
   / \
  2   3

### Example 2:

**Input:**
    10
   /  \
  20   30
 /  \
40   60

**Output:**

    10
   /  \
  30   20
       / \
      60  40

## Your Task

Your task is to complete the function `mirror(root)` which takes the root node of the tree and converts it into its mirror image.

**Expected Time Complexity**: O(N), where N is the number of nodes in the binary tree.

**Expected Auxiliary Space**: O(Height of the Tree).

## Constraints

- 1 ≤ Number of nodes ≤ 10^5
- 1 ≤ Data of a node ≤ 10^5

## How to Use

1. **Class Definition**: The `Solution` class contains a method `mirror` to convert a binary tree into its mirror tree. The `Node` class represents the nodes of the binary tree.

```cpp
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        // Code to convert the binary tree into its mirror.
    }
};
Node* root = new Node(1);
root->left = new Node(3);
root->right = new Node(2);
Solution ob;
ob.mirror(root);
