//
//  sort.cpp
//  ALDA_Exercise6v12024
//
//  Created by Michael Strommer on 17.05.24.
//

#include "bintree.hpp"

char bufferPO[100];
char bufferLO[100];

// NUR FÜR TESTFÄLLE
void copyBufferPO(char *buffer){
    strcpy(buffer,bufferPO);
}
void copyBufferLO(char *buffer){
    strcpy(buffer,bufferLO);
}
// BEGINN DER ÜBUNGSAUFGABE:

binTree *t_init(){
    binTree *tmp = (binTree *)malloc(sizeof(binTree));
    tmp->root = NULL;
    tmp->size = 0;
    return tmp;
}

node *insertNode(node *start, int key, const char *data){
    return NULL;
}

node *insert(binTree *t, int key, const char *data){
    return NULL;
}

int treeDepth(node *n) {
    return -1;
}

int minKey(node *n){
    return -1;
}

int maxKey(node *n){
    return -1;
}

void postOrder(node *n){
    // Verwenden Sie die globale Variable bufferPO um den Output zu schreiben.
    // Keine Trennzeichen!
    // Hier ein Beispiel:
    // char snum[5];
    // snprintf(snum, 5, "%d ", n->key);
    // strcat(bufferPO, snum);
}

void printLevel(node *n, int level){
    // Verwenden Sie die globale Variable bufferLO um den Output zu schreiben.
    // Keine Trennzeichen!
    // Hier ein Beispiel:
    // char snum[5];
    // snprintf(snum, 5, "%d ", n->key);
    // strcat(bufferLO, snum);
}

void levelOrder(node *n){
    // ruft print Level auf.
    // Eine mögliche Implementierung...
}

