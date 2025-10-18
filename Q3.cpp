#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string name;
    string sound;

public:
    
    void setName(string n) { name = n; }
    void setSound(string s) { sound = s; }

    string getName() const { return name; }
    string getSound() const { return sound; }

    
    virtual void makeSound() const {
        cout << name << " makes a sound: " << sound << endl;
    }

    virtual ~Animal() {}
};


class Dog : public Animal {
public:
    Dog(string n) {
        setName(n);
        setSound("Woof!");
    }

    void makeSound() const override {
        cout << getName() << " says: " << getSound() << endl;
    }
};


class Cat : public Animal {
public:
    Cat(string n) {
        setName(n);
        setSound("Meow!");
    }

    void makeSound() const override {
        cout << getName() << " says: " << getSound() << endl;
    }
};


int main() {
   
    Dog myDog("Dogesh Bhai");
    Cat myCat("Billi Rani");

    
    Animal* animals[2];
    animals[0] = &myDog;
    animals[1] = &myCat;


    cout << "--- Animal Sounds ---" << endl;
    for (int i = 0; i < 2; ++i) {
        animals[i]->makeSound(); 
    }

    return 0;
}
