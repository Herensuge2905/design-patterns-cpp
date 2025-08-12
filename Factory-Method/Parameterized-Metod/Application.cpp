#include "Application.h"
#include "DocumentFactory.h"

void Application::New()
{

    m_pDocument = DocumentFactory::Create("text");
}
void Application::Open()
{
    
    m_pDocument = DocumentFactory::Create("spreadSheeet");
    m_pDocument->Read();
}
void Application::Save()
{
    m_pDocument = DocumentFactory::Create("text");
    m_pDocument->Write();
}
