#include "Question.h"
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;


void Question::Load() {
	fstream file;
	file.open("quiz.txt", std::ios::in);

	if (file.good() == false) { cout << "Cannot open a file!"; exit(0); }

	int line_number = (number_of_question - 1) * 6 + 1;
	int current_number = 1;
	string line;

	while(getline(file, line)){
		if (current_number == line_number) content = line;
		if (current_number == line_number + 1) a = line;
		if (current_number == line_number + 2) b = line;
		if (current_number == line_number + 3) c = line;
		if (current_number == line_number + 4) d = line;
		if (current_number == line_number + 5) correct_answer = line;

		current_number++;
	}

	file.close();
}

void Question::Ask() {
	cout << endl << content << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << "-----------------------------" << endl;

	cout << "Answer: ";
	cin >> given_answer;
}

void Question::CheckAnswer() {
	if (given_answer == correct_answer) point = 1;
	else point = 0;
}
