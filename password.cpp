#include <iostream>
#include <cstdlib>
#include <ctime>

char get_random_char() {
    const std::string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    return charset[rand() % charset.size()];
}

void generate_password(int length) {
    srand(time(0));
    for (int i = 0; i < length; i++) {
        std::cout << get_random_char();
    }
    std::cout << std::endl;
}

int main() {
    int length = 12; // change the length as needed
    generate_password(length);
    return 0;
}
