#include <vector>

using std::vector;

class Stack {
    vector<int> elements;

    public:
        void push(int element);

        void pop();

        bool empty();

        void print();
};
