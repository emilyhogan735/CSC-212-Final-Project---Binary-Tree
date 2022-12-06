// implementation of all methods defined in tree.h
#include "tree.h"
using namespace std;

// implement the constructor
BSTNode::BSTNode(int key, int count) {
    this->count = count;
    this->key = key;
    this->left = nullptr; // initialize as null to reset each time constructor is called, node has no left child
    this->right = nullptr; // initialize as null to reset each time constructor is called, node has no right child
}

// empty tree constructor
BSTree::BSTree() {
    this->root = nullptr; // initialize as null to reset each time constructor is called, there is no root
}

// implement insert method
void BSTree::insert(int key) { // use method instead of function to access BSTree variables

    // if tree is empty, insert new node as new root
    if (this->root == nullptr) {
        BSTNode* new_node = new BSTNode(key, 1); // create new node on the heap with count = 1
        root = new_node; // root becomes the new node
    }

    // if not empty, 
    else {
        // set current node to the root
        BSTNode* current = root;

        // compare the key being inserted to the current node
        while (true) { // infinite loop until broken out of

            // if they match, update counter and exit loop
            if (key == current->key) {
                current->count += 1; // update counter
                break; // done with insertion
            }

            // if they don't match, determine if insert should go left or right
            if (key < current->key) { // check left
                // determine if there is a left child
                if (current->left != nullptr) { // if there is a left child, update current to the child
                    current = current->left;
                    continue; // skip to next iteration of the loop
                }
                if (current->left == nullptr) { // If there is no left child, create a new node and make that the left child of the current node
                    BSTNode* new_node = new BSTNode(key, 1);
                    current->left = new_node;
                    break; // done with insertion
                }
            }

            if (key > current->key) { // check right
                // determine if there is a right child
                if (current->right != nullptr) { // if there is a right child, update current to the child
                    current = current->right;
                    continue; // skip to next iteration of the loop
                }
                if (current->right == nullptr) { // If there is no right child, create a new node and make that the right child of the current node
                    BSTNode* new_node = new BSTNode(key, 1);
                    current->right = new_node;
                    break; // done with insertion
                }
            }

        }
    }

}

// function to search tree for given integer
int BSTree::search_tree(int search_for){

    // determine if there is no root
    if (this->root == nullptr) { // return 0
        return 0;
    }

    // if there is a root
    return this->root->search_node(search_for); // search through each node in the tree

}

// function to search through individual notes for given integer, recursively
int BSTNode::search_node(int search_for){

    if (this->key == search_for) { // if the search key matches the current node's key then FOUND, return count
        return this->count;
    }

    else if (this->key > search_for) { // if search key is greater than the current node's key then SEARCH ON LEFT CHILD
        if (this->left != nullptr){ // check if left child exists
            return this->left->search_node(search_for); // return int
        }
        else{
            return 0; // if not found, return 0
        }
    }

    else { // if search key is less than the current node's key then SEARCH ON RIGHT CHILD
        if (this->right != nullptr){ // check if right child exists
            return this->right->search_node(search_for); // return int
        }
        else{
            return 0; // if not found, return 0
        }
    }

}

// implement the deconstructor to clean up BSTNode data
BSTNode::~BSTNode() {
    // if not empty
    if (this->left != nullptr) { // delete all left children
        this->left->~BSTNode();
    }
    if (this->right != nullptr) { // delete all right children
        this->right->~BSTNode();
    }
    // delete itself
    delete this;
}

// implement the deconstructor to clean up BSTree data
BSTree::~BSTree() {
    if (this->root != nullptr) { // while not empty
        this->root->~BSTNode(); // delete root, aka itself
    }
}
