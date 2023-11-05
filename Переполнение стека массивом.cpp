#include <iostream>
using namespace std;
int n = 0;

void print(int n) {
    char array[10000];
    cout << n << " ";
    n++;
    print(n);
}

int main() {
    print(n);
    return 0;
}