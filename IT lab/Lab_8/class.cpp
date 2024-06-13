#include <iostream>
using namespace std;

class Emp {
private:
    int empid;
    char empname[20];
    int bslry;
    int alwnce;

public:
    // Default constructor to initialize basic salary
    Emp() {
        bslry = 1000;
    }

    // Function to get Emp data from the user
    void GetData() {
        cout << "\nEnter the Emp ID: "<<endl;
        cin >> empid;
        cout << "\nEnter the Emp name: "<<endl;
        cin >> empname;
        cout << "\nEnter the Emp Allowance: "<<endl;
        cin >> alwnce;
    }

    // Function to calculate net salary
    int NtSlry() {
        return bslry + alwnce;
    }

    // Function to display Emp details
    void D() {
        cout << endl << "EmpID\tName\tbslry\talwnce" << endl;
        cout << empid << "\t" << empname << "\t" << bslry << "\t" << alwnce << endl;
    }
};

int main() {
    const int numEmp = 3;
    Emp Emps[numEmp];

    cout << "Enter Employee information: " << endl;
    for (int i = 0; i < numEmp; ++i) {
        Emps[i].GetData();
    }

    cout << endl << "Employee information:" << endl;
    for (int i = 0; i < numEmp; ++i) {
        Emps[i].D();
    }

    cout << endl << "Net salaries:" << endl;
    for (int i = 0; i < numEmp; ++i) {
        cout << "Emp " << i + 1 << ": $" << Emps[i].NtSlry() << endl;
    }

    return 0;
}
