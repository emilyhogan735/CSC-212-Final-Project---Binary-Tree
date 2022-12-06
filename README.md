# CSC 212 Final Project - BinaryTree
The final project for CSC212. We must implement a binary tree and its standard functions.


|      Name     |     Role    |
| ------------- | ------------- |
| Emily Hogan   | Member  |
| Ken Zhu       | Member  |
| Liam Dowen    | Member  |

`GITHUB REPO ADDRESS:` https://github.com/emilyhogan735/CSC-212-Final-Project

## Introduction:
Our CSC212 Term Project is to develop a simple B-Tree data structure class with at least 3 functionality:
Insert/Search method, and a output of .DOT file for Visalization at Graphiz.

B-Tree is a self-balancing **Tree** data structure that maintains sorted data and allows searches, sequential access, insertions, and deletions.
The B-tree generalizes the binary search tree, allowing for nodes with more than two children. Unlike other self-balancing binary search trees, the B-tree is well suited for storage systems that read and write relatively large blocks of data, such as databases and file systems.

#### Time Complexity of a B-Tree:
| Algorithm | Complexity O(n)|
| Search | O(log n) |
| Insertion | O(log n) |
| Deletion | O(log n) |

>For this project we only implemented Search and Insertion.\
>Deletion was not implemented

Properties of B-Tree
* All leaves are at the same level.
* B-Tree is defined by the term minimum degree ‘t‘. The value of ‘t‘ depends upon disk block size.
* Every node except the root must contain at least t-1 keys. The root may contain a minimum of 1 key.
* All nodes (including root) may contain at most (2*t – 1) keys.
* Number of children of a node is equal to the number of keys in it plus 1.
* All keys of a node are sorted in increasing order. The child between two keys k1 and k2 contains all keys in the range from k1 and k2.
* B-Tree grows and shrinks from the root which is unlike Binary Search Tree. Binary Search Trees grow downward and also shrink from downward.
* Like other balanced Binary Search Trees, the time complexity to search, insert and delete is O(log n).
* Insertion of a Node in B-Tree happens only at Leaf Node.

## Methods:

**Search**
**Insertion**
**Deletion**

## Implementation:
```
[Type Pseudocode here]
```

```
[How to Compile our Code]
```
>Insert mermaid graph here

## Contribution Breakdown:
Emily: Implemented the skeleton of the source code, implemented BSTree and BSTNode, implemented insertion, fixed search\
Liam: Implemented the search method.\
Ken: GitHub .README markdown, Failed to Implement the DOT Visualization.\
Matthew: MIA.

[Reminder to add who added which slides in the future]
