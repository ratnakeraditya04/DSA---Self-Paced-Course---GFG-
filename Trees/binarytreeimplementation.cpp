#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int key ;
    struct Node* left ;
    struct Node* right ;

    // By using struct we defined a datatype that contains three points key and left right pointers.
    // In C++ Language we used the constructor Property to initialise Node with value x and pointers as Null initially. 
    Node(int x)
    {
        key = x ;
        left = right = NULL ;
        
    }
};
int main()
{
    Node* root = new Node(10) ; 
    // struct Node root = new Node(10 ); is wrong as we are allocating memeory and during this alloacation null pointer is assigned and 
    // this null pointer is actually assigned a pointer through Node*.

    root->left = new Node(20) ; 
    // Here by use of new we allocated memory to a Node(with value written here) and by the use of root->left we actually pointed to this memory location. 
    root->right = new Node(30) ;

    root->left->left = new Node(40) ; 


    // To make an empty tree
    // Node* root = NULL ;

    
    return 0 ;
}