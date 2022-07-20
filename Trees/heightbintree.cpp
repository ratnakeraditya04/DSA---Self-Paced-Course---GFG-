#include <bits/stdc++.h>
using namespace std;
struct Node{
    int key ;
    struct Node* left ;
    struct Node* right ;
    Node(int x)
    {
        key = x ;
        left = right = NULL ; 
    }
};


int height(Node* node)
{
    if(node == NULL)
    {
        return 0 ; 
    }
    else
    {
        return max(height(node->left), height(node->right)) + 1 ;  
    }
}