// Copyright 2022 NNTU-CS

#ifndef INCLUDE_TPQUEUE_H_

#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
private:
T arr[5];
int frst;
int lst;

public:
TPQueue() :frst(0), lst(0) { }
void push(T x) {
int m = 0;
T value = x;
for (int i = frst; i < size; i++) {
m = lst++ - 1;
while ((m >= frst) && (arr[(m) % size].pr < value.pr)) {
if (arr[m % size].pr == value.pr) {
arr[(m++) % size] = value;
break;
}
arr[(m + 1) % size] = arr[m % size];
m--;
}
arr[(m++ + 1) % size] = value;
break;
}
}
T pop() {
return arr[(frst++) % size];
}
};
struct SYM {
char ch;
int pr;
};
#endif // INCLUDE_TPQUEUE_H_
