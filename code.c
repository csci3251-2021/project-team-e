#include <stdio.h>
#include <time.h>

int main(void) {
    printf("Hello World!\n");
    time_t t;
    time(&t);
    printf("You see this message at: %s\n", ctime(&t));
}
