#include <iostream>
#include <fstream>
#include "IntStack.h"
using namespace std;

int main()
{
    IntStack stack;
    char x;
    char value;
    char y;
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

        else if(x == '}' || x== ')' || x == ']')
        {
            value= stack.pop();
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
        else
        {
            y== stack.pop();
            cout << y << endl;
            if(value == '{')
                {
                    cout << "Missing }" << endl;
                }
            else if(value == '(')
                {
                    cout << "Missing )" << endl;
                }
            else if(value == '[')
                {
                    cout << "Missing ]" << endl;
                }
        }

    }
    file.close();
    cout << "Your file is good!" << endl;
    return 0;
}
