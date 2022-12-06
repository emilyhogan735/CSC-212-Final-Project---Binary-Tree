# CSC 212 Final Project - B-Tree
The final project for CSC212. We must implement a btree data structure and its standard functions.
>A B-tree is a balanced tree—not a binary tree.


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
|-----------|----------------|
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
![](https://cdn.discordapp.com/attachments/1047363280257167461/1049534089088225321/image.png)\
Searching in B Trees is similar to a Binary Search Tree.\ 
For example, the B Tree search method is describe in the following process:

* Compare item 49 with root node 78. since 49 < 78 hence, move to its left sub-tree.
* Since, 40<49<56, traverse right sub-tree of 40.
* 49>45, move to right. Compare 49.
* match found, return the interger

**Insertion**

Insertions are done at the leaf node level.

We want to insert `8` into the BTree 
![](https://cdn.discordapp.com/attachments/1047363280257167461/1049535291049906237/b-tree-inserting.png)
After a traversal `8` will be inserted to the right of `5`
![](https://cdn.discordapp.com/attachments/1047363280257167461/1049535304375226368/b-tree-inserting2.png)
The node now contain `5` keys which is greater than `4` keys. Therefore split the node from the median. Notice `8` is the median after the insertion.\
Then `8` is pushed up to a higher level node, if the 2nd height's node is also full, the split process repeats, in this case the higher parent node has 2 keys which still has space for `8`, the process ends here.
![](https://cdn.discordapp.com/attachments/1047363280257167461/1049535315162955837/b-tree-inserting3.png)

A generalized procedure:
* Traverse the B Tree in order to find the appropriate leaf node at which the node can be inserted.
* If the leaf node contain less than m-1 keys then insert the element in the increasing order.
* Else, if the leaf node contains m-1 keys, then follow the following steps.
  * Insert the new element in the increasing order of elements.
  * Split the node into the two nodes at the **median**.
  * Push the **median** element upto its parent node.
  * If the parent node also contain m-1 number of keys, then split it too by following the same steps.
  
**Deletion**
Deletion is also performed at the leaf nodes. The node which is to be deleted can either be a leaf node or an internal node. Following algorithm needs to be followed in order to delete a node from a B tree.

This example we will delete the node `53` from the B Tree of order `5`
![](https://cdn.discordapp.com/attachments/1047363280257167461/1049536746045579264/b-tree-deletion.png)
`53` is present in the right child of element `49`. Delete it. 
![](https://cdn.discordapp.com/attachments/1047363280257167461/1049536759253446676/b-tree-deletion2.png)
Now, `57` is the only element which is left in the node, the minimum number of keys that must be present in a B tree of order `5` is `2`. Therefore we merge `57` into the `49 -> 23,34` sub tree. Because `57` is greater than `49`. `49 is also pushed down to the leaf node.
![](https://cdn.discordapp.com/attachments/1047363280257167461/1049536774642352158/b-tree-deletion3.png)

A generalized procedure:

* Locate the leaf node.
* If there are more than m/2 keys in the leaf node then delete the desired key from the node.
* If the leaf node doesn't contain m/2 keys then complete the keys by taking the element from eight or left sibling.
  * If the left sibling contains more than m/2 elements then push its largest element up to its parent and move the intervening element down to the node where the key is deleted.
  * If the right sibling contains more than m/2 elements then push its smallest element up to the parent and move intervening element down to the node where the key is deleted.
* If neither of the sibling contain more than m/2 elements then create a new leaf node by joining two leaf nodes and the intervening element of the parent node.
* If parent is left with less than m/2 nodes then, apply the above process on the parent too.

If the the node which is to be deleted is an internal node, then replace the node with its in-order successor or predecessor. Since, successor or predecessor will always be on the leaf node hence, the process will be similar as the node is being deleted from the leaf node.

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
