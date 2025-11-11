#include <iostream>

using namespace std;

int main(){

    int x, y;
    cin >> x >> y;

    if(x == 0){
        if (y == 0)
            cout << "koordinatni pocetak" << endl;
        else if (y > 0)
            cout << "pozitivni deo y ose" << endl;
        else
            cout << "negativni deo y ose" << endl;

    }
    else if (y == 0){
        if (x > 0)
            cout << "pozitivni deo x ose" << endl;
        else
            cout << "negativni deo x ose" << endl;
    }
    else if (x > 0 && y > 0)
        cout << "1. kvadrant" << endl;
    else if (x > 0 && y < 0)
        cout << "4. kvadrant" << endl;
    else if (x < 0 && y > 0)
        cout << "2. kvadrant" << endl;
    else
        cout << "3. kvadrant" << endl;

    return 0;
}