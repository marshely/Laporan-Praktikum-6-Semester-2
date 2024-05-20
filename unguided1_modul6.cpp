#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string input;
    cout << "Masukkan Kalimat: ";
    cin >> input;

    stack<char> charStack;
    int lengthInput = input.length();

    for (int i = 0; i < lengthInput; ++i)
    {
        charStack.push(input[i]);
    }

    bool palindrom = true;
    for (int i = 0; i < lengthInput; ++i)
    {
        if (input[i] != charStack.top())
        {
            palindrom = false;
            break;
        }
        charStack.pop();
    }

    if (palindrom)
    {
        cout << "Kalimat tersebut adalah palindrom" << endl;
    }
    else
    {
        cout << "Kalimat tersebut bukan palindrom" << endl;
    }

    return 0;
}