#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number to reverse it: ";
    cin >> num;

    int temp = num;
    int rev = 0;

    while (temp)
    {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    cout << "The reverse of " << num << " is: " << rev;

    return 0;
}