#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;
    string address;

public:
    Person(string n, int a, string addr)
    {
        name = n;
        age = a;
        address = addr;
    }

    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void setAddress(string addr) { address = addr; }

    string getName() { return name; }
    int getAge() { return age; }
    string getAddress() { return address; }

    void display()
    {
        cout<< "Name: " << name << "\n"
             << " Age: " << age << "\n"
             << " Address: " << address << "\n"
             << endl;
    }
};

int main()
{
    int N;
    cout << "Enter the number of persons: ";
    cin >> N;

    Person *people[N];

    for (int i = 0; i < N; i++)
    {
        string name, address;
        int age;

        cout << "\nEnter details for Person " << i + 1 << ":\n";
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Age: ";
        cin >> age;
        cin.ignore();
        cout << "Address: ";
        getline(cin, address);

        people[i] = new Person(name, age, address);
    }

    cout << "\n--- Person Details ---\n";
    for (int i = 0; i < N; i++)
    {
        cout << "Person " << i + 1 << ": ";
        people[i]->display();
    }

    for (int i = 0; i < N; i++)
    {
        delete people[i];
    }

    return 0;
}
