#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number to check either it is pallindrome or not: ";
    cin >> num;

    int temp = num;
    int rev = 0;

    while (temp)
    {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if (num == rev)
    {
        cout << "Entered number is pallindrome" << endl;
    }
    else
    {
        cout << "Entered number is not pallindrome" << endl;
    }

    return 0;
}