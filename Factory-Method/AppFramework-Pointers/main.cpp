#include "CreateText.h"

#include "CreateSheet.h"

int main(){
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    CreateSheet app;;
    app.New();
    app.Open();
    app.Save();
    return 0;
}