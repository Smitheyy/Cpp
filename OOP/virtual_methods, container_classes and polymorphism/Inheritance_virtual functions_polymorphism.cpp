#include <iostream>


class Human {
protected:
    std::string name;

public:
    Human() { name = "/0"; }
    Human(std::string _name) : name(std::move(_name)) {}   // initializer list (constructor)
    virtual ~Human() = default;  // default destructor

    virtual void WriteData(std::ostream& os) {   // displays your human's name
        os << "A person's name is: " << name << '\n';
    }

    virtual void WriteClass(std::ostream& os) {  // informs a user that his human is of a human type
        os << "Your object is of an Human class!\n";
    }

    static Human* CreateNewHuman() {   // dynamically creates a new human

        std::string new_name;
        std::cout << "Enter your newly made human's name: ";
        std::cin >> new_name;

        return (new Human(new_name));

    }

    friend std::ostream& operator<<(std::ostream& os, Human& human);  // operator "<<" overloading - a mix of two previous functions
};

std::ostream& operator<<(std::ostream& os, Human& human) {
    human.WriteData(os);
    human.WriteClass(os);

    return os;
}

//----------------------------------------------------------------------------------------------------------------

class Student : public Human{
private:
    int index_number;

public:
    Student(std::string _name, int _index_number) : Human(_name), index_number(_index_number) {}
    ~Student() override = default;


    virtual void WriteData(std::ostream& os) override{
        os << "Student data:\n";
        os << "a)name: " << name << '\n';
        os << "b)index number: " << index_number << '\n';
    }
    virtual void WriteClass(std::ostream& os) override{ os << "Your student is of an student class!\n"; }

    static Student* CreateNewStudent() {
        std::string new_name;
        int new_index_number;
        std::cout << "Enter new student's data(name and index number):";
        std::cin >> new_name >> new_index_number;

        return new Student(new_name, new_index_number);
    }

};


//----------------------------------------------------------------------------------------------


class ListofPeople {
private:
    Human* people;
    int number_of_people;
    int counter_of_people;


public:
    ListofPeople(int _number_of_people) : number_of_people(_number_of_people), counter_of_people(0) {
        if (_number_of_people > 0) {
            number_of_people = _number_of_people;
            people = new Human[number_of_people];
        }

        else { std::cout << "I'm sorry but you can't create an empty list of people nor the one with a negative amount of people..."; people = nullptr; }
    }
    ~ListofPeople() { delete[] people; }


    void Add(Human* person) {
        if (counter_of_people >= number_of_people) {
            std::cout << "The list is full. Cannot add more people.\n";
            return;
        }
        people[counter_of_people++] = *person;
    }

    friend std::ostream& operator<<(std::ostream& os, const ListofPeople& list);
};

std::ostream& operator<<(std::ostream& os, const ListofPeople& list) {
    for (int i = 0; i < list.counter_of_people; i++) {
        os << (i + 1) << '.';
        list.people[i].WriteData(os);
        list.people[i].WriteClass(os);
    }
    return os;
}


int main()
{
    ListofPeople list(5);
    Human* john = Human::CreateNewHuman();

    list.Add(john);
    std::cout << "Adding John(Human)\n";

    Student* alice = Student::CreateNewStudent();
    list.Add(alice);
    std::cout << "Adding Alice(student)\n";

    std::cout << "All people in the list:\n" << list;


    delete john;
    delete alice;
    return 0;
}


