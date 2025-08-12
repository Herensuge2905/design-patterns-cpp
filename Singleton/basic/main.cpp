#include "singleton.h"

int main(){
    Singleton &s = Singleton::Instance();
    s.MethodA();
}