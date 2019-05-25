template <class T>
struct Node{
  Node<T>* pNext; // указатель на следующий эл-т
  T value;		// значение
};

template <class T>
class StackList {
protected:
  Node<T>* pFirst;    // указатель на первый эл-т
  int size;			// текущий размер
public:
  StackList() { pFirst = 0; size = 0; }
 StackList(const StackList<T>& list)
	{
		size = list.size;
		for (int i = 0; i < list.size; i++)
		{
			Add(list[i]);
		}
	}

  void Push(T v);
  T Pop();
  bool IsEmpty();

  ~StackList() {
    if (size != 0)
    {
      Node<T>* current = pFirst;
      while (current != 0)
      {
        Node<T>* tmp = current;
        current = current->pNext;				
        delete tmp;
      }
    }

  }
};

