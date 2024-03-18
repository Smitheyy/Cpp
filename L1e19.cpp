#include<sstream>
#include<vector>
#include<string>
#include<iostream>


std::vector<std::string> DivideToSentences(const std::string& text){

    std::vector<std::string> sentences;
    std::stringstream iss(text);
    std::string sentence;


    while(std::getline(iss, sentence, '.')){
        sentences.push_back(sentence);
    }

    return sentences;

}


int CountWordsinSentence(const std::string& text){

    std::stringstream iss_sentence(text);
    std::string sentence;
    int word_counter = 0;


    while(iss_sentence >> sentence){
        ++word_counter;
    }

    return word_counter;

}


void DisplayResults(const std::vector<std::string>& sentences){


    for(int i = 0; i < sentences.size(); i++){

        int number_of_words = CountWordsinSentence(sentences[i]);
        std::cout << "Sentence: " << i + 1 << "\t words: " << number_of_words << '\n';

    }
}
