// Naive Approach
/*
#include <iostream>

using namespace std;

int largestele(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        bool flag = true;

        for(int j = i; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            return i;
        }
    }
        return -1;
    
}

int main()
{
    int sample[6] = {12, 34, 45, 6, 8, 9};
    cout << largestele(sample, 6);
    return 0;
}
*/



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
