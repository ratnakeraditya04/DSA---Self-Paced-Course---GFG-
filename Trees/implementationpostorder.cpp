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


/**************************************************** Converting into Postorder**************************************/
void postOrder(Node* root  ) 
{
    if(root != NULL)
    {
        postOrder(root->left) ;
        
        
        postOrder(root->right) ; 
        cout << root->key << endl ;
    } 

}

/******************************Printing Postorder traversal****************************************************************************/
void  postorder(Node* root , vector<int> & ans)
{
    if(root != NULL)
    {
    postorder(root->left , ans );
    postorder(root->right, ans );
    ans.push_back(root->key);
    }
}


vector <int> printpreorder (Node* root)
{
    vector<int> v ;

    postorder(root , v );
    return v ; 
}  