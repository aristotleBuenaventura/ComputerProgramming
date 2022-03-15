#include <iostream>

using namespace std;

class PinoyChef {
    public:
    void makeSpag() {
        cout << "The Pinoy chef makes spaghetti" << endl;
    }
};


class Chef: public PinoyChef {
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

class ItalianChef: public Chef {
    public:
    void makeSpag() {
        cout << "The italian chef makes spaghetti" << endl;
    }
    void makeSpecialDish() {
        cout << "The chef makes special dish2" << endl;
    }

};


int main()
{
    Chef boy;
    boy.makeSpecialDish();

    ItalianChef boy2;
    boy2.makeSpecialDish();

    return 0;
}
