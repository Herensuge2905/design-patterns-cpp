#pragma once
#include <memory>
#include "Document.h"

//class Document;
class Application
{
    DocumentPtr m_pDocument;
public:
    void New();
    void Open();
    void Save();
};