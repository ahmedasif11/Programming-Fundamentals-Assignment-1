#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the range with in the even and odd numbers are required: ";
    cin >> num;

    int evenSum = 0, oddSum = 0;
    int i = 1;
    cout << "Odd" << "\t" << "Even" << endl;
    do
    {
        if (!(i % 2))
        {
            cout << i << endl;
            evenSum += i;
        }
        else
        {
            cout << i << "\t";
            oddSum += i;
        }
        i++;
    } while (i <= num);

    cout << "--" << "\t" << "--" << endl;
    cout << oddSum << "\t" << evenSum << endl;
    
    return 0;
}