#include "creator.h"
#include "product.h"

void Creator::AnOperation()
{
    m_pProduct = Create();
    m_pProduct->Operation();
}