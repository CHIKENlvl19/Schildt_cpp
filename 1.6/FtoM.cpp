#include <iostream>

using namespace std;

int main(){

    double lengthFeet, lengthMeters;

    cout << "Введите длину в футах: ";
    cin >> lengthFeet;

    lengthMeters = lengthFeet / 3.28;
    cout << lengthFeet << " футов составляет " << lengthMeters << " метров." << endl;

    cout << "Введите длину в метрах: ";
    cin >> lengthMeters;
    cout << lengthMeters << " метров составляет " << lengthMeters * 3.28 << " футов." << endl;
    
    return 0;
}