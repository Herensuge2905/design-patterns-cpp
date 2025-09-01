  #include "Alien.h"
  #include <iostream>

  
Alien::Alien(){
    std::cout<<"++++++ Alien() cosntructed\n";
}
Alien::~Alien()
{
    std::cout << "~~~~~~ Allen() Destroyed\n";
}
void Alien::Update(){
    std::cout << "@ ";

}