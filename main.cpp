#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int Nmax;
    float somme(0);

    cout << "Donnez une valeur de Nmax" << endl;
    cin >> Nmax;

    for (int i(0);i < Nmax;i++) {
        somme += 4*(pow(-1,i)/(2*i+1));
    };

    cout << "La valeur de pi est : " << somme << endl;

    return 0;
}
