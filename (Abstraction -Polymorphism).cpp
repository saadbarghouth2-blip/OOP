//
//#include <iostream>
//using namespace std;
//
//class Animal {
//public:
//    virtual void showType() = 0;
//};
//
//class Dolphin : public Animal {
//public:
//    void showType()  {
//        cout << "I am a Dolphin." << endl;
//    }
//};
//
//
//class Cat : public Animal {
//public:
//    void showType()  {
//        cout << "I am a Cat." << endl;
//    }
//};
//
//class Dog : public Animal {
//public:
//    void showType()  {
//        cout << "I am a Dog." << endl;
//    }
//};
////----------------------------------------------------------------------
//int main() {
//    
//    Dolphin d;
//    Cat c;
//    Dog g;
//
//    d.showType();  
//    c.showType();
//    g.showType();
//}
//
//

//----------------------------------------------------------------------


//#include <iostream>
//using namespace std;
//
//class Animal {
//public:
//    virtual void showType() = 0; 
//};
//
//class Dolphin : public Animal {
//public:
//    void showType() override {
//        cout << "I am a Dolphin." << endl;
//    }
//};
//
//class Cat : public Animal {
//public:
//    void showType() override {
//        cout << "I am a Cat." << endl;
//    }
//};
//
//class Dog : public Animal {
//public:
//    void showType() override {
//        cout << "I am a Dog." << endl;
//    }
//};
//
//int main() {
//    Animal* a1 = new Dolphin();
//    Animal* a2 = new Cat();
//    Animal* a3 = new Dog();
//
//    a1->showType();
//    a2->showType();
//    a3->showType();
//
//    delete a1;
//    delete a2;
//    delete a3;
//
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//class Student {
//private:
//    string name;      // attribute
//    int grade;        // attribute
//
//public:
//    void setData(string n, int g) { // method
//        name = n;
//        grade = g;
//    }
//
//    void display() { // method
//        cout << "Name: " << name << ", Grade: " << grade << endl;
//    }
//};
//
//int main() {
//    Student s1;
//    s1.setData("Ali", 90);
//    s1.display();
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Student {
//protected:
//    string name;
//    int grade;
//
//public:
//    void setData(string n, int g) {
//        name = n;
//        grade = g;
//    }
//};
//
//class UniversityStudent : public Student { // Inheritance
//private:
//    string university;
//
//public:
//    void setUniversity(string u) {
//        university = u;
//    }
//
//    void display() {
//        cout << "Name: " << name << ", Grade: " << grade << ", University: " << university << endl;
//    }
//};
//
//int main() {
//    UniversityStudent u1;
//    u1.setData("SAAD", 85);
//    u1.setUniversity("Cairo University");
//    u1.display();
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//    virtual void display() { // virtual 
//        cout << "I am a person." << endl;
//    }
//};
//
//class Student : public Person {
//public:
//    void display() { // Override
//        cout << "I am a student." << endl;
//    }
//};
//
//int main() {
//    Person p1;
//    Student s1;
//
//    Person* ptr;
//    ptr = &p1;
//    ptr->display(); // I am a person.
//
//    ptr = &s1;
//    ptr->display(); // I am a student.
//
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//class Shape {
//public:
//    virtual void area() = 0; // Pure virtual function
//};
//
//class Circle : public Shape {
//public:
//    void area() {
//        cout << "Area = π * r * r" << endl;
//    }
//};
//
//int main() {
//    Circle c1;
//    c1.area();
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//// 🟥 الكلاس الأساس Person يمثل الشخص (Abstraction)
//class Person {
//protected:
//    string name;
//    int age;
//
//public:
//    // Constructor لتهيئة الاسم والسن عند إنشاء الكائن
//    Person(string n, int a) {
//        name = n;
//        age = a;
//    }
//
//    // دالة عرض البيانات (Virtual لتفعيل Polymorphism)
//    virtual void display() {
//        cout << "Name: " << name << ", Age: " << age << endl;
//    }
//};
//
//// 🟩 كلاس Student يرث من Person (Inheritance)
//class Student : public Person {
//private:
//    int grade; // هنا نستخدم Encapsulation لجعل الدرجة خاصة
//
//public:
//    // Constructor لتهيئة البيانات باستخدام Constructor الأب
//    Student(string n, int a, int g) : Person(n, a) {
//        setGrade(g); // نستخدم الدالة الآمنة لضبط الدرجة
//    }
//
//    // دالة لضبط الدرجة مع فحص القيم (Encapsulation)
//    void setGrade(int g) {
//        if (g >= 0 && g <= 100)
//            grade = g;
//        else
//            cout << "Invalid grade. Grade must be between 0 and 100." << endl;
//    }
//
//    // دالة لاسترجاع الدرجة (Encapsulation)
//    int getGrade() {
//        return grade;
//    }
//
//    // دالة عرض البيانات (Override لدالة Person لتفعيل Polymorphism)
//    void display() {
//        cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
//    }
//};
//
//int main() {
//    Person p1("Ahmed", 40);
//    p1.display(); // سيعرض: Name: Ahmed, Age: 40
//
//    Student s1("Sara", 20, 95);
//    s1.display(); // سيعرض: Name: Sara, Age: 20, Grade: 95
//
//    // تجربة Polymorphism باستخدام مؤشر من نوع Person*
//    Person* ptr;
//    ptr = &s1; // المؤشر يشير إلى كائن من Student
//
//    ptr->display(); // سيعرض: Name: Sara, Age: 20, Grade: 95 باستخدام دالة Student
//
//    return 0;
//}


//#include <iostream>
//#include <string>
//using namespace std;
//
//// ==================== PARENT CLASS ====================
//class Payment_method {
//protected:
//    // ===== ATTRIBUTES =====
//    string account_number;
//    string transaction_history[5];
//    double transaction_limit = 10000.0;
//    string currency;
//    int transaction_count = 0; 
//
//public:
//    // ===== CONSTRUCTOR =====
//    Payment_method(string account_number, string currency) {
//        this->account_number = account_number;
//        this->currency = currency;
//    }
//
//    // ===== PURE VIRTUAL METHOD =====
//    virtual void pay(double amount) = 0;
//
//    // ===== VIRTUAL METHOD =====
//    virtual bool validate_payment_details() {
//        return true; 
//    }
//
//    // ===== VIRTUAL METHOD =====
//    virtual double calculate_transaction_fee(double amount) {
//        return amount * 0.02; // %نسبة افتراضية 2
//    }
//
//    // ===== METHOD: ADD TRANSACTION =====
//    void add_transaction(string transaction) {
//        // إضافة المعاملة في البداية وتحريك الباقي
//        for (int i = 4; i > 0; i--) {
//            transaction_history[i] = transaction_history[i - 1];
//        }
//        transaction_history[0] = transaction;
//        if (transaction_count < 5) transaction_count++;
//    }
//
//    // ===== METHOD: PRINT TRANSACTION HISTORY =====
//    void print_transaction_history() {
//        cout << "\n=== Transaction History ===\n";
//        for (int i = 0; i < transaction_count; i++) {
//            cout << i + 1 << ". " << transaction_history[i] << endl;
//        }
//    }
//};
//
//// ==================== CHILD CLASS: CREDIT CARD ====================
//class Credit_card : public Payment_method {
//private:
//    // ===== ATTRIBUTE =====
//    string cvv;
//
//public:
//    // ===== CONSTRUCTOR =====
//    Credit_card(string account_number, string currency, string cvv)
//        : Payment_method(account_number, currency) {
//        this->cvv = cvv;
//    }
//
//    // ===== OVERRIDDEN METHOD: VALIDATE PAYMENT DETAILS =====
//    bool validate_payment_details() override {
//        if (cvv.length() == 3) {
//            return true;
//        }
//        else {
//            cout << "Invalid CVV" << endl;
//            return false;
//        }
//    }
//
//    // ===== OVERRIDDEN METHOD: CALCULATE TRANSACTION FEE =====
//    double calculate_transaction_fee(double amount) override {
//        return amount * 0.03; // %نسبة 3
//    }
//
//    // ===== OVERRIDDEN METHOD: PAY =====
//    void pay(double amount) override {
//        if (!validate_payment_details()) return;
//
//        cout << "Processing payment using a credit card..." << endl;
//        double fee = calculate_transaction_fee(amount);
//        double total = amount + fee;
//        cout << "Total after 3% fee: " << total << " " << currency << endl;
//
//        add_transaction("Credit card Payment: " + to_string(amount) + " " + currency);
//    }
//};
//
//// ==================== CHILD CLASS: DEBIT CARD ====================
//class Debit_card : public Payment_method {
//private:
//    // ===== ATTRIBUTE =====
//    string pin;
//
//public:
//    // ===== CONSTRUCTOR =====
//    Debit_card(string account_number, string currency, string pin)
//        : Payment_method(account_number, currency) {
//        this->pin = pin;
//    }
//
//    // ===== OVERRIDDEN METHOD: VALIDATE PAYMENT DETAILS =====
//    bool validate_payment_details() override {
//        if (pin.length() == 4) {
//            return true;
//        }
//        else {
//            cout << "Invalid PIN" << endl;
//            return false;
//        }
//    }
//
//    // ===== OVERRIDDEN METHOD: CALCULATE TRANSACTION FEE =====
//    double calculate_transaction_fee(double amount) override {
//        return amount * 0.01; // نسبة 1%
//    }
//
//    // ===== OVERRIDDEN METHOD: PAY =====
//    void pay(double amount) override {
//        if (!validate_payment_details()) return;
//
//        cout << "Processing payment using a debit card..." << endl;
//        double fee = calculate_transaction_fee(amount);
//        double total = amount + fee;
//        cout << "Total after 1% fee: " << total << " " << currency << endl;
//
//        add_transaction("Debit card Payment: " + to_string(amount) + " " + currency);
//    }
//};
//
//// ==================== MAIN FUNCTION ====================
//int main() {
//    cout << "Select payment method:\n1. Credit Card\n2. Debit Card\nChoice: ";
//    int choice;
//    cin >> choice;
//
//    // ===== INPUTS =====
//    string account_number, currency, extra_info;
//    double amount;
//
//    cout << "Enter Account Number: ";
//    cin >> account_number;
//
//    cout << "Enter Currency: ";
//    cin >> currency;
//
//    Payment_method* payment = nullptr;
//
//    if (choice == 1) {
//        cout << "Enter CVV: ";
//        cin >> extra_info;
//        payment = new Credit_card(account_number, currency, extra_info);
//    }
//    else if (choice == 2) {
//        cout << "Enter PIN: ";
//        cin >> extra_info;
//        payment = new Debit_card(account_number, currency, extra_info);
//    }
//    else {
//        cout << "Invalid choice.\n";
//        return 0;
//    }
//
//    cout << "Enter payment amount: ";
//    cin >> amount;
//
//    // ===== CALL PAY METHOD =====
//    payment->pay(amount);
//
//    // ===== DISPLAY TRANSACTION HISTORY =====
//    payment->print_transaction_history();
//
//    delete payment;
//    return 0;
//}

//---------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

// ===================== PARENT CLASS: VEHICLE =====================
class Vehicle {
protected:
    // ===== ATTRIBUTE =====
    string model;
    string registration_number;
    int speed;                  // km/hour
    double fuel_capacity;       // liters
    double fuel_consumption;    // liter/km

public:
    // ===== CONSTRUCTOR =====
    Vehicle(string model, string registration_number, int speed,
        double fuel_capacity, double fuel_consumption) {
        this->model = model;
        this->registration_number = registration_number;
        this->speed = speed;
        this->fuel_capacity = fuel_capacity;
        this->fuel_consumption = fuel_consumption;
    }

    // ===== VIRTUAL METHOD =====
    virtual void display_info() = 0; // Pure virtual to enforce override
};

// ===================== CHILD CLASS: TRUCK =====================
class Truck : public Vehicle {
private:
    // ===== ATTRIBUTE =====
    float cargo_weight_limit;   // kilograms

public:
    // ===== CONSTRUCTOR =====
    Truck(string model, string registration_number, int speed,
        double fuel_capacity, double fuel_consumption, float cargo_weight_limit)
        : Vehicle(model, registration_number, speed, fuel_capacity, fuel_consumption) {
        this->cargo_weight_limit = cargo_weight_limit;
    }

    // ===== SETTER =====
    void set_cargo_weight_limit(float weight) {
        cargo_weight_limit = weight;
    }

    // ===== GETTER =====
    float get_cargo_weight_limit() {
        return cargo_weight_limit;
    }

    // ===== OVERRIDDEN METHOD =====
    void display_info() override {
        cout << "\n=== Truck Information ===" << endl;
        cout << "Model: " << model << endl;
        cout << "Registration Number: " << registration_number << endl;
        cout << "Speed: " << speed << " km/hour" << endl;
        cout << "Fuel Capacity: " << fuel_capacity << " liters" << endl;
        cout << "Fuel Consumption: " << fuel_consumption << " liter/km" << endl;
        cout << "Cargo Weight Limit: " << cargo_weight_limit << " kg" << endl;
    }
};

// ===================== CHILD CLASS: BUS =====================
class Bus : public Vehicle {
private:
    // ===== ATTRIBUTE =====
    int num_passengers;

public:
    // ===== CONSTRUCTOR =====
    Bus(string model, string registration_number, int speed,
        double fuel_capacity, double fuel_consumption, int num_passengers)
        : Vehicle(model, registration_number, speed, fuel_capacity, fuel_consumption) {
        this->num_passengers = num_passengers;
    }

    // ===== SETTER =====
    void set_num_passengers(int num) {
        num_passengers = num;
    }

    // ===== GETTER =====
    int get_num_passengers() {
        return num_passengers;
    }

    // ===== OVERRIDDEN METHOD =====
    void display_info() override {
        cout << "\n=== Bus Information ===" << endl;
        cout << "Model: " << model << endl;
        cout << "Registration Number: " << registration_number << endl;
        cout << "Speed: " << speed << " km/hour" << endl;
        cout << "Fuel Capacity: " << fuel_capacity << " liters" << endl;
        cout << "Fuel Consumption: " << fuel_consumption << " liter/km" << endl;
        cout << "Number of Passengers: " << num_passengers << endl;
    }
};

// ===================== MAIN FUNCTION =====================
int main() {
    cout << "Select Vehicle Type:\n1. Truck\n2. Bus\nChoice: ";
    int choice;
    cin >> choice;

    string model, reg_num;
    int speed;
    double fuel_cap, fuel_cons;

    // ===== INPUT COMMON VEHICLE DETAILS =====
    cout << "Enter Model: ";
    cin >> model;

    cout << "Enter Registration Number: ";
    cin >> reg_num;

    cout << "Enter Speed (km/hour): ";
    cin >> speed;

    cout << "Enter Fuel Capacity (liters): ";
    cin >> fuel_cap;

    cout << "Enter Fuel Consumption (liter/km): ";
    cin >> fuel_cons;

    Vehicle* vehicle = nullptr;

    if (choice == 1) {
        // Truck specific
        float cargo_weight;
        cout << "Enter Cargo Weight Limit (kg): ";
        cin >> cargo_weight;

        vehicle = new Truck(model, reg_num, speed, fuel_cap, fuel_cons, cargo_weight);

    }
    else if (choice == 2) {
        // Bus specific
        int passengers;
        cout << "Enter Number of Passengers: ";
        cin >> passengers;

        vehicle = new Bus(model, reg_num, speed, fuel_cap, fuel_cons, passengers);

    }
    else {
        cout << "Invalid Choice. Exiting...\n";
        return 0;
    }

    // ===== DISPLAY VEHICLE INFO =====
    vehicle->display_info();

    delete vehicle;
    return 0;
}
