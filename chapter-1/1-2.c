#include <stdio.h>

int main() {
    // compiler gives the following warning:
    // "warning: unknown escape sequence: '\g'"
    printf("\g");
}