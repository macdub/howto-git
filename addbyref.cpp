#include <cstdio>

void addOneByRef(int& val) {
    val++;
}

int main() {
    int x = 5;

    printf("X is %d\n", x);

    addOneByRef(x);

    printf("X is %d\n", x);
}
