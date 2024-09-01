// Exercise 1: Substring Extractor

#include <iostream>

int main() {
   int a,b;
   std::string s;
   std::cin >> a >> b >> s;
   std::cout << "Substring is: " << s.substr(a,b);

    return 0;
}
