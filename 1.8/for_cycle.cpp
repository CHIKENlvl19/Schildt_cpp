#include <iostream>

using namespace std;

int main(){

    for(int count = 0; count <= 100; count++){
        cout << count << " ";
        if(count % 10 == 0 && count > 0) cout << endl;
    }

    return 0;
}