#include <iostream>

using namespace std;

int main()
{
    int n1 = 100;
    int n2 = 200;

    int entier = rand() % (n2-n1+1) + n1;
    cout << entier << endl;

    return 0;
}
