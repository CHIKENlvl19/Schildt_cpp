#include <iostream>

using namespace std;

int main(){

    int a = 2, b = 3, c;

    if(a < b) cout << "a меньше чем b\n\n";

    if(a == b) cout << "все равно не выведется\n";

    c = b - a;
    cout << "c содержит 1\n\n";
    if(c >= 0) cout << "с неотрицательно\n\n";
    if(c < 0) cout << "c отрицательно\n\n";

    return 0;
}