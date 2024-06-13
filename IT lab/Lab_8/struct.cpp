#include <iostream>
#include <cstring>

using namespace std;


struct Person {
    char name[50];
    char name2[50];
    int age;
    float salary;

    void printDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
        cout << "Salary: " << salary << endl;
    }

    void updSlry(float newSalary) {
        salary = newSalary;
    }
}P1;

int main() {
    Person P2,P3;

    strcpy(P1.name, "Sam");
    strcpy(P1.name2, "Han");
    P1.age = 27;
    P1.salary = 2500000;

    strcpy(P2.name, "Ram");
    strcpy(P2.name2, "Kumar");
    P2.age = 30;
    P2.salary = 2000000;

    P3=P2;


    cout << "\nDetails of P1:" << endl;
    P1.printDetails();

    cout << "\nDetails of P2:" << endl;
    P2.printDetails();

    cout << "\nDetails of P3:" << endl;
    P3.printDetails();

    P2.updSlry(2900000);
    cout << "\nUpdated salary: " << P2.salary << endl;

    P3.updSlry(2200000);
    cout << "\nUpdated salary: " << P3.salary << endl;

    return 0;
}
