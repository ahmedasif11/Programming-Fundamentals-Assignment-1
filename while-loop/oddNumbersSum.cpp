#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the range with in the sum of odd numbers is required: ";
    cin >> num;

    int sum;
    int odd = 1;
    int i = num;
    while (i)
    {
        sum += odd;
        odd += 2;
        i--;
    }
    cout << "The sum of odd numbers with in " << num << " is: " << sum << endl;

    return 0;
}