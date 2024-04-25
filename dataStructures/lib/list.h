#include <vector>

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
