#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number of terms you want to print: ";
    cin >> num;

    int first, second;
    for (int i = 1; i <= num; i++)
    {
        if (i == 1)
        {
            first = 0;
            cout << first << "\t";
            continue;
        }
        else if (i == 2)
        {
            second = 1;
            cout << second << "\t";
        }
        else
        {
            int newTerm = first + second;
            first = second;
            second = newTerm;
            cout << newTerm << "\t";
        }
    }

    return 0;
}