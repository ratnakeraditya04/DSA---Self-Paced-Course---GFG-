//Naive Approach 
//We have actually done two traversals - one in getlargest function and other in secondlargest.


// #include <bits/stdc++.h>
// using namespace std;
// int getlargest(int arr[] ,int n ) //In arr = {5 , 20 , 12 , 20 , 10 } - Here this fxn return index 1 even it has two largest terms here.
// {
//     int res = 0 ;
//     for(int i = 1 ; i < n ; i++)
//     {
//         if(arr[i] > arr[res])
//         {
//             res = i ;
//         }
//     }
//     return res ;
// }
// int secondlargest(int arr[] , int n )
// {
//     int largest = getlargest(arr , n ) ; //We first found the index of largest element.
//     int res = -1 ;
//     for(int i = 0 ; i < n ; i++)
//     {
//         if(arr[i] != arr[largest])//Here we are using the approach that we traverse the loop comparing each element with the largest element.
//         { 
//             if(res == -1) //We are using this as when we come for i = 0 at that time res == -1 goes into the if condition res = i .
//             {
//                 res = i ;
//             }
//             else if ( arr[i] > arr[res])
//             {
//                 res = i ; 
//             }
            
//         }
//     }
//     return res ;



// }
// int main()
// {
    
//     return 0 ;
// }





//Efficient Solution 

#include <bits/stdc++.h>
using namespace std;
int secondlargest (int arr[] , int n )
{
    int res = -1 , largest = 0 ;
    for(int i = 1 ; i < n ; i ++)
    {
        if(arr[i] > arr[largest] ) // We assumed that 0th index element is largest at the moment and if we encounter the next element greater than existing element then update the largest element and second largest element would become the earlier largest element in the loop.
        {
            res = largest ;
            largest = i ;
        }
        else if ( arr[i] != arr[largest]) // If we entered the value lesser than the largest element then there are several cases - res == -1 -- This is when all the before elements are equal. and the element you entered is greater than the second largest element existing in the array.
        {
            if(res == -1 || arr[i] > arr[res])
            {
                res = i ;
            }
        } 
        
    }
}
int main()
{
    
    return 0 ;
}