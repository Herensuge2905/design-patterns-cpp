#include "creator.h"
#include "concreteProduct.h"

void Creator::AnOperation()
{
    m_pProduct = new ConcreteProduct();
    m_pProduct->Operation();
}