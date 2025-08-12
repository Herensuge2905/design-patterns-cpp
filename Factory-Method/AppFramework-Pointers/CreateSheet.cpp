#include "CreateSheet.h"
#include "SpreadSheetDocument.h"


DocumentPtr CreateSheet::Create()
{
    return std::make_unique<SpreadSheetDocument>();
}