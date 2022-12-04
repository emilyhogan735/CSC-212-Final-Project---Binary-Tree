// implementation of all methods defined in tree.h
#include <iostream>
#include "tree.h"
using namespace std;

// call functions
BSTNode search(int d);
void insert(int d);
void remove(int d);

// main tree function
BSTree::BSTree() {

}

// impliment search method
BSTNode search(int d){

    //start at root node
    // if the search key matches the current node's key then FOUND
    // if search key is greater than the current node's key then SEARCH ON RIGHT CHILD
    // if search key is less than the current node's key then SEARCH ON LEFT CHILD
    // stop when current node is NULL, (NOT FOUND)

}

// impliment insert method
void insert(int d){

    //perform a search operation
    search(d);
    //if FOUND, no need to insert
    //if NOT FOUND, insert node where Search stopped

}

//impliment remove method
void remove(int d){

    //Case 1: node is a leaf
    //      delete node and set parent's pointer to NULL
    //Case 2: node has 1 child
    //      set parent's pointer to the only child and delete node
    //Case 3: node has 2 children
    //      find successor (could also use predecessor)
    //      copy successor's data to node
    //      delete successor

}