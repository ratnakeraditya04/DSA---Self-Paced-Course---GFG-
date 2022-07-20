#include <bits/stdc++.h>
using namespace std;




struct mystack{
int *arr ;
int top ;
int cap ;
mystack(int c )
{
    cap = c ;
    arr = new int[cap] ;
    top = - 1 ;

}
void push(int x )
{
    if(top == cap - 1 ) // Overflow Check Condition
    {
        // Print out all the error statement.
    }
    top++ ;
    arr[top] = x ;

}
int pop()
{
    if(top == -1) // Underflow Condition Check 
    {
        //Print out the return statement.
    }
    int res = arr[top] ;
    top -- ;
    return res ;
}
int peek()
{
    if(top == - 1 )
    {
        // This means there are no elements in the stack. So stack will not be there at present.
    }
    return arr[top] ;
}
int size()
{
    return top + 1 ;


}
bool isEmpty()
{
    return top == -1 ; 
}
};
int main()
{
    
    return 0 ;
}