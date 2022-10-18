
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {

    public TreeNode deleteNode(TreeNode root, int key) {

        if(root==null) return root;

        if(root.val>key){
           root.left = deleteNode(root.left,key);
        }
        else if(root.val<key){
            root.right = deleteNode(root.right,key);

        }
        else{ // root.val == key

            //case 1: when node has no child
            if(root.left == null && root.right == null){
                return null;
            }

            //case 2: when node has either left or right child

            //when right child is present
            if(root.left == null) return root.right;
            //when left child is present
            if(root.right == null) return root.left;

            //case 3: when node has 2 child

            TreeNode IS = inorderSuccessor(root.right); //inorder Successor
            root.val = IS.val;
            root.right = deleteNode(root.right,IS.val);

        }
        return root;
    }

    public static TreeNode inorderSuccessor(TreeNode root){

        while(root.left!= null){
            root = root.left;
        }
        return root;
    }
}

//this code in contributed by Pratik-Shrivastava
