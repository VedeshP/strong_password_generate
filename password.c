#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char get_random_char() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    return charset[rand() % (sizeof(charset) - 1)];
}

void generate_password(int length) {
    srand(time(0));
    for (int i = 0; i < length; i++) {
        printf("%c", get_random_char());
    }
    printf("\n");
}

int main() {
    int length = 12; // change the length as needed
    generate_password(length);
    return 0;
}
