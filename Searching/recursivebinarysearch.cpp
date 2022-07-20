#include <bits/stdc++.h>
using namespace std;
int bsearch(int arr[] , int low , int high , int n , int x )
{
    int mid = (low + high) / 2 ;
    if(low > high)
    {
        return -1 ;
    }
    if(arr[mid] == x)
    {
        return mid ;
    }

    else if(arr[mid] > x )
    {
        return bsearch( arr , low , mid - 1 ,n , x) ;
    } 
    else
    {
        return bsearch(arr , mid + 1 , high ,n ,  x  ) ;
    }
    

}
int main()
{
    
    return 0 ;
}