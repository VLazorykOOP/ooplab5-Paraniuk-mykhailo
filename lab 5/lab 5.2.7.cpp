#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Wheel {
private:
    int diameter; 

public:
    Wheel(int t_diameter) : diameter(t_diameter) {}

    void print() {
        cout << "Діаметр колеса: " << diameter << " сантиметрів" << endl;
    }
};

class Bicycle{
private:
    string model;
    vector<Wheel> wheels; 

public:
    Bicycle(string t_model, int wheel_diameter) : model(t_model), wheels(2, Wheel(wheel_diameter)) {}

    void print() {
        cout << "Модель велосипеда: " << model << endl;
        cout << "Колеса: " << endl;
        for (auto& wheel : wheels) {
            wheel.print();
        }
    }
};

class Car {
private:
    string brand;
    Wheel frontLeftWheel;
    Wheel frontRightWheel;
    Wheel rearLeftWheel;
    Wheel rearRightWheel;

public:
    Car(string t_brand, int wheel_diameter)
        : brand(t_brand),
        frontLeftWheel(wheel_diameter),
        frontRightWheel(wheel_diameter),
        rearLeftWheel(wheel_diameter),
        rearRightWheel(wheel_diameter) {}

    void print() {
        cout << "Марка машини: " << brand << endl;
        cout << "Переднє ліве колесо: ";
        frontLeftWheel.print();
        cout << "Переднє праве колесо: ";
        frontRightWheel.print();
        cout << "Заднє ліве колесо: ";
        rearLeftWheel.print();
        cout << "Заднє праве колесо:";
        rearRightWheel.print();
    }
};

int main() {
    setlocale(LC_CTYPE, "ukr");

    Bicycle bicycle("Горний велосипед", 66);
    cout << "Параметри велосипеда:" << endl;
    bicycle.print();
    

    cout << endl;

    Car car("Toyota", 40);
    cout << "Параметри машини:" << endl;
    car.print();

    return 0;
}