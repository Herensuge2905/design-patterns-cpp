#include "CreateText.h"

#include "CreateSheet.h"

int main(){
    CreateSheet app;
    app.New();
    app.Open();
    app.Save();
    return 0;
}