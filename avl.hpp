#pragma once
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;        
    string content;
    int height;
    Node *left, *right;
    Node(int k, string c) : key(k), content(c), height(1), left(nullptr), right(nullptr) {}
};

class AVL {
private:
    Node* root = nullptr;
    int counter = 0;

    int height(Node* n);
    int balanceFactor(Node* n);

    Node* rightRotate(Node* y);
    Node* leftRotate(Node* x);

public:
    void addPost(const string &content);
    vector<string> getRecentPosts(int N); 

    Node* insert(Node* node, int key, const string &content);
    Node* remove(Node* node, int key);
    Node* update(Node* node, int key, const string &content);

    void reverseInorder(Node* node, vector<string> &posts, int &N);
};

//add method to generate postID which will act as keys
//also add delete later 
//update too, that will be like both deleting and inserting

AVL::height(Node* n){
    return n->height;
}

AVL::balanceFactor(Node* n){
    int lh= n->left->height;
    int rh= n->right->height;
    return (lh - rh);
}

AVL::rightRotate(Node* y){
    
}

AVL:: leftRotate(Node* x){
    
}

