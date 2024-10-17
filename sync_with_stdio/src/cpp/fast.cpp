#include <iostream>
#include <string>

int main() {
    std::string x;

    std::ios_base::sync_with_stdio(false); // this is the trick

    while (std::getline(std::cin, x));

    return 0;
}