#include <iostream>
using namespace std;

List::Node::~Node()
{
    delete next;
}

List::~List()
{
    delete first;
}

void List::insert_front(int value)
{
    first = new Node {value, first};
}

void List::print() const
{
    Node const* current {first};
    if (current != nullptr)
    {
	      cout << current->value;
	      while (current->next != nullptr)
	      {
	          current = current->next;
	          cout << ' ' << current->value;
	      }
    }
}
