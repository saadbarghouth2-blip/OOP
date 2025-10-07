

// Q1

#include <iostream>
#include <string>
using namespace std;

//class Circle {
//private:
// //Attribute
//    double radius;
//    string color;
//
//public:
//    // Default constructor
//    Circle() {
//        this->radius = 1.0;
//        this->color = "red";
//    }
//
//    // Constructor ( radius , color )
//    Circle(double radius, string color) {
//        this->radius = radius;
//        this->color = color;
//    }
//
//    // Setter علشان نغير نصف القطر
//    void set_radius(double radius) {
//        this->radius = radius;
//    }
//
//    // Setter علشان يبقي في امكانية نقدر نغير اللون
//    void set_color(string color) {
//        this->color = color;
//    }
//
//    // Getter علشان نرجع نصف القطر
//    double get_radius() {
//        return this->radius;
//    }
//
//    // Getter علشان نرجع اللون
//    string get_color() {
//        return this->color;
//    }
//
//    // Method دالة بتحسب المساحة 
//    double get_area() {
//        double π = 3.14159;
//        return π * this->radius * this->radius;
//    }
//};
//
//int main() {
//    double r;
//    string c;
//
//    cout << "Enter the radius of the circle: ";
//    cin >> r;
//
//    cout << "Enter the color of the circle: ";
//    cin >> c;
//
//    Circle myCircle;
//    myCircle.set_radius(r);
//    myCircle.set_color(c);
//
//    cout << "\n--- Circle Info ---\n";
//    cout << "Radius: " << myCircle.get_radius() << endl;
//    cout << "Color: " << myCircle.get_color() << endl;
//    cout << "Area: " << myCircle.get_area() << endl;
//
//}

//------------------------------------------------------------

// Q2

//class Employee {
//private:
//    int id;
//    string firstName;
//    string lastName;
//    int salary;
//
//public:
//
//    // Default constructor
//    Employee() {
//        this->id = 0;
//        this->salary = 0;
//    }
//    // Constructor
//    Employee(int id, string firstName, string lastName, int salary) {
//        this->id = id;
//        this->firstName = firstName;
//        this->lastName = lastName;
//        this->salary = salary;
//    }
//
//    // Getter 
//    int get_ID() {
//        return this->id;
//    }
//
//    string get_first_name() {
//        return this->firstName;
//    }
//
//    string get_last_name() {
//        return this->lastName;
//    }
//
//    string get_name() {
//        return this->firstName + " " + this->lastName;
//    }
//
//    int get_salary() {
//        return this->salary;
//    }
//
//
//    int get_annual_salary() {
//        return this->salary * 12;
//    }
//
//    //Setters
//    void set_salary(int salary) {
//        this->salary = salary;
//    }
//
//    // Method
//    int raise_salary(int percent) {
//        this->salary += this->salary * percent / 100;
//        return this->salary;
//    }
//};
//
//int main() {
//   
//    int id, salary;
//    string first, last;
//
//    cout << "Enter employee ID: ";
//    cin >> id;
//
//    cout << "Enter first name: ";
//    cin >> first;
//
//    cout << "Enter last name: ";
//    cin >> last;
//
//    cout << "Enter monthly salary: ";
//    cin >> salary;
//
//   
//    Employee emp(id, first, last, salary);
//
//   
//    cout << "\n--- Employee Info ---\n";
//    cout << "ID: " << emp.get_ID() << endl;
//    cout << "Full Name: " << emp.get_name() << endl;
//    cout << "Monthly Salary: " << emp.get_salary() << endl;
//    cout << "Annual Salary: " << emp.get_annual_salary() << endl;
//
//    int percent;
//    cout << "\nEnter percent to raise salary: ";
//    cin >> percent;
//
//    int newSalary = emp.raise_salary(percent);
//    cout << "New Salary after raise: " << newSalary << endl;
//
//}


// Q3
//
class Account {
private:
    string id;
    string name;
    double balance;

public:
    // Default constructor
    Account() {
        this->balance = 0;
    }

    // Constructor 
    Account(string id, string name, double balance) {
        this->id = id;
        this->name = name;
        this->balance = balance;
    }

    // Getters
    string get_ID() const {
        return id;
    }

    string get_name() const {
        return name;
    }

    double get_balance() const {
        return balance;
    }

    // Methods
    double credit(double amount) {
        balance += amount;
        return balance;
    }

    double debit(double amount) {
        if (amount <= balance) {
            balance -= amount;
        }
        else {
            cout << "Amount exceeded balance" << endl;
        }
        return balance;
    }

    double transfer_to(Account& another, double amount) {
        if (amount <= balance) {
            balance -= amount;
            another.credit(amount);
        }
        else {
            cout << "Amount exceeded balance" << endl;
        }
        return balance;
    }

    void display_info() const {
        cout << "ID: " << id << "\nName: " << name << "\nBalance: " << balance << "\n";
    }
};
    
    int main() {
        string id1, name1;
        double balance1;

        cout << "Enter info for Account 1:\n";
        cout << "ID: ";
        cin >> id1;
        cout << "Name: ";
        cin >> name1;
        cout << "Initial balance: ";
        cin >> balance1;

        Account acc1(id1, name1, balance1);

        string id2, name2;
        double balance2;

        cout << "\nEnter info for Account 2:\n";
        cout << "ID: ";
        cin >> id2;
        cout << "Name: ";
        cin >> name2;
        cout << "Initial balance: ";
        cin >> balance2;

        Account acc2(id2, name2, balance2);

        double amount;

        // Credit to acc1
        cout << "\nEnter amount to credit to " << acc1.get_name() << ": ";
        cin >> amount;
        acc1.credit(amount);

        // Debit from acc1
        cout << "Enter amount to debit from " << acc1.get_name() << ": ";
        cin >> amount;
        acc1.debit(amount);

        // Transfer from acc1 to acc2
        cout << "Enter amount to transfer from " << acc1.get_name() << " to " << acc2.get_name() << ": ";
        cin >> amount;
        acc1.transfer_to(acc2, amount);

        //  final info
        cout << "\n--- Final Account Info ---\n";
        cout << "\nAccount 1:\n";
        acc1.display_info();
        cout << "\nAccount 2:\n";
        acc2.display_info();

        return 0;
    }



// Q4
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//class Time {
//private:
//    int hour;
//    int minute;
//    int second;
//
//public:
//    // Constructor
//    Time(int hour, int minute, int second) {
//        this->hour = hour;
//        this->minute = minute;
//        this->second = second;
//    }
//
//    // Getters
//    int get_hour() const { return hour; }
//    int get_minute() const { return minute; }
//    int get_second() const { return second; }
//
//    // Setters
//    void set_hour(int hour) { this->hour = hour; }
//    void set_minute(int minute) { this->minute = minute; }
//    void set_second(int second) { this->second = second; }
//    void set_time(int hour, int minute, int second) {
//        this->hour = hour;
//        this->minute = minute;
//        this->second = second;
//    }
//
//    // Method
//    // Add 1 second
//    Time next_second() {
//        second++;
//        if (second >= 60) {
//            second = 0;
//            minute++;
//        }
//        if (minute >= 60) {
//            minute = 0;
//            hour++;
//        }
//        if (hour >= 24) {
//            hour = 0;
//        }
//        return *this;
//    }
//
//    // Subtract 1 second
//    Time previous_second() {
//        second--;
//        if (second < 0) {
//            second = 59;
//            minute--;
//        }
//        if (minute < 0) {
//            minute = 59;
//            hour--;
//        }
//        if (hour < 0) {
//            hour = 23;
//        }
//        return *this;
//    }
//
//    // Display time in HH:MM:SS
//    Time show_time() const {
//        cout << setfill('0') << setw(2) << hour << ":"
//            << setw(2) << minute << ":"
//            << setw(2) << second << endl;
//        return *this;
//    }
//};
//
//int main() {
//    int h, m, s;
//
//    cout << "Enter time:\n";
//    cout << "Hour   : ";
//    cin >> h;
//    cout << "Minute : ";
//    cin >> m;
//    cout << "Second : ";
//    cin >> s;
//
//    Time t(h, m, s);
//
//    cout << "\nCurrent time: ";
//    t.show_time();
//
//    cout << "After one second: ";
//    t.next_second().show_time();
//
//    cout << "Previous second: ";
//    t.previous_second().show_time();
//
//}
//
