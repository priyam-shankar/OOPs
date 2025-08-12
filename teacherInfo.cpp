#include<iostream>
using namespace std;

class Teacher {

    private:
        double salary;
    
    public:
        // properties/attributes/data members
        string name;
        string dept;
        string subject;
        
        // Member function
        void showSalary(double s) {
            salary = s;
        }
        void printSalary() {
            cout <<"salary is: " << salary <<endl;
            
        }
        void changeDept(string newDept);

};
void Teacher::changeDept(string newDept) {
    dept = newDept;
}

int main() {
    Teacher t1;
    t1.name = "Priyam Shankar\n";
    t1.dept = "Computer Science\n";
    t1.subject = "OOPS\n";
    cout << t1.name;
    cout << t1.dept;
    cout<< t1.subject;
    t1.changeDept("Electronics");
    cout<< t1.dept << endl;
    t1.showSalary(80000);
    t1.printSalary();
    
    return 0;
}