
## Binary Tree Project

This project involves implementing various functions and algorithms related to binary trees. It is part of the Data Structures curriculum and is to be completed in a team of two people. The goal is to become proficient in understanding binary trees, traversing them, and manipulating their nodes in C.
## Data structures

The project uses the following data structures:

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

## Binary Search Tree

Binary Search Tree (BST):
typedef struct binary_tree_s bst_t;

## AVL Tree (Self-balancing Binary Search Tree):
typedef struct binary_tree_s avl_t;

## Max Binary Heap (Complete binary tree):
typedef struct binary_tree_s heap_t;

## Requirements

 * Allowed editors: vi, vim, emacs
* Compilation: Your code will be compiled on Ubuntu 20.04 LTS using gcc with flags -Wall -Werror -Wextra -pedantic -std=gnu89.
 * Coding Style: Your code must adhere to the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
* Global Variables: You are not allowed to use global variables.
*  Function Limits: You may not have more than 5 functions per file.
* Standard Library: You are allowed to use the standard library.
* Prototypes: All function prototypes should be in the header file binary_trees.h.


## Compilation
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o binary_tree

## Authors

- [@DerickJoel-Dev](https://github.com/DerickJoel-dev)


