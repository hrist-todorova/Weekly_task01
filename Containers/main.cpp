#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;

void TestStack()
{
    Stack<char> proba;
    //proba.print();

    proba.add('2');
    proba.add('4');
    proba.add('7');
    proba.add('9');
    //proba.print();
    proba.pop();

    proba += '3';
    proba.print();
}

/*void TestQueue()
{

    Queue p;
    p.add(5);
    p.add(5);
    p.add(5);

    p.print();


}*/

int main()
{
    TestStack();
    //TestQueue();

    return 0;
}
