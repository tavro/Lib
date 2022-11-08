#include "list.h"
#include <iostream>

int main()
{
    List list { };
    for ( int n; cin >> n; )
    {
        list.insert_front(n);
    }
    list.print();
  
    return 0;
}
