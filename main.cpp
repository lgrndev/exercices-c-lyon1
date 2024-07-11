#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float somme(0);
    float signe(1);

    for (float i(1);i<1000000;i++) {
        somme += (1/i) * signe;
        signe = -signe;
    }

    cout << "La somme est " << somme << endl;
    cout << "La valeur de log(2.0) est : " << log(2) << endl;

    return 0;
}
