//Iterative Approach 


/*
#include <stdio.h>
int fact(int n);


int main()
{
    int n ; 
    printf("enter no . : ");
    scanf("%d", &n);
    
    printf("factorial of n :%d", fact(n));
    return 0;
}
int fact(int n){
    int temp = 1 ;
    for (int i = 1; i <= n; i++)
    {
        temp  = temp * i ;
    }
    return temp ;
}
*/



//Recursive Approach 


#include <stdio.h>
int fact(int n);


int main()
{
    int n ; 
    printf("enter no . : ");
    scanf("%d", &n);
    
    printf("factorial of n :%d", fact(n));
    return 0;
}

int fact(int n){
    if (n == 0)
    {
        return 1 ;

    }
    return n * fact(n - 1) ;
}