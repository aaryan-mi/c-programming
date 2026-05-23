#include <stdio.h>

int main() {
    char ch;
    char *ptr = &ch;   // pointer to ch

    for (ch = 'A'; *ptr <= 'Z'; (*ptr)++) {
        printf("%c ", *ptr);
    }

    return 0;
}