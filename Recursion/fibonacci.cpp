// Method -1 Recursive Solution 
// Time Complex = 
// Auxiliary Space Complexity = O(n)


// #include <bits/stdc++.h>
// using namespace std;


// int fib(int n ){
//     if(n == 0 || n == 1 )
//     return n;

//     return fib( n - 1 ) + fib( n - 2) ;

// }
// int main()
// {
//     int n ;
//     cin >> n ;
//     cout << fib(n) ;

//     return 0 ;
// }


//Method - 2 Array Solution
// Time Complexity = theta(n)
// Space Complexity = theta(1)


// #include <bits/stdc++.h>
// using namespace std ;


// int main() {
//     int n ;
//     cin >> n ;
//     cout << endl ;


//     int arr[n] ;
//     arr[0] = 0 ;
//     arr[1] = 1 ;

//      for(int i = 2 ; i <=  n ; i++){
//         arr[i] = arr[i - 1] + arr[i - 2];

//     }
//     cout << arr[n] << endl ;
//     return 0 ;

// }


//Method - 3
// Time Complexity = theta(1)
// Spadce Complexity = theta(0)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a , b , c ;
    int n ;
    cin >> n ;

    if(n == 0 || n == 1) {
        return n ;
    }
    a = 0 ;
    b = 1 ;
    for(int i = 2 ; i <=  n ; i++){

        c = a + b ;
        a = b ; // I was writing b = a 

        b = c ; // I was writing c = b 
    }

    cout << c ;

    
    return 0 ;
}
