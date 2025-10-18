#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
    string name;
    string sound;

public:
    void setName(string n) { name = n; }
    void setSound(string s) { sound = s; }

    string getName() const { return name; }
    string getSound() const { return sound; }

    virtual void makeSound() const
    {
        cout << name << " makes a sound: " << sound << endl;
    }

    virtual void displayDetails() const
    {
        cout << "Animal Name: " << name << ", Sound: " << sound << endl;
    }

    virtual ~Animal() {}
};

class Dog : public Animal
{
private:
    string breed;

public:
    Dog(string n, string b) : breed(b)
    {
        setName(n);
        setSound("Woof!");
    }

    void makeSound() const override
    {
        cout << getName() << " says: " << getSound() << endl;
    }

    void displayDetails() const override
    {
        cout << "Dog Name: " << getName()
             << ", Breed: " << breed
             << ", Sound: " << getSound() << endl;
    }
};

class Cat : public Animal
{
private:
    string color;

public:
    Cat(string n, string c) : color(c)
    {
        setName(n);
        setSound("Meow!");
    }

    void makeSound() const override
    {
        cout << getName() << " says: " << getSound() << endl;
    }

    void displayDetails() const override
    {
        cout << "Cat Name: " << getName()
             << ", Color: " << color
             << ", Sound: " << getSound() << endl;
    }
};

int main()
{

    Animal *animals[4];

    animals[0] = new Dog("Dogesh Bhai", "Golden Retriever");
    animals[1] = new Cat("Whiskers", "White");
    animals[2] = new Dog("Max", "Bulldog");
    animals[3] = new Cat("Billi Rani", "Black");

    cout << "--- Animal Details ---\n";
    for (int i = 0; i < 4; ++i)
    {
        animals[i]->displayDetails();
        animals[i]->makeSound();
        cout << endl;
    }

    for (int i = 0; i < 4; ++i)
    {
        delete animals[i];
    }

    return 0;
}
