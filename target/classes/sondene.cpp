//denemedir lo
#include<iostream>
#include<vector>
#include<algorithm>
template<typename T>
class sondene
{
public:
    
    T a;
    int b;
public:
    sondene(T a, int b);
    ~sondene();
    T getA()
    {
        return a;
    }

    void setA(T a)
    {
        this.a = a;
    }
};
template<typename T>
sondene<T>::sondene(T a , int b) : a{a},b{b}
{
}
template<typename T>
sondene<T>::~sondene()
{
}


auto isGreater = [](auto a, auto b){ return a->b<b->b;};
auto print = [](auto a){ std::cout<< "a: "<< a->a<< " b: "<< a->b<< std::endl;};


int main(int args, char** argv)
{
    std::vector<sondene<std::string>*> vec ;
    vec.push_back(new sondene<std::string>("veloc", 12) );
     vec.push_back(new sondene<std::string>("asd", 2) );

    std::sort(vec.begin(), vec.end(),isGreater);
    std::for_each(vec.begin(), vec.end(), print);
    

    return 0;
}