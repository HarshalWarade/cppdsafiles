#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(10);
    l.push_front(5);
    for(int i:l) {
        cout << i << " ";
    }
    return 0;
}