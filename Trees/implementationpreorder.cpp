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
/***********************************Making Preorder Traversal of a tree*******************************************************/
void preorder(Node* root)
{
    cout << root -> key << " ";
    preorder(root->left);
    preorder(root->right);
}

/******************************Printing Preorder traversal****************************************************************************/
void  preOrder(Node* root , vector<int> & ans)
{
    if(root != NULL)
    {

    
    ans.push_back(root->key);
    preOrder(root->left , ans );
    preOrder(root->right, ans );
    }
}


vector <int> printpreorder (Node* root)
{
    vector<int> v ;

    preOrder(root , v );
    return v ; 
}  
