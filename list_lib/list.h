template <class T>
struct Elem{
  Elem<T>* pNext; // указатель на следующий эл-т
  T value;		// значение
};

template <class T>
class List {
protected:
  Elem<T>* pFirst;    // указатель на первый эл-т
  int size;			// текущий размер
public:
  List() { pFirst = 0; size = 0; }
  List(const List<T>& list) 
  {
    size = list.size;
    for (int i = 0; i < list.size; i++)
    {
      Add(list[i]);
    }
  }

  void Add(T v);
  T operator[](int i);
  void Insert(int i, T value);
  void Delete(int i);

  ~List() {
    if (size != 0)
    {
      Elem<T>* current = pFirst;
      while (current != 0)
    {
        Node<T>* tmp = current;
        current = current->pNext;				
        delete tmp;
      }
    }
  }
};

