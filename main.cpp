// must use classes
// must store the words of an input text file
//      for the word "node" in the tree, a count with the number of repeats must also be stored
// ensure at least search/insert methods are correctly implimented
//      search must also return/show the count
// generate a DOT file for visualization
// use linked lists?

#include <iostream>
#include "tree.h"
#include <vector>
#include <string>
#include <fstream> // to manage files
using namespace std;

// call function
vector<string> ReadFile(string fname);

int main(int argc, char* argv[]){ // takes in multiple string arguments
    
    // take in file name
    string fname = argv[1];
    // read in data
    vector<string> words = ReadFile(fname);

    // call constructors
    // BSTNode BSTNode();
    // BSTree BSTree();

    return 0;
}

// function to read in text file data
vector<string> ReadFile(string fname){
    vector<string> words;
     // Opens the file for reading
    ifstream file(fname);
    // Creates a string to hold each line in temporarily
    string str;
    // Iterates over the file, pushing each `str` into the words vector
    while (getline(file, str)) {
        // push the string into the words vector
        words.push_back(str);
    }
    return words;
}