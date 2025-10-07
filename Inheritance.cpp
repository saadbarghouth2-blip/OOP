//
//// Q1
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Circle {
//protected:
//    double radius;
//    string color;
//
//public:
//    // Constructors
//    Circle() {
//        radius = 1.0;
//        color = "red";
//    }
//
//    Circle(double radius) {
//        this->radius = radius;
//        color = "red";
//    }
//
//    Circle(double radius, string color) {
//        this->radius = radius;
//        this->color = color;
//    }
//
//    // Getters
//    double get_radius() const {
//        return radius;
//    }
//
//    string get_color() const {
//        return color;
//    }
//
//    // Setters
//    void set_radius(double r) {
//        radius = r;
//    }
//
//    void set_color(string c) {
//        color = c;
//    }
//
//    // Calculate area of circle: π * r^2 (using π = 3.14)
//    double get_area() const {
//        return 3.14 * radius * radius;
//    }
//
//    void display_info() const {
//        cout << "Circle -> Radius: " << radius
//            << ", Color: " << color
//            << ", Area: " << get_area() << endl;
//    }
//};
//
//class Cylinder : public Circle {
//private:
//    double height;
//
//public:
//    // Constructors
//    Cylinder() {
//        height = 1.0;
//    }
//
//    Cylinder(double radius) : Circle(radius) {
//        height = 1.0;
//    }
//
//    Cylinder(double radius, double height) : Circle(radius) {
//        this->height = height;
//    }
//
//    Cylinder(double radius, double height, string color) : Circle(radius, color) {
//        this->height = height;
//    }
//
//    // Getter and setter
//    double get_height() const {
//        return height;
//    }
//
//    void set_height(double h) {
//        height = h;
//    }
//
//    // Volume: π * r^2 * h
//    double get_volume() const {
//        return 3.14159 * radius * radius * height;
//    }
//
//    // Surface Area: 2πr(r + h)
//    double get_area() const {
//        return 2 * 3.14159 * radius * (radius + height);
//    }
//
//    void display_info() const {
//        cout << "Cylinder -> Radius: " << radius
//            << ", Height: " << height
//            << ", Color: " << color
//            << ", Surface Area: " << get_area()
//            << ", Volume: " << get_volume() << endl;
//    }
//};
//
//int main() {
//    Circle c1(2.0, "blue");
//    c1.display_info();
//
//    Cylinder cyl1(2.0, 5.0, "green");
//    cyl1.display_info();
//
//}

//--------------------------------------------------------------------------
 
//Q2

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Customer {
//private:
//    int id;
//    string name;
//    int discount;  
//
//public:
//    // Constructor
//    Customer(int id, string name, int discount) {
//        this->id = id;
//        this->name = name;
//        this->discount = discount;
//    }
//
//    // Getters
//    int get_id() const {
//        return id;
//    }
//
//    string get_name() const {
//        return name;
//    }
//
//    int get_discount() const {
//        return discount;
//    }
//
//    // Setter
//    void set_discount(int d) {
//        discount = d;
//    }
//
//    void display_info() const {
//        cout << "Customer -> ID: " << id
//            << ", Name: " << name
//            << ", Discount: " << discount << "%" << endl;
//    }
//};
//
//class Invoice {
//private:
//    int id;
//    Customer customer;
//    double amount;
//
//public:
//    // Constructor
//    Invoice(int id, Customer customer, double amount)
//        : id(id), customer(customer), amount(amount) {
//    }
//
//    int get_id() const {
//        return id;
//    }
//
//    Customer get_customer() const {
//        return customer;
//    }
//
//    double get_amount() const {
//        return amount;
//    }
//
//    void set_amount(double a) {
//        amount = a;
//    }
//
//    double get_amount_after_discount() const {
//        double discount_percent = customer.get_discount();
//        return amount * (1 - discount_percent / 100.0);
//    }
//
//    void display_info() const {
//        cout << "Invoice -> ID: " << id
//            << ", Amount Before Discount: " << amount
//            << ", Amount After Discount: " << get_amount_after_discount() << endl;
//
//        customer.display_info();
//    }
//};
//
//int main() {
//    Customer cust(1, "Ali Hassan", 10); // 10% خصم
//    Invoice invoice(101, cust, 500.0);  // مبلغ الفاتورة 500
//
//    invoice.display_info();
//
//}

//--------------------------------------------------------------------------
//Q3

#include <iostream>
#include <string>
using namespace std;

//---------------------- Date Class ----------------------
class Date {
private:
    int day, month, year;

public:
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}

    void set_date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void set_day(int d) { day = d; }
    void set_month(int m) { month = m; }
    void set_year(int y) { year = y; }

    int get_day() const { return day; }
    int get_month() const { return month; }
    int get_year() const { return year; }

    void read_date(string label) {
        cout << "Enter " << label << " (day month year): ";
        cin >> day >> month >> year;
    }

    void display_date() const {
        cout << day << "/" << month << "/" << year;
    }
};

//---------------------- Person Class ----------------------
class Person {
protected:
    string first_name, last_name;
    int age, id;

public:
    Person(string fn = "", string ln = "", int a = 0, int i = 0)
        : first_name(fn), last_name(ln), age(a), id(i) {
    }

    string get_first_name() const { return first_name; }
    string get_last_name() const { return last_name; }

    virtual void display_info() const {
        cout << "ID: " << id << ", Name: " << first_name << " " << last_name << ", Age: " << age << endl;
    }
};

//---------------------- Doctor Class ----------------------
class Doctor : public Person {
private:
    string speciality;

public:
    Doctor(string fn = "", string ln = "", int i = 0, int a = 0, string spec = "")
        : Person(fn, ln, a, i), speciality(spec) {
    }

    void read_doctor() {
        cout << "Enter Doctor Info:\n";
        cout << "ID: "; cin >> id;
        cout << "First Name: "; cin >> first_name;
        cout << "Last Name: "; cin >> last_name;
        cout << "Age: "; cin >> age;
        cout << "Speciality: "; cin.ignore(); getline(cin, speciality);
    }

    void set_speciality(string spec) { speciality = spec; }
    string get_speciality() const { return speciality; }

    void display_info() const override {
        cout << "Doctor -> ";
        Person::display_info();
        cout << "Speciality: " << speciality << endl;
    }
};

//---------------------- Patient Class ----------------------
class Patient : public Person {
private:
    Date dob, admit_date, leave_date;
    Doctor physician;

public:
    Patient(string fn = "", string ln = "", int i = 0, int a = 0,
        Date dob = {}, Date admit = {}, Date leave = {}, Doctor doc = {})
        : Person(fn, ln, a, i), dob(dob), admit_date(admit), leave_date(leave), physician(doc) {
    }

    void read_patient() {
        cout << "\nEnter Patient Info:\n";
        cout << "ID: "; cin >> id;
        cout << "First Name: "; cin >> first_name;
        cout << "Last Name: "; cin >> last_name;
        cout << "Age: "; cin >> age;

        dob.read_date("Date of Birth");
        admit_date.read_date("Admit Date");
        leave_date.read_date("Leave Date");
    }

    void set_dob(Date d) { dob = d; }
    Date get_dob() const { return dob; }

    void set_admit_date(Date d) { admit_date = d; }
    Date get_admit_date() const { return admit_date; }

    void set_leave_date(Date d) { leave_date = d; }
    Date get_leave_date() const { return leave_date; }

    void set_physician(Doctor doc) { physician = doc; }
    Doctor get_physician() const { return physician; }

    void display_info() const override {
        cout << "\n--- Patient Info ---\n";
        Person::display_info();
        cout << "Date of Birth: "; dob.display_date(); cout << endl;
        cout << "Admit Date: "; admit_date.display_date(); cout << endl;
        cout << "Leave Date: "; leave_date.display_date(); cout << endl;
        physician.display_info();
    }
};

//---------------------- Main ----------------------
int main() {
    Doctor doc;
    doc.read_doctor();

    Patient pat;
    pat.read_patient();
    pat.set_physician(doc);

    pat.display_info();

    return 0;
}


//-------------------------------------------------------

//  Inheritance vs Composition:

//  Inheritance (is-a relationship):
//    - One class inherits from another.
//    - Reuse and extend the functionality of the base class.
//    - Example: A Dog is an Animal.

//class Animal {
//public:
//    void speak() {
//        cout << "Animal speaks" << endl;
//    }
//};
//
//class Dog : public Animal {
//public:
//    void bark() {
//        cout << "Dog barks" << endl;
//    }
//};

//  Composition (has-a relationship):
//    - One class contains an object of another class.
//    - Builds complex types using simpler components.
//    - Example: A Car has an Engine.

//class Engine {
//public:
//    void start() {
//        cout << "Engine started" << endl;
//    }
//};
//
//class Car {
//private:
//    Engine engine;
//
//public:
//    void start() {
//        engine.start();
//        cout << "Car is running" << endl;
//    }
//};
