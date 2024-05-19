#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Human {
private:
    string name;
    string surname;
    string job;

public:
    Human() {
        cout << "Введіть ім'я людини: ";
        getline(cin, name);

        cout << "Введіть прізвище людини: ";
        getline(cin, surname);

        cout << "Введіть роботу людини: ";
        getline(cin, job);
    }

    string get_job() { return job; }
    string get_name() { return name; }
    string get_surname() { return surname; }

    void display_info() {
        cout << "Інформація про людину: " << endl;
        cout << "Ім'я: " << name << endl;
        cout << "Прізвище: " << surname << endl;
        cout << "Робота: " << job << endl << endl;
    }
};


class Teacher {
private:
    string name;
    string surname;
    string job;

public:
    Teacher() {}

    void transfer_data(Human& human) {
        if (human.get_job() == "вчитель") {
            name = human.get_name();
            surname = human.get_surname();
            job = human.get_job();
        }
    }

    void display_info2() {
        if (!name.empty() && !surname.empty() && !job.empty()) {
            cout << "------------------------------------------------------" << endl;
            cout << "Інформація про вчителя: " << endl;
            cout << "Ім'я: " << name << endl;
            cout << "Прізвище: " << surname << endl;
            cout << "Робота: " << job << endl << endl;
        }
    }
};

int main() {
    setlocale(LC_CTYPE, "ukr");

    cout << "Людина 1: " << endl;
    Human human1;
    cout << endl;  human1.display_info();

    cout << "Людина 2: " << endl;
    Human human2;
    cout << endl;  human2.display_info();

    cout << "Людина 3: " << endl;
    Human human3;
    cout << endl;  human3.display_info();

    cout << "Людина 4: " << endl;
    Human human4;
    cout << endl;  human4.display_info();

    Teacher teacher;
    teacher.transfer_data(human1);
    teacher.display_info2();

    Teacher teacher2;
    teacher2.transfer_data(human2);
    teacher2.display_info2();

    Teacher teacher3;
    teacher3.transfer_data(human3);
    teacher3.display_info2();

    Teacher teacher4;
    teacher4.transfer_data(human4);
    teacher4.display_info2();

    return 0;
}