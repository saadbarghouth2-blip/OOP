//#include <iostream>
//using namespace std;
//// Attributes :
//class Student {
//  private: 
//    string name;
//    int grade;
//    string subject;
//    //setters: 
//    void setName(string name) {
//        this->name = name;
//    }
//    void setGrade(int grade) {
//        this->grade = grade;
//    }
//    void setSubject(string subject) {
//        this->subject = subject;
//    }
//    //Getter :
//    string getName() {
//        return this->name;
//    }
//    int getGrade() {
//        return this->grade;
//    }
//    string getSubject() {
//        return this->subject;
//    }
//    // Methods:
//    void printinfo() {
//        cout << "Enter Your Name : " << name << endl;
//        cout << "Enter Your grade : " << grade << endl;
//        cout << "Enter Your subject : " << subject << endl;
//
//        cout << "----------------------------------------/n";
//
//
//
//    }
//};
//int main()
//{
//    Student arr[3]{};
//    for (int i = 0;i < 3;i++) {
//        cin >> arr[i].name >> arr[i].grade >> arr[i].subject;
//    }
//
//   /* for (int i = 0;i < 3;i++) {
//        cout << arr[i].printinfo();
//    }*/
//
//
//
//
//
//}

//#include <iostream>
//using namespace std;
//
//class Account {
//	public:
//		//Attribute:
//		string name;
//		int id;
//		double balance;
//
//		//Methods:
//		void printinfo() {
//			cout << "Name :" << name << endl;
//			cout << "Id :" << id << endl;
//			cout << "Balance :" << balance << endl;
//			cout << "-------------------------------\n";
//
//		}
//		
//};
//
//int main() {
//
//	/*Account a1, a2, a3, a4, a5, a6;
//	a1.name = "Saad";
//	a2.name = "sherif";
//	a3.name = "Nassar";
//	a4.name = "Salah";
//	a5.name = "Kirolos";
//	a6.name = "Badr";
//
//	a1.id = 1;
//	a2.id = 2;
//	a3.id = 3;
//	a4.id = 4;
//	a5.id = 5;
//	a6.id = 6;
//
//	a1.balance = 5000;
//	a2.balance = 6000;
//	a3.balance = 7000;
//	a4.balance = 8000;
//	a5.balance = 9000;
//	a6.balance = 10000;
//
//	a1.printinfo();
//	a2.printinfo();
//	a3.printinfo();
//	a4.printinfo();
//	a5.printinfo();
//	a6.printinfo();*/
//
//		int n;
//
//		cout << "Enter the number of accounts: ";
//		cin >> n;
//
//		// Create dynamic array of Account objects
//		Account* arr = new Account[n];
//
//		// Input data
//		for (int i = 0; i < n; i++) {
//			cout << "\nEnter data for account #" << (i + 1) << ":\n";
//
//			cout << "Name: ";
//			cin >> arr[i].name;
//
//			cout << "ID: ";
//			cin >> arr[i].id;
//
//			cout << "Balance: ";
//			cin >> arr[i].balance;
//		}
//
//		// Print data
//		cout << "\n=== Account Information ===\n";
//		for (int i = 0; i < n; i++) {
//			arr[i].printinfo();
//		}
//
//		// Free the dynamic memory
//		delete[] arr;
//
//		return 0;
//	}


#include <iostream>
using namespace std;

class Account {
private:
	// Attributes
	string name;
	int id;
	double balance;

public:
	// Setters
	void setname(string name) {
		this->name = name;
	}
	void setid(int id) {
		this->id = id;
	}
	void setbalance(double balance) {
		this->balance = balance;
	}

	// Getters
	string getname() {
		return this->name;
	}
	int getid() {
		return this->id;
	}
	double getbalance() {
		return this->balance;
	}

	// Print method
	void printinfo() {
		cout << "Name    : " << name << endl;
		cout << "Id      : " << id << endl;
		cout << "Balance : " << balance << endl;
		cout << "-------------------------------\n";
	}
};

int main() {
	int n;

	cout << "Enter the number of accounts: ";
	cin >> n;

	// Create dynamic array of Account objects
	Account* arr = new Account[n];

	// Input data
	for (int i = 0; i < n; i++) {
		cout << "\nEnter data for account #" << (i + 1) << ":\n";

		string name;
		int id;
		double balance;

		cout << "Name: ";
		cin >> name;
		arr[i].setname(name);

		cout << "ID: ";
		cin >> id;
		arr[i].setid(id);

		cout << "Balance: ";
		cin >> balance;
		arr[i].setbalance(balance);
	}

	// Print data
	cout << "\n=== Account Information ===\n";
	for (int i = 0; i < n; i++) {
		arr[i].printinfo();
	}

	// Free the dynamic memory
	delete[] arr;

	return 0;
}
