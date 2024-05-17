//
//  bintree.hpp
//  ALDA_Exercise6v12024_Solution
//
//  Created by Michael Strommer on 17.05.24.
//

#ifndef bintree_hpp
#define bintree_hpp

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node_ {
    int key;
    char *data; // darf nicht verändert werden!
    struct node_ *left;
    struct node_ *right;
} node;

typedef struct binTree_ {
    int size;
    node *root;
} binTree;

// Funktionsprototypen

binTree *t_init();
node *insertNode(node *, int, const char *);
node *insert(binTree *, int, const char *);
int treeDepth(node *);
int minKey(node *);
int maxKey(node *);
void postOrder(node *);
void levelOrder(node *);

// NUR FÜR TESTFÄLLE
void copyBufferPO(char *);
void copyBufferLO(char *);

#endif /* bintree_hpp */
