#include "Vector"
#include <string>

int main()
{
    Vector<int> v;
    std::cout << "Capacity: " << v.capacity() << std::endl;
    for(int i=1; i<=20; i++)
        v.append(i);
        
    //std::cout << v << std::endl;
    v.print();
    std::cout << "Capacity: " << v.capacity() << std::endl;
    
    int a = v[0];
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    v[0] = 200;
    v[1] = 300;
    std::cout << v[40] << std::endl;
    v.print();

    v.insert(0, 500);
    v.insert(v.size(), 350);
    v.insert(10, 999);
    
    v.print();
    
    Vector<std::string> v2;
    v2.append("Hello");
    v2.append("I");
    v2.append("roboGOD");
    v2.insert(2, "Am");
    v2.print();

    std::cin.get();
}

