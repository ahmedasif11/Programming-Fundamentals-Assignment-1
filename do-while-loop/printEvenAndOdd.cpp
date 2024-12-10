#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the range with in the even and odd numbers are required: ";
    cin >> num;

    int i = 1;
    cout << "Odd" << "\t" << "Even" << endl;
    do
    {
        if (!(i % 2))
        {
            cout << i << endl;
        }
        else
        {
            cout << i << "\t";
        }
        i++;
    } while (i <= num);

    return 0;
}