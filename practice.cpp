#include <iostream>
using namespace std;

class B
{
public:
    ~B()
    {
        cout << "B";
    }
};

class A : public B
{
public:
    ~A()
    {
        cout << "A";
    }
};

int main()
{
    A a;
    return 0;
}