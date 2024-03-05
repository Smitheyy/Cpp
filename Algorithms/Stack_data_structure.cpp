#include<iostream>
#include "Helpy.h"
using std::cout;
using std::cin;


struct Stack{   //stack structure

    int top = -1;
    int tab[7]{};

private:
    bool IsStackFull(){     //a function which checks whether the stack is full or not

        if(top == sizeof(tab) / sizeof(tab[0]) - 1){
            return true;

        }

        else{
            return false;

        }
    }


    [[nodiscard]] bool IsStackEmpty() const{ //a function which checks whether the stack is empty or not

        if(top == -1){
            return true;

        }

        else{
            return false;

        }
    }

public:
    void Push(int number){  //this function pushes an integer value onto the stack

        if(!IsStackFull()){
            top++;
            tab[top] = number;
            cout << "You pushed: " << number << " onto the stack!\n";

        }

        else{
            cout << "Overflow! Your stack is Full! Cannot push " << number << '\n';

        }
    }


    void Pop(){ //this function deletes the top value from the stack (might have to redo it)

        if(!IsStackEmpty()){
            int popped_element = tab[top];
            tab[top] = 0;
            top--;
            cout << "Your top element: " << popped_element << " has been popped from the stack!\n";

        }

        else{
            cout << "Your stack is empty! There is nothing to pop!\n";

        }
    }

    void PeekTop(){ //this function checks what value is currently on top of your stack

        if(IsStackEmpty()){
            cout << "Your stack is empty! There is no top of it!\n";

        }

        else{
            cout << "The top element of your stack is: " << tab[top] << '\n';

        }
    }


    void SearchElement(int wanted_number){  //this function searches for the given value in the stack

        unsigned int instances = 0;

        for(int i = sizeof(tab) / sizeof(tab[0]) - 1; i >= 0; i-- ){

            if(!IsStackEmpty()){
                if(tab[i] == wanted_number){

                    cout << "The number you're looking for was found in a stack at index " << i << '\n';
                    instances++;

                }

            }

            else{
                cout << "There are no elements inside of your stack!\n";
                break;

            }
        }

        if(instances == 0){
            cout << "There are no instances of number " << wanted_number << " inside of this stack!\n";

        }

        else if(instances == 1){
            cout << "There is only one instance of " << wanted_number << " inside of this stack!\n";

        }

        else{
            cout << "There are " << instances << " instances of number " << wanted_number << " inside of this stack\n";

        }
    }


    void DisplayStack(){    //this function displays our stack

        for(int i = sizeof(tab)/sizeof(tab[0]) - 1; i >= 0; i--){
            cout << tab[i] << '\n';

        }
    }
};



int main(){
    Stack stack; //stack object declaration

    cout << "WELCOME TO STACK DATA STRUCTURE PROGRAM!\n\n\n";
    cout << "In this program I've written a stack structure in C++ that has 5 different methods called Push, Pop, SearchElement, PeekTop, DisplayStack all the methods are explained in the next line:\n";
    cout << "1.Push(integer value) - adds a new integer on top of the stack\n";
    cout << "2.Pop() - deletes a top value from the stack\n";
    cout << "3.SearchElement(integer value) - searches for the given element inside the stack\n";
    cout << "4.PeekTop() - displays the current top value of the stack\n";
    cout << "5.DisplayStack - displays all the contents of the stack\n\n";

    do{

        stack.Push(4);
        stack.Push(5);
        stack.Push(7);
        stack.Push(7);
        stack.Push(33);
        stack.Push(21);
        stack.Push(91);     //here you can have fun messing around with it

        stack.SearchElement(7);
        stack.PeekTop();
        stack.Pop();

        stack.DisplayStack();
    }
    while(!Helpy::ShouldProgramEnd()); //a loop which terminates the program

    return 0;
}