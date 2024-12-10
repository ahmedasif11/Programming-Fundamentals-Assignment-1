#include <iostream>
using namespace std;

int main()
{
    int noOfTerms;
    cout << "Enter the number of terms required: ";
    cin >> noOfTerms;

    int num;
    cout << "Enter the number which series is required: ";
    cin >> num;

    long long int term = 0;
    do
    {
        term = term * 10 + num;
        cout << term << "\t";
        noOfTerms--;

    } while (noOfTerms);

    return 0;
}