#include<iostream>


class Question
{
public:
	std::string content;
	std::string a, b, c, d;
	int number_of_question;
	std::string correct_answer;
	std::string given_answer;
	int point;

	void Load();	// loads data from the file
	void Ask();	// asks a question
	void CheckAnswer();	// checks if the answer is correct


};

