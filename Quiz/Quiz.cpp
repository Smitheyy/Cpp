#include <iostream>
#include "Question.h"


int main()
{
    Question questions[5];
    int sum_of_points = 0;
    
    for (int i = 0; i <= 4; i++) {
        questions[i].number_of_question = i + 1;
        questions[i].Load();
        questions[i].Ask();
        questions[i].CheckAnswer();
        sum_of_points += questions[i].point;
    }

    std::cout << "Thank you for Finishing the quiz! Here are your points = " << sum_of_points;

    return 0;
}


