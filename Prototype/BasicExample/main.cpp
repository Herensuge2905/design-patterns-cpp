#include "Client.h"
#include "ConcretePrototype1.h"
int main(){
    Client c;
    c.SetPrototype(new ConcretePrototype1{});
    c.Operation();
}