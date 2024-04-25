#include <iostream>
#include <vector>

using std::cout;
using std::vector;

class Stack {
    vector<int> elements;

    public:
        void push(int element);

        void pop();

        bool empty();

        void print();
};

void Stack::push(int element) {
    elements.push_back(element);
}

void Stack::pop() {
    if (!elements.empty()) {
        elements.erase(elements.end() - 1);
    }
}

bool Stack::empty() {
    return elements.empty();
}

void Stack::print() {
    for (int i = 0; i < elements.size(); i++) {
        cout << elements[i] << '\n';
    }
}
