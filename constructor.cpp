#include<iostream>
using namespace std;

class Teacher {

    private:
        double salary;
    
    public:
        //Constructor
        // always declare to public class because internally it called by objection creation which is in main function
        //non parametirzed constructor
        Teacher() {  // and it is a special function which automatically call ==> at object creation we didn't write code to call it 
            cout << "Hi I am Constructor\n";
            dept = "Computer Science";  // ==> used for initilastion ==> means at object creation we initiliase our dept value to cse
        }

        //parameterized constructor
        Teacher(string n, string d, string s, double sal) {
            name = n;
            dept = d;
            subject = s;
            salary = sal;
        }
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
        void getInfo() {
         cout << "name: " <<name << endl;
         cout<< "dept: " <<dept <<endl;
         cout<< "salary is: " <<salary <<endl;
        }





};
void Teacher::changeDept(string newDept) {
    dept = newDept;

}
    class Car {
        public:

            // Data Member
            string brand;
            string color;
            int price;

            // Parameterized Constructor 
            Car(string b, string c, int p) {
                brand = b;
                color = c;
                price = p;
                cout << "Car object created: " << brand << ", " << color << ", " << price << endl;
            }

    };




int main() {
    Teacher t1("Priyam Shankar", "Computer Science", "C++", 50000);
    t1.getInfo();
    Car c1("BWM","Black",5000000);
    Car c2("Audi","White",4500000);
    cout<<"brand of c1 is: " << c1.brand<<endl;
    return 0;
}

// Note : in a single there is a multiple constructor given there parametrs are different different +> this phenomena in programming is called constructor overloading ==> and constructor overloading is an eg of polymorphism.