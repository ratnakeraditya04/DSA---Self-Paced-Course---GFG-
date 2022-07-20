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


/**************************************************** Converting into Inorder**************************************/
void inOrder(Node* root  ) 
{
    if(root != NULL)
    {
        inOrder(root->left) ;
        cout << root->key << endl ;
        
        inOrder(root->right) ; 
    } 

}
/****************************************************Converting into Inorder and then printing them into a vector**********************************/
void inorder(Node* root , vector<int>&ans ) //Passed as reference here so that any vector will be able to do the job.
{
    if(root != NULL)
    {
        inorder(root->left ,ans) ;
        //cout << root->key << endl ;
        ans.push_back(root->key) ; 
        inorder(root->right ,ans) ; 
    } 

}
vector <int> print(Node* root  )
{
    vector<int> v ;
    inorder(root , v);
    return v ;


}
int main()
{   
    Node* root = new Node(10) ; 
    root->left = new Node(20) ; 
    root->right = new Node(30);


    root->left->left = new Node(40);
    root->left->left->left = new Node(50) ; 

    
    return 0 ;
}