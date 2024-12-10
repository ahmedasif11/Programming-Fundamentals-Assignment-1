#include <iostream>
using namespace std;

int main()
{
    char captialAlphabet = 65, smallAplhabet = 97;

    do
    {
        cout << captialAlphabet << "\t" << smallAplhabet << endl;
        captialAlphabet++;
        smallAplhabet++;
    } while (captialAlphabet <= 'Z' && smallAplhabet <= 'z');

    return 0;
}