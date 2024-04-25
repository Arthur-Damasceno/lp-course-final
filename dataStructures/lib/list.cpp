#include <iostream>
#include <vector>

using std::cout;
using std::vector;

class List {
    vector<int> elements;

    public:
        void insert(int element, unsigned int position);

        void push(int element);

        void remove(unsigned int position);

        void pop();

        bool exists(unsigned int position);

        bool empty();

        void print();
};

void List::insert(int element, unsigned int position) {
    if (elements.size() >= position) {
        elements.insert(elements.begin() + position, element);
    }
}

void List::push(int element) {
    elements.push_back(element);
}

void List::remove(unsigned int position) {
    if (exists(position)) {
        elements.erase(elements.begin() + position);
    }
}

void List::pop() {
    elements.pop_back();
}

bool List::exists(unsigned int position) {
    return elements.size() >= position;
}

bool List::empty() {
    return elements.empty();
}

void List::print() {
    for (int i = 0; i < elements.size(); i++) {
        cout << elements[i] << '\n';
    }
}
