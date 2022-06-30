// Naive Approach

// #include <iostream>

// using namespace std;

// int largestele(int arr[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         bool flag = true; // We set the flag as true as it means we have declared that arr[0] element is largest.

//         for(int j = i; j < n; j++)
//         {
//             if (arr[j] > arr[i])
//             {
//                 flag = false; // When we find a element greater then the existing assumed element then we set the flag as false and come out of te loop.
//                 break;
//             }
//         }
//         if (flag == true) // If we have traversed through the whole loop and no greater element is found then this is the largest element. 
//         {
//             return i;
//         }
//     }
//         return -1;
    
// }

// int main()
// {
//     int sample[6] = {12, 34, 45, 6, 8, 9};
//     cout << largestele(sample, 6);
//     return 0;
// }




//Efficient Approach

#include <iostream>

using namespace std;

int largestele(int arr[], int n){
    int res = 0 ;
    for(int i = 1 ; i < n ; i++){
        if(arr[i] >  arr[res]){
            res = i ;
        }
    }
    return res ;


}
int main()
{
    int sample[6] = {12, 34, 45, 6, 8, 9};
    cout << largestele(sample, 6);
    return 0;
}
