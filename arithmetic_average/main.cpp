#include <iostream>


int main(){

  int sum = 0;
  unsigned int amount;
  int i, j, k;   //these variables only control for loops
  float average;
  char terminate = 'k';

  while(terminate != 'q'){
    std::cout << "Enter the amount of numbers of which you would like to calculate the average(Enter a number to submit your answer): " << std::endl;
    std::cin >> amount;

    if(amount == 0){
      std::cout << "So you have chosen to do nothing huh?" << std::endl;
      average = 0;
      std::cout << "Here is your sum of nothing " << sum << std::endl;
      std::cout << "Here is your average of nothing " << average << std::endl;
      return 0;
    }

    if(amount < 0){
      std::cout << "You have to enter positive numbers only!" << std::endl;
      return 1;
    }


    int *tab = new int(amount);   //this line dynamically creates an array of integers based on the given amount by the user


    for(i = 0; i<amount; i++){    //this loop allows the user to fill array with numbers
      std::cout << "Enter the " << (i+1) << " value: " << std::endl;
      std::cin >> tab[i];
      std::cout << "You entered: " << tab[i] << std::endl;
    }


    std::cout << "Here is your array: " << std::endl;
    for(k = 0; k<amount; k++){   //this loop displays an array onto the screen
      std::cout << tab[k] << std::endl;
    }


    for(j = 0; j<amount; j++){    //this loop calculates the sum of all the numbers in the array
      sum+=tab[j];
    }
    std::cout << "The sum of all the numbers of your list is equal to " << sum << std::endl;
    std::cout << "The average of sum is equal to " << static_cast<float>(sum)/amount << std::endl;  //this line calculates the average
    sum = 0;
    std::cout << "Do you want to terminate the program?(enter q on your keyboard to execute): " << std::endl;
    std::cin >> terminate;
  }
  
  return 0;
}
