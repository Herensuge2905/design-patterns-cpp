#include "Builder.h"
#include "ConcreteBuilder.h"
#include "Product.h"
#include "Director.h"


int main(){
    ConcreteBuilder builder;
    Director director(&builder);
    director.Construct();
    Product *p = builder.GetResult();
    delete p;
}