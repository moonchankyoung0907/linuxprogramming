#include <iostream>
using namespace std;

template <class T1, class T2>
class GClass {
    T1 data1;
    T2 data2;
public:
    GClass() : data1{}, data2{} {}
    void set(T1 a, T2 b);
    void get(T1& a, T2& b);
    void swap();
};

template <class T1, class T2>
void GClass<T1, T2>::set(T1 a, T2 b) {
    data1 = a;
    data2 = b;
}

template <class T1, class T2>
void GClass<T1, T2>::get(T1& a, T2& b) {
    a = data1;
    b = data2;
}

template <class T1, class T2>
void GClass<T1, T2>::swap() {
    T1 temp = data1;
    data1 = data2;
    data2 = temp;
}

int main() {
    int a, b;
    GClass<int, int> x;
    x.set(2, 5);
    x.get(a, b);
    cout << "a=" << a << '\t' << "b=" << b << endl;

    x.swap();
    x.get(a, b);
    cout << "a=" << a << '\t' << "b=" << b << endl;

    float c, d;
    GClass<float, float> y;
    y.set(3.14f, 6.28f);
    y.get(c, d);
    cout << "c=" << c << '\t' << "d=" << d << endl;

    y.swap();
    y.get(c, d);
    cout << "c=" << c << '\t' << "d=" << d << endl;

    return 0;
}

