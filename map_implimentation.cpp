//Implementing a map in C++ can also be done using various data structures such as 
// binary search trees, hash tables, or self-balancing trees like Red-Black trees. 
// The Standard Template Library (STL) map in C++ is typically implemented using a
//  Red-Black tree. Here’s a simple implementation of a map using a binary search tree.


#include <iostream>
#include <string>

template<typename K, typename V>
class Node {
public:
    K key;
    V value;
    Node* left;
    Node* right;

    Node(K key, V value) : key(key), value(value), left(nullptr), right(nullptr) {}
};

template<typename K, typename V>
class Map {
private:
    Node<K, V>* root;

    Node<K, V>* insert(Node<K, V>* node, K key, V value) {
        if (node == nullptr) {
            return new Node<K, V>(key, value);
        }
        if (key < node->key) {
            node->left = insert(node->left, key, value);
        } else if (key > node->key) {
            node->right = insert(node->right, key, value);
        } else {
            node->value = value; // Update value if key already exists
        }
        return node;
    }

    Node<K, V>* search(Node<K, V>* node, K key) {
        if (node == nullptr || node->key == key) {
            return node;
        }
        if (key < node->key) {
            return search(node->left, key);
        }
        return search(node->right, key);
    }

    Node<K, V>* minValueNode(Node<K, V>* node) {
        Node<K, V>* current = node;
        while (current && current->left != nullptr) {
            current = current->left;
        }
        return current;
    }

    Node<K, V>* deleteNode(Node<K, V>* root, K key) {
        if (root == nullptr) return root;

        if (key < root->key) {
            root->left = deleteNode(root->left, key);
        } else if (key > root->key) {
            root->right = deleteNode(root->right, key);
        } else {
            if (root->left == nullptr) {
                Node<K, V>* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == nullptr) {
                Node<K, V>* temp = root->left;
                delete root;
                return temp;
            }

            Node<K, V>* temp = minValueNode(root->right);
            root->key = temp->key;
            root->value = temp->value;
            root->right = deleteNode(root->right, temp->key);
        }
        return root;
    }

    void inorder(Node<K, V>* root) {
        if (root != nullptr) {
            inorder(root->left);
            std::cout << root->key << " : " << root->value << std::endl;
            inorder(root->right);
        }
    }

public:
    Map() : root(nullptr) {}

    void insert(K key, V value) {
        root = insert(root, key, value);
    }

    void remove(K key) {
        root = deleteNode(root, key);
    }

    bool contains(K key) {
        return search(root, key) != nullptr;
    }

    V get(K key) {
        Node<K, V>* node = search(root, key);
        if (node) {
            return node->value;
        }
        throw std::runtime_error("Key not found");
    }

    void display() {
        inorder(root);
    }
};

int main() {
    Map<std::string, int> myMap;
    myMap.insert("one", 1);
    myMap.insert("two", 2);
    myMap.insert("three", 3);

    std::cout << "Map contains 'two': " << myMap.contains("two") << std::endl;
    std::cout << "Value for 'two': " << myMap.get("two") << std::endl;

    std::cout << "Map elements:" << std::endl;
    myMap.display();

    myMap.remove("two");
    std::cout << "Map elements after removing 'two':" << std::endl;
    myMap.display();

    return 0;
}
