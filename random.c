#include <stdio.lib>
#include <stdlib.h>

char rand_string(char* s, size_t size) {
    const char characterset[] = "abcdefghijklmnopqrstuvwxyz";

        for (int i = 0; i < size; i++) {
        s[i] = characterset[rand() % 26];
    }
}

