// ----------------------------
// Question 1: OOP Concepts
// ----------------------------

// 1- Encapsulation
// - Keep variables and functions together in one class.
// - Make variables private and use public functions to access them.
// - This protects the data from outside changes.

//#include <iostream>
//using namespace std;
//
//class Person {
//private:
//    int age; // private variable
//
//public:
//    void setAge(int a) {
//        if (a > 0) age = a;
//    }
//
//    int getAge() {
//        return age;
//    }
//};
//
//// -----------------------------------------------------
//
//// 2- Inheritance
//// - One class takes code from another class.
//// - The child class uses variables and functions from the parent class.
//// - Helps to reuse code and save time.
//
//class Animal {
//public:
//    void eat() {
//        cout << "Animal is eating" << endl;
//    }
//};
//
//class Dog : public Animal {
//public:
//    void bark() {
//        cout << "Dog is barking" << endl;
//    }
//};
//
//// -----------------------------------------------------
//
//// 3- Polymorphism
//// - Same function name, but works in different ways.
//// - Two types:
////   1. Overloading: same name, different parameters.
////   2. Overriding: child class changes the function from the parent.
//
//class Printer {
//public:
//    void show(int a) {
//        cout << "Integer: " << a << endl;
//    }
//
//    void show(string s) {
//        cout << "String: " << s << endl;
//    }
//};
//
//class Animal2 {
//public:
//    void sound() {
//        cout << "Animal sound" << endl;
//    }
//};
//
//class Cat : public Animal2 {
//public:
//    void sound() {
//        cout << "Meow" << endl;
//    }
//};
//
//// -----------------------------------------------------
//
//// 4- Abstraction
//// - Hide complex code and show only important things.
//// - Use abstract classes or interfaces.
//// - The user uses the function without knowing how it works inside.
//
//class Shape {
//public:
//    virtual void draw() = 0; // pure virtual function
//};
//
//class Circle : public Shape {
//public:
//    void draw() {
//        cout << "Drawing a Circle" << endl;
//    }
//};
//
//// -----------------------------------------------------
//
//int main() {
//    // Test for Encapsulation
//    Person p;
//    p.setAge(22);
//    cout << "Age: " << p.getAge() << endl;
//
//    // Test for Inheritance
//    Dog d;
//    d.eat();  // from Animal
//    d.bark(); // own method
//
//    // Test for Overloading
//    Printer pr;
//    pr.show(100);
//    pr.show("Hello");
//
//    // Test for Overriding
//    Cat c;
//    c.sound(); // Meow
//
//    // Test for Abstraction
//    Circle circ;
//    circ.draw();
//
//    return 0;
//}
//
////------------------------------------------------------------------------------------------------------------------
//// 
//// ----------------------------
//// Question 2: Access Modifiers
//// ----------------------------
//
//// In C++, there are 3 main access modifiers:
//// 1. private
//// 2. protected
//// 3. public
//
//// ------------------------------
//// 1. private:
//// - Can only be accessed from inside the same class.
//// - Not accessible by child (derived) classes.
//// - Not accessible from outside the class.
//
//// ------------------------------
//// 2. protected:
//// - Can be accessed from inside the same class.
//// - Can also be accessed from derived (child) classes.
//// - Not accessible from outside the class.
//
//// ------------------------------
//// 3. public:
//// - Can be accessed from anywhere.
//// - Used for open access to functions or variables.
//
//
//#include <iostream>
//using namespace std;
//
//class Base {
//private:
//    int a = 1; // private: only inside Base
//
//protected:
//    int b = 2; // protected: inside Base and derived classes
//
//public:
//    int c = 3; // public: accessible from anywhere
//
//    void showData() {
//        // This function is inside the class, so it can access all:
//        cout << "Inside Base::showData()" << endl;
//        cout << "a: " << a << endl;
//        cout << "b: " << b << endl;
//        cout << "c: " << c << endl;
//    }
//};
//
//class Derived : public Base {
//public:
//    void accessBase() {
//        // cout << a;  Error: private can't be accessed
//        cout << "Inside Derived::accessBase()" << endl;
//        cout << "b: " << b << endl; //  protected → allowed
//        cout << "c: " << c << endl; //  public → allowed
//    }
//};
//
//int main() {
//    Base baseObj;
//
//    // Access from outside the class:
//    // cout << baseObj.a;  Error: private
//    // cout << baseObj.b;  Error: protected
//    cout << "Accessing public member from main(): " << baseObj.c << endl; // 
//
//    baseObj.showData(); // Allowed - public method
//
//    Derived d;
//    d.accessBase(); // Derived class accesses protected and public
//
//    return 0;
//}
////----------------------------------------------------------------------------------------------------
//// 
//// ----------------------------
//// Question 3: Exception Handling
//// ----------------------------
//
//// Exception handling is used to handle errors during program execution.
//// Instead of letting the program crash, we catch the error and handle it safely.
//
//// In C++, we use :
//// try :   to write the risky code (that might cause error)
//// throw : to throw an error when something goes wrong
//// catch : to catch and handle the error
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    int a = 10, b = 0;
//
//    try {
//        // This is the risky part: dividing by zero
//        if (b == 0) {
//            throw "Cannot divide by zero"; // we throw an exception (a string)
//        }
//
//        int result = a / b;
//        cout << "Result: " << result << endl;
//    }
//
//    catch (const char* msg) {
//        // This block will run if an exception is thrown
//        cout << "Error: " << msg << endl;
//    }
//
//    cout << "Program continues after exception handling." << endl;
//
//    return 0;
//}
//
////----------------------------------------------------------------------------------------------------
//
//// ----------------------------
//// Question 4: Templates
//// ----------------------------
//
//// Templates allow writing generic code.
//// Instead of writing the same function for int, float, double, etc.,
//// we can write one function that works for any data type.
//
//// We use the keyword: template <typename T>
//
//#include <iostream>
//using namespace std;
//
//// This is a generic function using template
//template <typename T>
//T add(T a, T b) {
//    return a + b;
//}
//
//int main() {
//    // We can use the same function with different data types
//    cout << "Add integers: " << add<int>(5, 3) << endl;        // 8
//    cout << "Add floats: " << add<float>(2.5, 3.5) << endl;    // 6.0
//    cout << "Add doubles: " << add<double>(1.1, 2.2) << endl;  // 3.3
//    cout << "Add strings: " << add<string>("Hi ", "there") << endl; // Hi there
//
//    return 0;
//}
////----------------------------------------------------------------------------------------------------
//
//// --------------------------------------------
//// Question 5: Overloading vs Overriding
//// --------------------------------------------
//
//// -----------
//// 1. Overloading:
//// -----------
//// - Happens inside the same class.
//// - Same function name, but different parameters (type or number).
//// - Happens at compile time (Static Polymorphism).
//
//#include <iostream>
//using namespace std;
//
//class Calculator {
//public:
//    int add(int a, int b) {
//        return a + b;
//    }
//
//    float add(float a, float b) {
//        return a + b;
//    }
//
//    int add(int a, int b, int c) {
//        return a + b + c;
//    }
//};
//
//// -----------
//// 2. Overriding:
//// -----------
//// - Happens between base and derived classes.
//// - Same function name **and same parameters**.
//// - The child class provides its own version of the function.
//// - Requires `virtual` keyword in the base class to work properly at runtime (Dynamic Polymorphism).
//
//class Animal {
//public:
//    virtual void makeSound() {
//        cout << "Animal makes a sound" << endl;
//    }
//};
//
//class Dog : public Animal {
//public:
//    void makeSound() override {
//        cout << "Dog barks" << endl;
//    }
//};
//
//int main() {
//    // ----- Overloading Example -----
//    Calculator calc;
//    cout << "Add 2 + 3: " << calc.add(2, 3) << endl;
//    cout << "Add 2.5 + 3.5: " << calc.add(2.5, 3.5f) << endl;
//    cout << "Add 1 + 2 + 3: " << calc.add(1, 2, 3) << endl;
//
//    // ----- Overriding Example -----
//    Animal* a;
//    Dog d;
//    a = &d;
//    a->makeSound(); // Calls Dog version because of virtual function
//
//    return 0;
//}
////----------------------------------------------------------------------------------------------------
//// ----------------------------
//// Question 6: UML Class Diagram
//// ----------------------------
//#include <iostream>
//using namespace std;
//
//// ----------------------------
//// Point2D Class
//// ----------------------------
//
//class Point2D {
//protected:
//    float x = 0;
//    float y = 0;
//
//public:
//    // Constructors
//    Point2D() {
//        x = 0;
//        y = 0;
//    }
//
//    Point2D(float x, float y) {
//        this->x = x;
//        this->y = y;
//    }
//
//    // Getter methods
//    float getX() { return x; }
//    float getY() { return y; }
//
//    // Setter methods
//    void setX(float x) { this->x = x; }
//    void setY(float y) { this->y = y; }
//
//    // Set both x and y
//    void setXY(float x, float y) {
//        this->x = x;
//        this->y = y;
//    }
//
//    // Return array of {x, y}
//    float* getXY() {
//        static float arr[2];
//        arr[0] = x;
//        arr[1] = y;
//        return arr;
//    }
//};
//
//// ----------------------------
//// Point3D Class (Inherits from Point2D)
//// ----------------------------
//
//class Point3D : public Point2D {
//protected:
//    float z = 0.0f;
//
//public:
//    // Constructors
//    Point3D() : Point2D() {
//        z = 0;
//    }
//
//    Point3D(float x, float y, float z) : Point2D(x, y) {
//        this->z = z;
//    }
//
//    // Getter method
//    float getZ() { return z; }
//
//    // Setter method
//    void setZ(float z) { this->z = z; }
//
//    // Set x, y, z together
//    void setXYZ(float x, float y, float z) {
//        setXY(x, y); // use parent method
//        this->z = z;
//    }
//
//    // Return array of {x, y, z}
//    float* getXYZ() {
//        static float arr[3];
//        arr[0] = x;
//        arr[1] = y;
//        arr[2] = z;
//        return arr;
//    }
//};
//
//int main() {
//    Point3D p(1.5, 2.5, 3.5);
//    float* coords = p.getXYZ();
//
//    cout << "Point3D Coordinates: ";
//    cout << coords[0] << ", " << coords[1] << ", " << coords[2] << endl;
//
//    return 0;
//}
