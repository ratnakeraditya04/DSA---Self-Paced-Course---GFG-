#include <bits/stdc++.h>
using namespace std;
int insert(int arr[] , int n , int x , int cap , int pos )
//Here n is the size of array we created x is the element to be inserted and pos is the position at which element needs to be inserted.
//Cap is the capacity of array 
{
    if(cap == n )
    {
        return n  ;//If size of array is equal to the capacity of the array, then immediately return as we cannnot insert the element.  
    }
    int idx = pos -1 ; // position and index have a difference of 1 
    for(int i = n -1 ; i >= idx ; i--  )
    {
        arr[i + 1] = arr[i] ; // We have shifted one element ahead now.
        
    }
    arr[idx] = x ;

    return n + 1 ;
}
int main()
{
    int arr[5] = {2 , 3 , 4 , 5} ;
    int x  = 5 ; 
    int pos = 3 ;
    insert(arr , 5 , 5 , 4 ,3  ) ;
    for(int i = 0 ; i < 5 ;i++)
    {
        cout << arr[i] ;
    }

    return 0 ;
}