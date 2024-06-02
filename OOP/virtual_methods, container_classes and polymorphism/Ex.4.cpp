#include<iostream>


class Student{
  private:
  std::string name;
  int index_number;

  public:
  Student(std::string _name, int _index_number) : name(_name), index_number(_index_number){}
  ~Student() = default;


  void WriteData(std::ostream& os){
    os << "Student data:\n";
    os << "a)name: " << name << '\n';
    os << "b)index number: " << index_number << '\n';
  }
  void WriteClass(std::ostream& os){ os << "Your student is of an student class!\n"; }

  static Student* CreateNewStudent(){
      std::string new_name;
      int new_index_number;
      std::cout << "Enter new student's data(name and index number):";
      std::cin >> new_name >> new_index_number;

      return new Student(new_name, new_index_number);
  }

  friend std::ostream& operator<<(std::ostream& os, Student& s);
};

std::ostream& operator<<(std::ostream& os, Student& s){
    s.WriteData(os);
    s.WriteClass(os);

    return os;
}

int main(){
  Student s1("Fabian", 50001);

  s1.WriteData(std::cout);
  s1.WriteClass(std::cout);
  std::cout << "AN ENDLINE!\n\n";

  std::cout << s1;
  std::cout << "AN ENDLINE!\n\n";

  Student* ptrtostudent = Student::CreateNewStudent();
  ptrtostudent->WriteData(std::cout);
  ptrtostudent->WriteClass(std::cout);
  std::cout << "AN ENDLINE!\n\n";

  std::cout << *ptrtostudent;
  std::cout << "AN ENDLINE!\n\n";


  delete ptrtostudent;
  return 0;
}