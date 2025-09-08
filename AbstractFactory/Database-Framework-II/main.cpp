#include "SqlConnection.h"
#include "SqlCommand.h"
#include "SqlRecordSet.h"
#include "MySqlConnection.h"
#include "MySqlCommand.h"
#include "MySqlRecordSet.h"
#include <iostream>
#include "DbFactory.h"

#define SQL

void FactoryMethod(){
    int dbtype = 0;
    Connection *pCon{DbFactory::CreateConnection("sql")};

    pCon->SetConnectionString("uid=chris;db=movies;table=actors");
    pCon->Open();

    Command *pCmd{DbFactory::CreateCommand("sql")};

    
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
    FactoryMethod();
    return 0;
}