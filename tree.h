// class declaration
#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

class BSTNode { // nodes
private:
    // variables
    int count;
    int key;
    BSTNode* left;
    BSTNode* right;

public:
    BSTNode(int key, int count); // constructor - makes new node, passes on the data
    ~BSTNode(); // destructor - destroys old memory

    friend class BSTree; // can access private data from BSTree
};

class BSTree { // binary search tree
private:
    // variables
    BSTNode* root;

public:
    BSTree(); // constructor
    ~BSTree(); // destructor

    // functions
    void insert(int key);
    int search(BSTNode* root, int key);
};
