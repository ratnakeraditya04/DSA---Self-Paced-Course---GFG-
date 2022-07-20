#include <bits/stdc++.h>
using namespace std;

int remduplicate(int arr[] , int n )
{
    int temp[n] ; //We initialised an array so as there can be a temporary elements.
    temp[0] = arr[0] ; //We have initialised the temp array element 0 to one arr[0].
    int res = 0 ;
    for(int i = 0 ; i < n ; i ++) 
    {
        if(temp[i] != arr[res - i])
        {
            temp[i] = arr[i] ; 
            res++ ;
        }
    }


}
int main()
{
    
    return 0 ;
}