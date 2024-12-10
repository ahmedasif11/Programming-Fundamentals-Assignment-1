#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number to check that either it is prime of not: ";
    cin >> num;

    int i = 1;
    while (i <= num / 2)
    {
        if (num == 2)
        {
            break;
        }

        i++;
        if (i % num == 0)
        {
            cout << num << " is not prime" << endl;
            return 0;
        }
    }
    cout << num << " is prime" << endl;

    return 0;
}