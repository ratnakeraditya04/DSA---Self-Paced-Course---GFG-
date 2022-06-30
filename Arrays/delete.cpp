#include <bits/stdc++.h>
using namespace std;
int deleteele(int arr[], int n, int x)
{
    int i ; 
    for(i = 0 ; i < n ; i++)
    {
        if(arr[i] == x )
        {
            break ; // We have now get the value of i here and that is the reason we haven't inputted the int in for loop.  
        }
    }

    if(i == n ) // This condition means we reach the end as in above loop we reach the end as i becomes n.
    {
        return n ;
    }
    for(int j = i ; j < n - 1 ; j++)
    {
        arr[j] = arr[j + 1] ;
    }
    return n - 1 ; //We are returning an integer value of present size of an array in this function. 
}
int main()
{
    int x ;
    int arr[5] = {1 ,4 ,5 ,6 ,7} ;
    deleteele(arr , 5 , 4) ;
    for(int k = 0 ; k < 4 ; k++)
    {
        cout << arr[k] << " " ;
    } 
    return 0;
}