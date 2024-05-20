#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string input;
    cout << "Masukkan Kalimat: ";
    getline(cin, input);

    stack<char> charStack;
    int lengthInput = input.length();

    for (int i = 0; i < lengthInput; ++i)
    {
        charStack.push(input[i]);
    }

    for (int i = 0; i < lengthInput; ++i)
    {
        cout << charStack.top();
        charStack.pop();
    }

    return 0;
}