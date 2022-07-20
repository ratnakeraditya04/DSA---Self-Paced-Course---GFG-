#include <bits/stdc++.h>
using namespace std;


struct Node
{
    int data ;
    Node *next ;
    Node ( int d )
    {
        data = d ;  
        next = NULL ; 
    }
};


struct MyStack
{
    Node *head ;
    int sz ; 
    MyStack()
    {
        head = NULL ;
        sz = 0 ; 
    }
    void push(int x )
    {
        Node *temp = new Node(x) ; 
        temp -> next = head ; 
        head = temp ; 
        sz++;  
    }
};
int main()
{
    
    return 0 ;
}