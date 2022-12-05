#include "tree.h"
 // to manage files
using namespace std;

// call function
vector<int> ReadFile(string fname);

int main(int argc, char* argv[]) { // takes in multiple string arguments

    // take in file name
    string fname = argv[1];
    // read in data
    vector<int> nums = ReadFile(fname);

    // create empty tree
    BSTree tree = BSTree();
    // loop through each num input and insert them into the tree one at a time
    for (int i = 0; i < nums.size(); i++) {
        int key = nums[i];
        tree.insert(key);
    }

    // search through tree for desired int



    return 0;
}

// function to read in text file data
vector<int> ReadFile(string fname) {
    vector<int> nums;
    // Opens the file for reading
    ifstream file(fname);
    // Creates a string to hold each line in temporarily
    string str;
    // Iterates over the file, pushing each `str` into the words vector
    while (getline(file, str)) {
        // push the int into the nums vector
        nums.push_back(stoi(str));
    }
    return nums;
}
