## Bug Report: Incorrect Operator Usage in Copy Constructor Not Flagged

### Description

I have encountered a situation where the compiler does not report an incorrect operator usage in the copy constructor. Specifically, using the subtraction operator (`-`) where assignment (`=`) should be used does not result in an error or warning.

### Code Example

```cpp
#include <iostream>
using namespace std;

class Employee {
private:
    int salary;

public:
    string name;
    string dept;
    string Country;
    int contact_info;

    // Friend function declaration
    friend void fun(Employee e);

    // Setter
    void set(int salary) {
        this->salary = salary;
    }

    // Default constructor
    Employee() {
        cout << "Hello from default constructor" << endl;
    }

    // Parametrized constructor
    Employee(string name, string city, string dept, int salary, int contact_info) {
        cout << "Hey from parametrized constructor" << endl;
        this->Country = city;
        this->name = name;
        this->dept = dept;
        this->salary = salary;
        this->contact_info = contact_info;
    }

    // Custom copy constructor with a logical error
    Employee(Employee &orgobj) {
        cout << "Hey from copy constructor" << endl;
        this->contact_info = orgobj.contact_info;
        this->salary - orgobj.salary;  // Incorrect operator used here
    }

    // Print info
    void printinfo()  {
        cout << "Salary: " << salary << endl;
    }
};

// Friend function definition
void fun(Employee e) {
    cout << "Friend function" << endl;
    cout << e.salary << " " << endl;  // Expectation: should print the correct salary
}

int main() {
    Employee e1("name", "INDIA", "Testing", 70000, 1234);
    // e1.printinfo();

    Employee e2(e1); // Invokes copy constructor
    e2.printinfo();  // Prints info using the faulty copy constructor
    fun(e2);         // Prints salary using the friend function

    return 0;
}

```
### Expected Behavior
The compiler should issue a warning or error when the subtraction operator is used where assignment is expected.

### Actual Behavior
The code compiles and runs without errors, but the output is incorrect due to the logical error in the copy constructor.

### Environment
- Compiler: [GCC/Clang/MSVC/etc.]
- Version: [Version number]
- OS: [Operating System and version]

### Impact
This issue can lead to subtle bugs where logical errors are not caught by the compiler, resulting in unexpected behavior and incorrect program output.

