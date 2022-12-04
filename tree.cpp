// implementation of all methods defined in tree.h
#include <iostream>
#include "tree.h"
using namespace std;

// call functions
BSTNode search(int key);
void insert(int key);

// impliment the constructor
BSTNode::BSTNode(int key, int count){
    this->count = count;
    this->key = key;
    this->left = nullptr; // initialize as null to reset each time constructor is called, node has no left child
    this->right = nullptr; // initialize as null to reset each time constructor is called, node has no right child
}

// empty tree constructor
BSTree::BSTree(){
    this->root = nullptr; // initialize as null to reset each time constructor is called, there is no root
}

// impliment insert method
void BSTree::insert(int key){ // use method instead of function to access BSTree variables

    // if tree is empty, insert new node as new root
    if(this->root == nullptr){
        BSTNode* new_node = new BSTNode(key, 1); // create new node on the heap with count = 1
        root = new_node; // root becomes the new node
    }

    // if not empty, 
    else{
        // set current node to the root
        BSTNode current = *root;

        // compare the key being inserted to the current node
        while(true){ // infinite loop until broken out of

            // if they match, update counter and exit loop
            if(key == current.key){
                current.count += 1; // update counter
                break; // done with insertion
            }

            // if they don't match, determine if insert should go left or right
            if(key < current.key){ // check left
                // determine if there is a left child
                if(current.left != nullptr){ // if there is a left child, update current to the child
                    current = *current.left;
                    continue; // skip to next iteration of the loop
                }
                if(current.left == nullptr){ // If there is no left child, create a new node and make that the left child of the current node
                    BSTNode* new_node = new BSTNode(key, 1);
                    current.left = new_node;
                    break; // done with insertion
                }
            }

            if(key > current.key){ // check right
                // determine if there is a right child
                if(current.right != nullptr){ // if there is a right child, update current to the child
                    current = *current.right;
                    continue; // skip to next iteration of the loop
                }
                if(current.right == nullptr){ // If there is no right child, create a new node and make that the right child of the current node
                    BSTNode* new_node = new BSTNode(key, 1);
                    current.right = new_node;
                    break; // done with insertion
                }
            }

        }
    }

}

// impliment search method
int BSTree::search(int key){

    int count = 0;

    // start at root node
    // if the search key matches the current node's key then FOUND
    // if search key is greater than the current node's key then SEARCH ON RIGHT CHILD
    // if search key is less than the current node's key then SEARCH ON LEFT CHILD
    // stop when current node is NULL, (NOT FOUND)

}

// impliment the deconstructor to clean up BSTNode data
BSTNode::~BSTNode(){
    // if not empty
    if(this->left != nullptr){ // delete all left children
        this->left->~BSTNode();
    }
    if(this->right != nullptr){ // delete all right children
        this->right->~BSTNode();
    }
    // delete itself
    delete this;
}

// impliment the deconstructor to clean up BSTree data
BSTree::~BSTree(){
    this->root->~BSTNode(); // delete root, aka itself
}
