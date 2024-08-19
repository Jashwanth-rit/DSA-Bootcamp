//set is implimented by using bst 

// bst <=> set


// Sure! Implementing a set in C++ typically involves using the
//  Standard Template Library (STL) set class, which is part of the C++ STL. 
//  However, if you want to create your own implementation, 
//  you can use various data structures such as a binary search tree (BST) or a hash table. 
//  Below is an example of a simple set implementation using a binary search tree.

//Binary Search Tree Based Set

#include <iostream>

class Node {
public:
    int key;
    Node* left;
    Node* right;

    Node(int key) : key(key), left(nullptr), right(nullptr) {}
};

class Set {
private:
    Node* root;

    Node* insert(Node* node, int key) {
        if (node == nullptr) {
            return new Node(key);
        }
        if (key < node->key) {
            node->left = insert(node->left, key);
        } else if (key > node->key) {
            node->right = insert(node->right, key);
        }
        return node;
    }

    bool search(Node* node, int key) {
        if (node == nullptr) {
            return false;
        }
        if (key == node->key) {
            return true;
        }
        if (key < node->key) {
            return search(node->left, key);
        }
        return search(node->right, key);
    }

    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left != nullptr) {
            current = current->left;
        }
        return current;
    }

    Node* deleteNode(Node* root, int key) {
        if (root == nullptr) return root;

        if (key < root->key) {
            root->left = deleteNode(root->left, key);
        } else if (key > root->key) {
            root->right = deleteNode(root->right, key);
        } else {
            if (root->left == nullptr) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            }

            Node* temp = minValueNode(root->right);
            root->key = temp->key;
            root->right = deleteNode(root->right, temp->key);
        }
        return root;
    }

public:
    Set() : root(nullptr) {}

    void insert(int key) {
        root = insert(root, key);
    }

    void remove(int key) {
        root = deleteNode(root, key);
    }

    bool contains(int key) {
        return search(root, key);
    }

    void inorder(Node* root) {
        if (root != nullptr) {
            inorder(root->left);
            std::cout << root->key << " ";
            inorder(root->right);
        }
    }

    void display() {
        inorder(root);
        std::cout << std::endl;
    }
};

int main() {
    Set mySet;
    mySet.insert(5);
    mySet.insert(3);
    mySet.insert(7);
    mySet.insert(1);

    std::cout << "Set contains 3: " << mySet.contains(3) << std::endl;
    std::cout << "Set contains 8: " << mySet.contains(8) << std::endl;

    std::cout << "Set elements: ";
    mySet.display();

    mySet.remove(3);
    std::cout << "Set elements after removing 3: ";
    mySet.display();

    return 0;
}
