#include<iostream>
#include<array>

using namespace std;
int main()
{
    array<int ,4> a = {1,3,4,5};
    cout << a.size() << " " << endl;  

    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Empty or not: " << a.empty() << endl;
    cout << "First element: " << a.front() << endl;
    cout << "Last element: " << a.back() << endl;
    return 0;
}