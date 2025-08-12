#pragma once

class Document;

class Application
{
    Document * m_pDocument;
public:
    void New();
    void Open();
    void Save();
    virtual Document* Create(){return nullptr;};
};