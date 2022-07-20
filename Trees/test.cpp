#include <bits/stdc++.h>
using namespace std;
struct Node{
int data ; 
struct Node* left ;
struct Node* right  ; 

Node(int x)
{
    data = x ;
    left = right = NULL ; 
}
};
int main()
{
    struct Node* root = (struct Node*) new Node(10 ) ; 
    root->left = new Node(20) ; 
    root->right = new Node(30 ) ; 
    
    return 0 ;
}