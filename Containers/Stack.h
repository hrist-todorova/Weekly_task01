#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <cstring>

using namespace std;

int const MAX1 = 10;

template <typename T>
class Stack{
private:
    T a[MAX1];
    int top;

public:
    Stack();
    Stack& operator+=(T);
    bool empty() const;
    bool full() const;
    T peek() const;
    void add(T);
    T pop();
    void print();

};

int const EMPTY_STACK = -1; // празен стек

template <typename T>
Stack<T>::Stack(){
    top = EMPTY_STACK; // конструктор по подразбиране
}

template <typename T>
bool Stack<T>::empty() const{
    return top == EMPTY_STACK; // ако top=-1 => стекът е празен
}

template <typename T>
bool Stack<T>::full() const{
    return top == MAX1-1; //MAX-1, защото индексацията започва от 0
}

template <typename T>
T Stack<T>::peek() const{
    if (empty()) // ако стекът е празен
    {
        cout << "Грешка: опит за поглеждане в празен стек!" << endl;
        return 0;
    }

    return a[top];
}

template <typename T>
void Stack<T>::add(T x){
    if (full())
    {
        cout << "Грешка: опит за включване в пълен стек!" << endl;
    }
    else
    {
      a[++top]= x;
    }
}

template <typename T>
T Stack<T>::pop(){
    if (empty())
    {
        cout << "Грешка: опит за изключване от празен стек!" << endl;
        return 0;
    }

    return a[top--];
}

template <typename T>
Stack<T>& Stack<T>::operator+=(T x){
    if (full())
    {
        cout << "Грешка: опит за включване в пълен стек!" << endl;
    }
    else
    {
        a[++top] = x;
    }

    return *this;
}

template <typename T>
void Stack<T>::print(){
    if(empty())
    {
        cout << "Стекът е празен!" << endl;
    }

    for (int i=top; i>=0; i--)
    {
        cout << a[i] << " ";
    }
}

#endif // STACK_H_INCLUDED
