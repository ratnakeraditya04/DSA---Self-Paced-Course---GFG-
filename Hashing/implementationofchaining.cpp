#include <bits/stdc++.h>
using namespace std;
struct MyHash
{
    int bucket ; 
    list <int> *table ; 
    MyHash(int b)
    {
        bucket = b ; 
        table = new list<int>[b]  ; // We allocated memory to table here and initialises list data structure with at least b data values.
    }
    void insert(int key )
    {
        int i = key % bucket ; 
        table[i].push_back(key) ; 
    }
    void remove(int key)
    {
        int i = key % bucket ; 
        table[i].remove(key) ; // Remove fx
    }
    bool search(int key )
    {
        int i = key % bucket ; 
        for(auto x : table[i])
        {
            if(x == key)
            {
                return true ; 
            }
        }
        return false ; 
    }
};
int main()
{
    
    return 0 ;
}