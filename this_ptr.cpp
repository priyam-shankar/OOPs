#include<iostream>
using namespace std;

class Teacher {
    private:
        double salary;
    public:
        string name;
        string dept;
        string subject;

        //non parameterized constructor 
        Teacher() {
            dept = "Computer Science";
        }
        
        Teacher(string name, string dept, string subject, double salary) {
            this->name = name;
            this->dept = dept;
           this-> subject = subject;
            this -> salary = salary;
        }

        void showSalary(double s) {
            salary = s;
        }
        void printSalary() {
            cout <<"salary is: " << salary <<endl;
        }
};
int main() {
    Teacher t1("Priyam Shankar", "Computer Science", "C++", 50000);
    cout <<  t1.name << endl;
    cout <<  t1.dept <<endl;
    cout <<  t1.subject << endl;
    t1.printSalary();
}