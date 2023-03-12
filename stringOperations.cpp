#include<iostream>
#include<string>
using namespace std;

void printString(string h) {
    cout << h << endl;
}

int main()
{
    string h = "Har\0sha\0l";
    printString(h);
    return 0;
}