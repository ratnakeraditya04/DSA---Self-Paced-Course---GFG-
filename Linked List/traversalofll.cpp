#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data ;
    node * next ;
    node(int x )
    {
        int x ;
        next = NULL  ; 
    }
};
// Normal method to transverse the LL
void printlist(node * head) 
{
   node *curr = head ;
   while(curr != NULL)
   {
    cout<< curr-> data << " " ;
    curr = curr -> next ; 
   }
}

// Recursive method to traverse the LL 
void rprint(node * head)
{
    if(head == NULL)
    {
        return ;
    }
    cout << head->data << " " ;
    rprint(head -> next) ;
}
int main()
{
    node *head = new node(10) ;
    head -> next = new node(20) ;
    head -> next -> next = new node(30) ;
    head -> next -> next -> next = new node(40) ;
    return 0 ;
}