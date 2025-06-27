#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int v) {
        val = v;
        left = NULL;
        right = NULL;
    }
};

class BinaryTree {
public:
    Node* root;

    BinaryTree() {
        root = NULL;
    }

    void preorder(Node* root) {
        if (root == NULL) {
            return;
        }
        cout << root->val << " ";
        preorder(root->left);
        preorder(root->right);
    }

    bool checkTree(Node* root) {
        if (root == NULL) {
            return false;
        }
        if (root->left == NULL && root->right == NULL) {
            return true; 
        }
        if (root->left != NULL && root->right != NULL) {
            return root->val == (root->left->val + root->right->val);
        }
        return false;
    }  
};
int main() { 
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(2);
 
    BinaryTree tree;
    tree.root = root; 
    cout<<"preoder Tree";

    cout << "Preorder Tree: ";
    tree.preorder(tree.root);
    cout << endl;

    if (tree.checkTree(tree.root)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
