#include <stdio.h>

struct Person {
    char name[55];
    int age;
    float height;
};

int main() {
    struct Person personI = {"Harry", 37, 1.83};

    printf("Name: %s\n", personI.name);
    printf("Age: %d\n", personI.age);
    printf("Height: %.2f\n", personI.height);

    return 0;
}


