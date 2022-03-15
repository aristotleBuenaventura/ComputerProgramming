#include <iostream>

using namespace std;

class Chef {
public:
    void makeChicken() {
        cout << "The chef makes chicken" << endl;
    }
    void makeSalad() {
        cout << "The chef makes salad" << endl;
    }
    void makeSpecialDish() {
        cout << "The chef makes special dish" << endl;
    }
};


int main() {

    makeSpecialDish();

    return 0;
}
