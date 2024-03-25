class ArrayList
{
private:

    int *L;
    int maxSize;
    int curSize;

public:

    ArrayList(int maxSize);
    ~ArrayList();

    int size();
    int indexOf(int e);
    int get(int i); 
    void set(int i, int e);
    int remove(int i);
    void add(int i, int e);

    void display();
    int min();
    void clear();
    int max();
    bool isempty();

    void bubbleSort();
    void bubbleSort_2();
};