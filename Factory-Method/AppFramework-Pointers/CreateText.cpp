#include "CreateText.h"
#include "TextDocument.h"

DocumentPtr CreateText::Create()
{
    return std::make_unique<TextDocument>();
}