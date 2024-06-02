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
};


int main(){
  Student s1("Fabian", 50001);

  s1.WriteData(std::cout);
  s1.WriteClass(std::cout);


  return 0;
}