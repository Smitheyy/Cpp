#include<iostream>


int main(){
  int count = 0, sum = 0;
  float average = 0;
  int tab_of_numbers[100];
  int i, j, k;  //these variables are only used to terminate and iterate through the for loops

  std::cout << "Enter the amount of numbers of which you will count the average( keep in mind that the limit is 100 numbers): ";
  std::cin >> count;

  if(count < 0){
    std::cout << "I'm sorry but the amount of numbers cannot be less than 0...\n";
    return 1;
  }
  else if(count == 0){
    std::cout << "So you have chosen to do nothing huh?\n";
    return 1;
  }
  else if(count > 100){
    std::cout << "Overflow! You can't count the average of more than 100 numbers!\n";
    return 1;
  }

  for(i = 0; i<count; i++){
    std::cout << "Number "<< i <<" equals: ";
    std::cin >> tab_of_numbers[i]; 
  }

  std::cout << "Here is your list of numbers:\n"; 
  for(j = 0; j<count; j++){
    std::cout << tab_of_numbers[j] << '\n';
  }

  for(k = 0; k<count; k++){
    sum+=tab_of_numbers[k];
  }
  std::cout << "The average of your list of numbers is equal to " << sum << std::endl;


  return 0;
}