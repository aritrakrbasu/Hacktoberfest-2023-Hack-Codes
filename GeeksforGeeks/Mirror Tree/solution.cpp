#include <iostream>

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

// Helper function to convert the binary tree to its mirror image
Node* mirror(Node* root) {
    if (!root) {
        return nullptr;
    }

    // Recursively swap the left and right subtrees
    Node* temp = root->left;
    root->left = mirror(root->right);
    root->right = mirror(temp);

    return root;
}

// Helper function to perform in-order traversal and print the tree
void inorder(Node* root) {
    if (root) {
        inorder(root->left);
        std::cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    // Create the binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    // Convert the binary tree to its mirror image
    root = mirror(root);

    // Perform in-order traversal and print the tree
    inorder(root);
    std::cout << std::endl;

    // Remember to free the memory allocated for nodes in a real program
    return 0;
}
