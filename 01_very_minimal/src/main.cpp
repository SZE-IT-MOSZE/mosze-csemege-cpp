#include <iostream>

constexpr int LINE_LENGTH = 10;


void print_header() {
    std::cout << "**";
    for (int i = 0; i < LINE_LENGTH; i++)  std::cout << "--";
    std::cout << "**" << std::endl;
}

int main() {
    print_header();
    std::cout << "\tHello MoSZE" << std::endl;
    print_header();
    return 0;
}
