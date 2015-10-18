#include <iostream>
#include "Person.cpp"
using namespace std;

int main()
{
    Person a;
    Person b("Atef","Shady");
    Person c("Atef");
    b.Show();
    b.FormalShow();
    c.Show();
    c.FormalShow();
    return 0;
}
