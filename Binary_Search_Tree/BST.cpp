#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

typedef Node* BTree;
 
void createTree(BTree &T){
    T = NULL;
}

Node* createTNode(int x){
    Node* p = new Node;
    if (p == NULL) return;
    else
    {
        p->data = x;
        p->left = NULL;
        p->right = NULL;
    }
    return p;
}
void insertNode(BTree &T, int x){
    if (T != NULL){
        if (T->data == x) return;
        if (x < T->data) insertNode(T->left,x);
            else insertNode(T->right,x); 
    }
    T = createTNode(x);
}
Node* findNode(BTree T, int x){
    Node* p = T;
    while (p != NULL){
        if (p->data == x) return p;
        if (p->data > x) p = p->left;
            else p = p->right; 
    }
    return NULL;
}
void deleteLeaf(BTree &T, int x){
    if (T == NULL) return;
    if (T->data == x){
        delete(T);
        T = NULL;
    }
    else if (T->data > x) deleteLeaf(T->left,x);
        else deleteLeaf(T->right,x);
}
void delete1Child(BTree &T, int x){
    if (T == NULL) return;
    if (T->data == x){
        Node* p = T;
        if (T->left == NULL) T = T->right;
            else if (T->right == NULL) T = T->left;
        delete(p);
        p = NULL;
    }
    else if (T->data > x) delete1Child(T->left,x);
        else delete1Child(T->right,x);
}
void findReplace(BTree &p, BTree &T){
    if (T->left != NULL) findReplace(p,T->left);
    else
    {
        p->data = T->data;
        p = T;
        T = T->right;
    }
}
void deleteNode(BTree &T, int x){
    if (T == NULL) return;
    if (T->data == x){
        Node *p = T;
        findReplace(p, T->right);
        delete(p);
        p = NULL;
    }
    else if (T->data > x) deleteNode(T->right,x);
        else deleteNode(T->left,x);
}
