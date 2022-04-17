// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_
#include <string>
template<typename T, int size>
class TPQueue {
private:
T arr[50];
int first, last;

public:
TPQueue(): first(0), last(0) {}
void push(T znach) {
if (last - first >= size) {
throw std::string("Is full!!!");
} else {
int m = last - 1;
while (m >= first && znach.prior > arr[m % size].prior) {
arr[(m + 1) % size] = arr[m % size];
m--;
}
arr[(m + 1) % size] = znach;
last++;
}
}
T pop() {
if (first == last) {
throw std::string("Is empty!!!");
} else {
return arr[(first++) % size];
}
}
};

struct SYM {
char ch;
int prior;
};
#endif // INCLUDE_TPQUEUE_H_
