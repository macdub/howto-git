#include <cstdio>

void addOneByRef(int& val) {
    val++;
}

int main() {
    int x = 3;

    printf("X is %d\n", x);

    addOneByRef(x);
    addOneByRef(x);
    addOneByRef(x);
    addOneByRef(x);

    printf("X is %d\n", x);
}
