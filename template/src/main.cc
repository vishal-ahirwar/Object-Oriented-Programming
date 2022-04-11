#include <iostream>

template <typename T>
T min(const T &t1, const T &t2)
{
    if (t1 < t2)
    {
        return t1;
    }
    else
    {
        return t2;
    };
};

template <typename T>
T max(const T &t1, const T &t2)
{
    if (t1 > t2)
    {
        return t1;
    }
    else
    {
        return t2;
    };
};

template <class T>
T add(const T &a, const T &b)
{
    return (a + b);
};

template <class T>
int size(const T &a)
{
    std::cerr << "size of " << a << " : " << sizeof(a) << "\n";
    return sizeof(a);
};
template <typename T>
class ADT
{
private:
    T *data;
    int size = 0;
    int len = 0;

public:
    ADT(const int &);
    ~ADT() { delete[] this->data; };
    void append(const T &);
    void display() const;
};
template <typename T>
ADT<T>::ADT(const int &size)
{
    this->size = size;
    this->data = new T[this->size];
};
template <typename T>
void ADT<T>::append(const T &a)
{
    this->data[this->len] = a;
    ++this->len;
};

template <typename T>
void ADT<T>::display() const
{
    for (int i = 0; i < this->len; ++i)
    {
        std::cerr << "[" << i << "] : " << this->data[i] << "\n";
    };
};

int main()
{
    srand(time(0));
    constexpr char *StudentsName[] = {"Vishal", "Rohan", "Rakesh", "Rishi", "Vivan", "Siv", "Sam", "kanny", "shyam", "Hari", "love", "Dinesh", "piyush"};

    ADT<std::string> Students(100);
    for (int i = 0; i < 100; ++i)
    {
        Students.append(StudentsName[rand() % (sizeof(StudentsName) / sizeof(StudentsName[0])-1) + 1]);
    };
    Students.display();
    size("Hello, World");
    size(12);
    size(12.5);
    size(1.4f);
    size(true);
    size('A');

    std::cerr << "Hell, World!\n";

    return 0;
};
