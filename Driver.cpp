#include <iostream>
#include <fstream>
#include "IntStack.h"
using namespace std;

int main()
{
    IntStack stack;
    char x;
    char value;
    string fileName;
    ifstream file;

    cout << "Input a file name: ";
    getline(cin, fileName);
    cout << endl;
    file.open(fileName.c_str());
    cout << "Testing this files (), {}, and []: " << endl;
    while(file.good()){
        file >> x;

        if(x == '{' || x== '(' || x == '[')
        {
            stack.push(x);
        }

        if(x == '}' || x== ')' || x == ']')
        {
            value== stack.pop();
            if(value == '{' && x!= '}')
                {
                    cout << "Expected } but found " << x << endl;
                    return 1;
                }
            else if(value == '(' && x!= ')')
                {
                    cout << "Expected ) but found " << x << endl;
                    return 1;
                }
            else if(value == '[' && x!= ']')
                {
                    cout << "Expected ] but found " << x << endl;
                    return 1;
                }
        }
    }
    file.close();
    cout << "Your file is good!" << endl;
    return 0;
}
