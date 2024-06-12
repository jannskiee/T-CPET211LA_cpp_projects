// Input a sentence and display the following
//    a.	The first word and last word of the sentence
//    b.	Number of words in the sentence
//    c.	Two substrings, the first half of and the second half of the size of the sentence.


#include <iostream>

int main() {
    std::string sentence;
    int count = 0;

    std::cout << "Enter the sentence: " << std::endl;
    getline(std::cin, sentence);

    std::cout << "\nRESULT: " << std::endl;
    std::cout << "First word: " << sentence.substr(0, sentence.find(' ')) << std::endl;
    std::cout << "Last word: " << sentence.substr(sentence.find_last_of(' ') + 1) << std::endl;

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            if (sentence[i + 1] != ' ')
                count++;
        }
    }
    std::cout << "Number of words in the sentence: " << count + 1 << std::endl;

    std::cout << "First half of the sentence: " << sentence.substr(0, sentence.length() / 2) << std::endl;
    std::cout << "Second half of the sentence: " << sentence.substr(sentence.length() / 2) << std::endl;


    return 0;
}
