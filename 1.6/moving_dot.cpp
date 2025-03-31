#include <iostream>

using namespace std;

int main(){

    int ivar = 100;
    double dvar = 100.0;

    cout << "Исходное значение ivar: " << ivar << endl;
    cout << "Исходное значение dvar: " << dvar << endl;
    cout << endl;
    
    ivar /= 3;
    dvar /= 3.0;

    cout << "ivar после раздедения: " << ivar << endl;
    cout << "dvar после раздедения: " << dvar << endl;

    return 0;
}