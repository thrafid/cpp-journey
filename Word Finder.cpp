// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    std::string sentence;
    std::string word;
    std::cin >> sentence;
    std::cin >> word;
    if(sentence.find(word) != std::string::npos){
        std::cout << "position: " << sentence.find(word);
        
    }
    else{
        std::cout << "the word is not found";
    }

    return 0;
}
