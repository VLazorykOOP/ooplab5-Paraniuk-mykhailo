#include <iostream>
#include <string>
using namespace std;

class Liquid {
public:
    string name;
    double density; 

    Liquid(string t_name, double t_density) : name(t_name), density(t_density) {}

    void print() {
        cout << "Назва рідини: " << name << endl;
        cout << "Щільність рідини: " << density << endl;
    }

    ~Liquid() {}
};

class Alcohol : public Liquid {
private:
    double strength;

public:
    Alcohol(string t_name, double t_density, double t_strength) : Liquid(t_name, t_density), strength(t_strength) {}

    void print() {
        Liquid::print();
        cout << "Міцність рідини: " << strength << endl << endl;
    }

    ~Alcohol() {}
};

int main() {
    setlocale(LC_CTYPE, "ukr");

    cout << "Рідини: " << endl;
    Liquid liquid1("вода", 1);
    liquid1.print();
    cout << endl;

    Liquid liquid2("олія", 0.9);
    liquid2.print();
    cout << endl;

    cout << "Cпиртні напої: " << endl;
    Alcohol alcohol1("пиво", 1.1, 8.8);
    alcohol1.print();

    Alcohol alcohol2("вино", 1.1, 12.5);
    alcohol2.print();

    return 0;
}