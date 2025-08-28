#include <stdio.h>
#include <stdlib.h>
void rand_string(char* s, size_t size) {
    const char characterset[] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < size; i++) {
        s[i] = characterset[rand() % 26];
    }
    s[size] = '\0';  // null-terminate the string
}
