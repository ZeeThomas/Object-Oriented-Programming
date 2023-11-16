#include <iostream>
using namespace std;
template<typename T>
class myVector
{
public:
    T* vec;
    int numOfElements;
    int capacity;
    myVector()
    {
        numOfElements = 0;
        capacity = 4;
        vec = new T[capacity];
    }
    myVector(int capacity)
    {
        numOfElements = 0;
        this->capacity = capacity;
        vec = new T[capacity];
    }
    myVector(const myVector& vector)
    {
        capacity = vector.capactiy;
        numOfElements = vector.numOfElements;
        vec = vector.vec;
    }
    void print()
    {
        cout << "Vec: (";
        for (int i = 0; i < numOfElements; i++)
        {
            cout << vec[i] << " ";
        }
        cout << ")"<<endl;
    }
    void insertBeg(T val)
    {   
        T holder;
        numOfElements++;
        for (int i = numOfElements-1; i > 0; i--)
        {
            vec[i] = vec[i-1];
        }
        vec[0] = val;
        increaseCapacity();
    }
    void insertEnd(T val)
    {
        numOfElements++;
        vec[numOfElements - 1] = val;
        increaseCapacity();
    }
    void removeBeg()
    {
        numOfElements--;
        for (int i = 0; i < numOfElements; i++)
        {
            vec[i] = vec[i + 1];
        }
        decreaseCapacity();
    }
    void removeEnd()
    {
        vec[--numOfElements];
        decreaseCapacity();
    }
    void increaseCapacity()
    {
        if (numOfElements == capacity)
        {
            capacity *= 2;
        }
    }
    void decreaseCapacity()
    {
        if (numOfElements == (1/2 *capacity))
        {
            capacity *= (1 / 2);
        }
    }
    bool operator==(const myVector& secondVector)
    {
        for (int i = 0; i < numOfElements; i++)
        {
            if (vec[i] != secondVector.vec[i])
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{ 
    cout << "intVector: " << endl;
    myVector<int> intVector;
    intVector.insertEnd(4);
    intVector.print();
    intVector.insertBeg(3);
    intVector.print();
    intVector.insertEnd(6);
    intVector.print();
    intVector.insertEnd(2);
    intVector.print();
    intVector.insertBeg(1);
    intVector.print();
    intVector.removeEnd();
    intVector.print();
    intVector.removeBeg();
    intVector.print();
    //vector 2
    cout << "intVector2" << endl;
    myVector<int> intVector2;
    intVector2.insertEnd(4);
    intVector2.print();
    intVector2.insertBeg(7);
    intVector2.print();
    intVector2.insertEnd(6);
    intVector2.print();
    intVector2.insertEnd(2);
    intVector2.print();
    intVector2.insertBeg(1);
    intVector2.print();
    intVector2.removeEnd();
    intVector2.print();
    intVector2.removeBeg();
    intVector2.print();

    //compare vector1 and vector 2d
    cout << "Comparing intVector and intVector2: "<<(intVector == intVector2) << endl;
    
    //char vector1
    cout << "charVector: " << endl;
    myVector<char> charVector;
    charVector.insertBeg('a');
    charVector.print();
    charVector.insertEnd('c');
    charVector.print();
    charVector.insertBeg('z');
    charVector.print();
    charVector.insertBeg('p');
    charVector.print();
    charVector.insertEnd('l');
    charVector.print();
    charVector.insertEnd('l');
    charVector.print();
    charVector.insertBeg('y');
    charVector.print();
    charVector.removeBeg();
    charVector.print();
    charVector.removeBeg();
    charVector.print();
    charVector.removeEnd();
    charVector.print();

    //charVector2
    myVector <char> charVector2;

    charVector2.insertEnd('v');
    charVector2.print();
    charVector2.insertEnd('u');
    charVector2.print();
    charVector2.insertBeg('m');
    charVector2.print();
    charVector2.insertEnd('o');
    charVector2.print();
    charVector2.insertBeg('y');
    charVector2.print();
    charVector2.insertEnd('l');
    charVector2.print();
    charVector2.removeBeg();
    charVector2.print();
    charVector2.removeBeg();
    charVector2.print();
    charVector2.removeBeg();
    charVector2.print();
    charVector2.removeBeg();
    charVector2.print();
    charVector2.removeBeg();
    charVector2.print();
    charVector2.insertBeg('c');
    charVector2.print();
    charVector2.insertBeg('a');
    charVector2.print();
    charVector2.insertBeg('z');
    charVector2.print();
    //comparting charVector and charVector2
    cout << "Comparing charVector and charVector2: " << (charVector == charVector2) << endl;

} 