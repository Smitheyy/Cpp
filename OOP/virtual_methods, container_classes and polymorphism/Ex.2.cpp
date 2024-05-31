#include<iostream>
#include <utility>

class Person {
private:
    std::string name;
    std::string gender;
    int age;
    int height;

public:

    Person() : age(0), height(0) {}
    Person(std::string _name, std::string _gender, int _age, int _height)
            : name(std::move(_name)), gender(std::move(_gender)), age(_age), height(_height) {}

    void WriteData(std::ostream& os) const {
        os << "name: " << name << ' ' << "gender: " << gender << ' '
           << "age: " << age << ' ' << "height: " << height << "cm" << '\n';
        // Check if the stream has failed
        if (!os.good()) {
            std::cerr << "Failed to write person data.\n";
        }
    }
};

class SimpleListofPeople {
private:
    Person people[2];
    static int counter_of_people;

public:
    void Add(const Person& person) {
        if (counter_of_people < 2) {
            people[counter_of_people] = person;
            counter_of_people++;
        } else {
            std::cout << "I'm sorry but you can't add more people to the list!\n";
        }
    }

    friend std::ostream& operator<<(std::ostream& os, const SimpleListofPeople& list);
};

std::ostream& operator<<(std::ostream& os, const SimpleListofPeople& list) {
    for (int i = 0; i < 2; i++) {
        os << (i + 1) << '.';
        list.people[i].WriteData(os);
    }
    return os;
}

int SimpleListofPeople::counter_of_people = 0;


int main() {
    Person jack("Jack", "male", 22, 190), ariana("Ariana", "female", 18, 160), oskar("Oskar", "male", 40, 170);
    SimpleListofPeople list;

    list.Add(jack);
    list.Add(ariana);
    list.Add(oskar);

    std::cout << list;

    return 0;
}