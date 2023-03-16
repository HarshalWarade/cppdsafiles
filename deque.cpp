#include<iostream>
#include<deque>

using namespace std;
int main()
{

    deque<int> n;
    n.push_back(100);
    n.push_back(1000);
    n.push_back(10000);
    n.push_back(100000);
    n.push_back(1000000);
    n.push_front(10);

    for(int i:n) {
        cout << i << " ";
    }
    cout << endl;
    
    cout << "First element: " << n.at(0) << endl;
    cout << "Second element: " << n.at(1) << endl;
    cout << n.size() << endl;

    // erasing data

    n.erase(n.begin(), n.begin() + 2);
    cout << n.size() << endl;

    return 0;
}