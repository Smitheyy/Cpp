#include <iostream>
#include <vector>
#include <string>


std::vector<std::string> dividetexttosentences(const std::string& text){

    std::vector<std::string> sentences;
    std::string sentence;
    char single_letter;


    for(int i = 0; i < text.length(); i++){

        single_letter = text[i];

        if(single_letter == '.' || single_letter == '!' || single_letter == '?'){

            sentences.push_back(sentence);
            sentence.clear();

        }

        else{
            sentence += single_letter;
        }
    }

    if(!sentence.empty())
        sentences.push_back(sentence);


    return sentences;
}

int countwordsinsentence(const std::string& sentence){

    char single_letter;
    int word_count = 0;
    bool is_word = false;


    for(int i = 0; i < sentence.length(); i++){

        single_letter = sentence[i];

        if(single_letter == ' ' || single_letter == '\t' || single_letter == '\n' || single_letter == ',')
            is_word = false;

        else if(!is_word){
            is_word = true;
            word_count++;
        }

    }


    return word_count;
}

void displayresults(const std::vector<std::string>& sentences){

    for(int i = 0; i < sentences.size(); i++){

        int word_count = countwordsinsentence(sentences[i]);
        std::cout << "Sentence: " << i + 1 << "\t Number of words: " << word_count << std::endl;

    }
}