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
        
        if (!os.good()) {   // Check if the stream has failed
            std::cerr << "Failed to write person data.\n";
        }
    }
};

class SimpleListofPeople {
private:
    Person* people;
    int number_of_people;
    int counter_of_people;


public:
    SimpleListofPeople(int _number_of_people) : number_of_people(_number_of_people), counter_of_people(0){
        if(_number_of_people > 0){
            number_of_people = _number_of_people;
            people = new Person[number_of_people];
            counter_of_people = 0;
        }

        else{ std::cout << "I'm sorry but you can't create an empty list of people nor the one with a negative amount of people..."; people = nullptr; }
    }
    ~SimpleListofPeople(){ delete[] people; }


    void Add(const Person& person) {
        if(counter_of_people >= number_of_people) {
            std::cout << "The list is full. Cannot add more people.\n";
            return;
        }
        people[counter_of_people++] = person;
    }

    friend std::ostream& operator<<(std::ostream& os, const SimpleListofPeople& list);
};

std::ostream& operator<<(std::ostream& os, const SimpleListofPeople& list) {
    for (int i = 0; i < list.counter_of_people; i++) {
        os << (i + 1) << '.';
        list.people[i].WriteData(os);
    }
    return os;
}


int main() {
    Person jack("Jack", "male", 22, 190), ariana("Ariana", "female", 18, 160), oskar("Oskar", "male", 40, 170), bartek("Bartek", "male", 400, 200), ola("Ola", "female", 80, 150);
    SimpleListofPeople list(5);

    list.Add(jack);
    list.Add(ariana);
    list.Add(oskar);
    list.Add(bartek);
    list.Add(ola);

    std::cout << list;

    return 0;
}