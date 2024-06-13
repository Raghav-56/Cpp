#include <iostream>
#include <cstring>

using namespace std;


struct Person {
    char name[50];
    int age;
    float salary;

    void printDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
        cout << "Salary: $" << salary << endl;
    }

    void updateSalary(float newSalary) {
        salary = newSalary;
    }
};

int main() {
    int i;
    Person P[2];

    for (i = 0; i < 2; i++) {
        cout <<"Enter Name: "<< endl;
        cin >> P[i].name;
        cout <<"Enter Age: "<< endl;
        cin >> P[i].age;
        cout <<"Enter Salary: "<< endl;
        cin >> P[i].salary;
    }

    for (i=0; i<2; i++) {
        P[i].printDetails();
    }



    P[i].updateSalary(2900000);
    cout << "\nUpdated salary: $" << P[i].salary << endl;

    P[i].updateSalary(2200000);
    cout << "\nUpdated salary: $" << P[i].salary << endl;

    return 0;
}
