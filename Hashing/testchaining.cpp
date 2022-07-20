#include <bits/stdc++.h>
using namespace std;
struct Hash
{
    int bucket ; // defines the size of hash table
    list<int>* table ; // created a pointer variable of list data type which can behave as linked list data type.
    Hash(int x )
    {
        bucket = x ;
        table = new list<int>[x] ; 
    }
    void insert(int key)
    {
        int i = key % bucket ; 
        table[i].push_back(key) ; 
    }
    void remove(int key)
    {
        int i = key % bucket ; 
        table[i].remove(key) ; 
    }
    bool search(int key )
    {
        int i = key % bucket ; 
        for(auto y : table[i])
        {
            if(y == key)
            {
                return true ; 
            }
        }
        return false ; 
    }
};

int main()
{
    Hash Hash(7) ; 
    Hash.insert(10) ; 
    Hash.insert(29) ; 

    cout<< Hash.search(10)<< endl ; 
    return 0 ;
}