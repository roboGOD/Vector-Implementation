#include "Vector"

int main()
{
    Vector v;
    std::cout << "Capacity: " <<v.capacity() << std::endl;
    for(int i=0; i<20; i++)
        v.append(i);
        
    std::cout << v << std::endl;
    std::cout << "Capacity: " << v.capacity() << std::endl;
        
    int a = v[0];
    a++;
    v[0] = 200;
    v[1] = 300;
    std::cout << v[40] << std::endl;
    std::cout << a << std::endl;
    std::cout << v << std::endl;

    v.insert(0, 500);
    v.insert(v.size(), 350);
    v.insert(10, 999);
    
    std::cout << v << std::endl;

    std::cin.get();
}

