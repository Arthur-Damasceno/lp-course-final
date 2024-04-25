#include <iostream>
#include <vector>

using std::cout;
using std::vector;

class Queue {
    vector<int> elements;

    public:
        void enqueue(int element);

        void dequeue();

        bool empty();

        void print();
        
};

void Queue::enqueue(int element) {
    elements.push_back(element);
}

void Queue::dequeue() {
    if (!elements.empty()) {
        elements.erase(elements.begin());
    }
}

bool Queue::empty() {
    return elements.empty();
}

void Queue::print() {
    for (int i = 0; i < elements.size(); i++) {
        cout << elements[i] << '\n';
    }
}
