#include "SqlConnection.h"
#include "SqlCommand.h"
#include "SqlRecordSet.h"
#include "MySqlConnection.h"
#include "MySqlCommand.h"
#include "MySqlRecordSet.h"
#include <iostream>
#include "SqlFactory.h"

#include "DbFactory.h"

#define SQL

void UsingFactory(DbFactory *pFactory){
    int dbtype = 0;
    Connection *pCon{};
    pCon = pFactory->CreateConnection();

    pCon->SetConnectionString("uid=chris;db=movies;table=actors");
    pCon->Open();

    Command *pCmd{};
    pCmd = pFactory->CreateCommand();
    
    pCmd->SetConnection(pCon);
    pCmd->SetCommand("Select * from actors;");
    RecordSet *pRec = pCmd->ExecuteQuery();

    while(pRec->HasNext()){
        std::cout << pRec->Get() << std::endl;
    }

    delete pCon;
    delete pCmd;
    delete pRec;

}



int main(){
    SqlFactory f;
    UsingFactory(&f);
    return 0;
}