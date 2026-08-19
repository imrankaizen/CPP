// Experiment 16: write up class which should overload the increment operator++.
// Experiment 16: write a class which should overload the decrement operator--
// Experiment 16: write up class which should overload the additiin operator +

#include <iostream>
using namespace std;
class Counter {
    int value;
public:
    Counter(int v = 0) {
        value = v;
    }
    Counter operator++() {
        ++value;
        return *this;
    }
    Counter operator++(int) {
        Counter temp = *this;
        value++;
        return temp;
    }
    void display() {
        cout << "Value: " << value << endl;
    }
};
int main() {
    Counter c1(5);

    cout << "Initial: ";
    c1.display();

    ++c1;   // prefix increment
    cout << "After prefix ++: ";
    c1.display();

    c1++;   // postfix increment
    cout << "After postfix ++: ";
    c1.display();

    return 0;
}