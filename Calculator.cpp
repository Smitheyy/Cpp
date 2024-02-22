#include<iostream>

float Equation(unsigned int choice, float a, float b){
    if(choice == 1){
            return a + b;
    }

    else if(choice == 2){
        return a - b;
    }

    else if(choice == 3){
        return a * b;
    }

    else if(choice == 4){
        if(b == 0){
            return 1;
        }
        return a / b;
    }
}


int main(){
  float num1;
  float num2;
  unsigned int choice_equation;
  char terminate = 'k';


  while(terminate != 'q')
  {

    std::cout << "\n\nWELCOME TO CONSOLE CALCULATOR PROGRAM!\n\n";
    std::cout << "In order to calculate something you have to manually enter the numbers and choose one of the equasions given(for now you can add, multiply, divide and subtract numbers)\n\n";
    std::cout << "To start, please enter your first number: ";
    std::cin >> num1;

    std::cout << "\nGreat! Now enter the second number that you want to count with: ";
    std::cin >> num2;

    std::cout << "These are your numbers:\n" << num1 << '\n' << num2 << "\n\n";

    std::cout << "Now enter a number (from 1-4) to choose one of the following equations:\n";
    std::cout << "1.Add\n";
    std::cout << "2.Subtract\n";
    std::cout << "3.Multiply\n";
    std::cout << "4.Divide\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice_equation;

    if(choice_equation == 1){
        std::cout << num1 << " + " << num2 << " = " << Equation(choice_equation,num1, num2) << '\n';
    }

    else if(choice_equation == 2){
        std::cout << num1 << " - " << num2 << " = " << Equation(choice_equation, num1, num2) << '\n';
    }

    else if(choice_equation == 3){
        std::cout << num1 << " * " << num2 << " = " << Equation(choice_equation, num1, num2) << '\n';
    }

    else if(choice_equation == 4){
            if (Equation(choice_equation, num1, num2) == 1){
                std::cout << "You can't divide by zero!\n";
                continue;
            }
            std::cout << num1 << " / " << num2 << " = " << Equation(choice_equation, num1, num2) << '\n';
    }

    std::cout << "Do you wish to continue your program?(Enter q key to quit the program (make sure your caps lock is off it has to be a small q) and if you want to continue then enter anything else): ";
    std::cin >> terminate;
  }
  std::cout << "\nBye and see you next time :)!\n";

  return 0;

}
