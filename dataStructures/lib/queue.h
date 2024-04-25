#include <vector>

using std::vector;

class Queue {
    vector<int> elements;

    public:
        void enqueue(int element);

        void dequeue();

        bool empty();

        void print();
};
