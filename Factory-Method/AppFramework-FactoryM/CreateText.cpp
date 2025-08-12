#include "CreateText.h"
#include "TextDocument.h"

Document * CreateText::Create()
{
    return new TextDocument{};
}