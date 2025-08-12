#include "CreateSheet.h"
#include "SpreadSheetDocument.h"


Document * CreateSheet::Create()
{
    return new SpreadSheetDocument{};
}