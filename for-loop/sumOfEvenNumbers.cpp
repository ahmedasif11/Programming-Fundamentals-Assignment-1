#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the range with in the sum of even numbers is required: ";
    cin >> num;

    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        if (!(i % 2))
        {
            sum += i;
        }
    }

    cout << "The sum of even numbers with in " << num << " is: " << sum << endl;

    return 0;
}