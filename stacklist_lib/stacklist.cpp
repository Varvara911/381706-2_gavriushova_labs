#include "stacklist.h";

// óáðàòü?
template <class T>
void StackList<T>::Push(T value) // äîáàâëåíèå â íà÷àëî
{
  Node<T>* newOne = new Node<T>();
  newOne->pNext = pFirst;
  newOne->value = value;
  pFirst = newOne;
  ++size;
}

template <class T>
T StackList<T>::Pop()
{
  if (index >= size || index < 0)
    throw "out of range";

  Node<T> tmp = *pFirst;
  Node<T>* p = pFirst; // óêàçàòåëü íà ïåðâûé ýëåìåíò

  pFirst = pFirst->pNext;
  delete p;
  --size;
  return tmp;
}

template <class T>
bool StackList<T>::IsEmpty()
{
  return (pFirst == 0);
}
