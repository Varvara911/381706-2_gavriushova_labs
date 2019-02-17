#include "list.h";


template <class T>
void List<T>::Insert(int index, T value) // äîáàâëåíèå êóäà óãîäíî
{
  int i = 0;
  Node<T>* current = pFirst;
  if (current == 0)
  {
    Node<T>* newOne = new Node<T>();
    newOne->pNext = 0;
    newOne->value = value;
    pFirst = newOne;
  }
  else
  {
    while (i < index && current->pNext != 0)
    {
      current = current->pNext;
      ++i;
    }
    Node<T>* newOne = new Node<T>();
    newOne->pNext = current->pNext;
    newOne->value = value;
    current->pNext = newOne;
  }

  ++size;
}

template <class T>
void List<T>::Add(T value) // äîáàâëåíèå â êîíåö
{
  Insert(size, value);
}

template <class T>
T List<T>::operator[](int index)
{
  if (index >= size || index < 0)
    throw "out of range";

  int i = 0;
  Node<T>* current = pFirst;

  while (i < index && current->pNext != 0)
  {
    current = current->pNext;
    ++i;
  }

  return current->value;
}

template <class T>
void List<T>::Delete(int index)
{
  if (index >= size || index < 0)
    throw "out of range";

  if (index == 0)
  {
    Node<T>* tmp = pFirst;
    pFirst = pFirst->pNext;
    delete tmp;
    return;
  }

  int i = 0;
  Node<T>* current = pFirst;

  while (i < index && current->pNext != 0)
  {
    current = current->pNext;
    ++i;
  }

  Node<T>* tmp = current->pNext;
  current->pNext = current->pNext->pNext;
  delete tmp;

  --size;
}
