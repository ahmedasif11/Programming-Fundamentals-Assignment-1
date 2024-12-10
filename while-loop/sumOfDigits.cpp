#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number to find the sum of its digits: ";
    cin >> num;

    int temp = num;
    int sum = 0;

    while (temp)
    {
        int rem = temp % 10;
        sum += rem;
        temp /= 10;
    }

    cout << "The sum of digits of " << num << " is: " << sum << endl;

    return 0;
}