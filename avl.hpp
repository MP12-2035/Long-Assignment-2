#pragma once
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int height;
    int ID;
    string content;
    int bf;
    Node *left;
    Node *right;
        
    Node (int ID, string content) : 
    ID(ID), content(""), left(nullptr), right(nullptr), height(0), bf(0) {}
    
    };
    
class AVL{
    private:
    
    Node* root;
    
    AVL(): root(nullptr) {}
    ~AVL(){}
    
    int height(Node* n) {
        if (n==nullptr) return -1;
        else return n->height;
    }
        
    int balance_factor(Node* n) {
        if (n==nullptr) return 0;
        else return n->bf;
    }
    
    string disp_content(Node* n) {
        if (n==nullptr) return "Post doesn't exist";
        else return n->content;
    }
    
    Node* leftR(Node* x){
        Node* y=x->right;
        Node* T2=y->left;
        
        y->left=x;
        x->right=T2;
        
        return y;
    }
    
    Node* rightR(Node* x){
        Node* y=x->left;
        Node* T2=y->right;
        
        y->right=x;
        x->left=T2;
        
        return y;
    }
    
    public:
    Node* find(int ID){
        Node* cur=root;
        
        while(cur->left || cur->right){
            if (cur->ID==ID) break;
            else if (cur->ID<ID) cur=cur->right;
            else cur=cur->left;
        }
        return cur;
    }
    void insert(int ID, string content){
        Node avlnode= new Node(ID, content);
        
        Node* place= find(ID);
        
        if (place->ID<ID) place->left=avlnode;
        else place->right=avlnode;
        
        place->height++;
        
        place->bf=place->left->height-place->right->height;
        
        if (abs(place->bf)>1) {
            //rebalancing needed
            if 
        }
        
    }
    
}
