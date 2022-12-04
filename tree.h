// class declaration
#pragma once
#include <iostream>
using namespace std;

class BSTNode{ // nodes
    private:
        // variables
        int data;
        BSTNode *left;
        BSTNode *right;

    public:
        BSTNode(int d); // constructor - makes new node, passing on the data
        ~BSTNode(); // destructor - destroys old memory
    
    friend class BSTree; // can access private data from BSTree
};

class BSTree{ // binary search tree

    private:
        // variables
        BSTNode *root;
        void destroy(BSTNode *p);

    public:
        BSTree(); // constructor
        ~BSTree(); // destructor

        // functions
        void insert(int d);
        void remove(int d);
        BSTNode *search(int d);

};