#ifndef LIST_H
#define LIST_H

class List
{
    public:
        List() = default;
        ~List();
    
        void insert_front(int value);
        void print() const;
        void print_reverse() const;
    
    private:
        struct Node; // forward declaration
        static void print_reverse(Node const* current);
    
        Node* first {nullptr};
        
};

struct List::Node
{
    ~Node();
    int value;
    Node* next;
};

#endif // LIST_H
