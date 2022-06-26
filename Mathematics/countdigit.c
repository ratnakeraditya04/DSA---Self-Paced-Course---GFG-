//Finding no. of digits in a number

//Iterative solution
int countdigit(long n)
{
    int count = 0;
    while(n != 0)
    {
        n = n / 10; 
        ++count ;
    }
    return count ;

}

//Recursive Solution


int countdigit(long n)
{
    if(n == 0){
        return 0 ;
        return 1 + countdigit(n/ 10);
    }
}


//Logarithmic Solution

int countdigit(long n)
{
    return floor(log10(n) + 1 );
}




// C Program to count digits.


#include <stdio.h>

int count(int n);

int main(){
    int n ; 
    printf("enter no . : ");
    scanf("%d", &n);

    printf("Count :%d" , count(n));
}
int count( int n){
    int count = 0 ;
    for (int i = 0; n > 0; i++)
    {
        n = n / 10 ;
        count++ ;

    }
    if (n == 0)
    {
        return 1 ;
    }
    
    return count ;

    
}