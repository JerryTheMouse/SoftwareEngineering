#include <iostream>
#include "Move.h"
using namespace std;

int main()
{
    Move a (0.6,0.8);
    a.showmove();
    a.reset();
    Move b (0.9,0.6);
    Move c = a.add(b);
    c.showmove();
    return 0;
}
