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

    while(file.good()){
        file >> x;

        if(x == '{' || x== '(' || x == '[')
        {
            stack.push(x);
        }

        if(x == '}' || x== ')' || x == ']')
        {
            value= stack.pop();
            cout << value << endl;
            if(value == '{' && x== ')')
                {
                    cout << "Expected } but found )" << endl;
                    return 1;
                }
            if(value == '{' && x== ']')
                {
                    cout << "Expected } but found ]" << endl;
                    return 1;
                }
            if(value == '(' && x== '}')
                {
                    cout << "Expected ) but found }" << endl;
                    return 1;
                }
            if(value == '(' && x== ']')
                {
                    cout << "Expected ) but found ]" << endl;
                    return 1;
                }
            if(value == '[' && x== '}')
                {
                    cout << "Expected ] but found }" << endl;
                    return 1;
                }
            if(value == '[' && x== ')')
                {
                    cout << "Expected ] but found )" << endl;
                    return 1;
                }
        }

    }
    return 0;
}
