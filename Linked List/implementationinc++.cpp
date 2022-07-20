#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data ;
    node * next ;
    node(int x) // Constructed a constructor here we have and in brackets we have initialised a variable here.
    {
        int x ;
        next = NULL ; 
    }
};
int main()
{
    // node * head = new node(10) ;
    // node * temp1 = new node(20) ; // This is the initialisation of node part here. We are initialising a node and filling its data here using constructor we have created.
    // node * temp2 = new node(30) ;

    // head-> next =  temp1 ;  // We have pointed our head pointer to the first node temp1 we have created here 
    // temp1 -> next = temp2 ; // Next we pointed the already created first node's pointer to the next pointer. 

    //Short hand Implementation of this linked list. 




    node * head  = new node(10) ;  
    head -> next = new node(20) ;
    head -> next -> next = new node(30) ; // Here without creating a variable data type we have created and linked the nodes at the very step. 
 


 
    return 0 ;
}