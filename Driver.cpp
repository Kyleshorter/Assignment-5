#include <iostream>
#include <fstream>
#include "IntStack.h"
using namespace std;

int main()
{
    IntStack stack;
    char x;
    string fileName;
    ifstream file;

    cout << "Input a file name: ";
    getline(cin, fileName);
    cout << endl;
    file.open(fileName.c_str());

    while(file.good()){
        file >> x;
        
        if(x == '{' || x== '(' || x == '[')
        {
            stack.push(x);
        }
        if(x == '}' || x== ')' || x == ']')
        {
            stack.pop();
        }
    }
    return 0;
}
