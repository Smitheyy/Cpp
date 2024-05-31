#include<iostream>

class Human{
  private:
  std::string name;

  public:
  Human(std::string _name) : name(_name) {}   // initializer list (constructor)
  ~Human() = default;  // default destructor

  void WriteData(std::ostream& os){   // displays your human's name
    os << "A person's name is: " << name << '\n';
  }

  void WriteClass(std::ostream& os){  // informs a user that his human is of an human type
    os << "Your object is of an Human class!\n";
  }

  static Human* CreateNewHuman(){   // dynamically creates a new human

    std::string new_name;
    std::cout << "Enter your newly made human's name: ";
    std::cin >> new_name;

    return (new Human(new_name));

  }

  friend std::ostream& operator<<(std::ostream& os, const Human& human);  // operator "<<" overloading - a mix of two previous functions
};

std::ostream& operator<<(std::ostream& os, Human& human){
  human.WriteData(os);
  human.WriteClass(os);

  return os;
}


int main(){

  Human person1("Oskar"), person2("Bartek");  // object creation
  Human* ptrtoperson; // pointer to human creation

  person1.WriteData(std::cout); // a use of WriteData on an object
  person1.WriteClass(std::cout);  // a use of WriteClass on an object
  std::cout << "An endline!\n\n";

  std::cout << person1 << "\n An endline! \n\n" << person2 << "\n\n";   // use of "<<" operator


  ptrtoperson = Human::CreateNewHuman();  // call of CreateNeHuman function
  std::cout << "New human has been created!\n\n";

  ptrtoperson->WriteData(std::cout);  // calling every newly created human data by pointer
  ptrtoperson->WriteClass(std::cout);
  std::cout << "An endline!\n\n";

  std::cout << *ptrtoperson;  // doing the same but with "<<" operator


  return 0;
}