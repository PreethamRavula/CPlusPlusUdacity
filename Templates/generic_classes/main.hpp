#include<iostream>

using namespace std;

/*header file*/
template <class T>
class Multiplier
{
        T M1;
        T M2;
        T product;
    public:
        void setM1(T in1);
        void setM2(T in2);
        void setProduct();
        void printEquation();
        T getM1();
        T getM2();
        T getProduct();
};

template <class T>
void Multiplier<T>::setM1(T in1)
{
    M1 = in1;
}

template <class T>
void Multiplier<T>::setM2(T in2)
{
    M2 = in2;
}

template <class T>
void Multiplier<T>::setProduct()
{
    product = M1 * M2;
}

template <class T>
void Multiplier<T>::printEquation()
{
    std::cout << M1 << " * " << M2 << " = " << product;
}

template <class T>
T Multiplier<T>::getM1()
{
    return M1;
}

template <class T>
T Multiplier<T>::getM2()
{
    return M2;
}

template <class T>
T Multiplier<T>::getProduct()
{
    return product;
}
