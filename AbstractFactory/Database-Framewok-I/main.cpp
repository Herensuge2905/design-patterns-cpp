#include "SqlConnection.h"
#include "SqlCommand.h"
#include "SqlRecordSet.h"
#include "MySqlConnection.h"
#include "MySqlCommand.h"
#include "MySqlRecordSet.h"
#include <iostream>

#define SQL

int main(){
    Connection *pCon{};
#ifdef SQL
    pCon = new SqlConnection();
#else defined MYSQL
    pCon = new MySqlConnection();
#endif

    pCon->SetConnectionString("uid=chris;db=movies;table=actors");
    pCon->Open();

    Command *pCmd{};

#ifdef SQL
    pCmd = new SqlCommand();
#else defined MYSQL
    pCmd = new MySqlCommand();
#endif
    
    pCmd->SetConnection(pCon);
    pCmd->SetCommand("Select * from actors;");
    RecordSet *pRec = pCmd->ExecuteQuery();

    while(pRec->HasNext()){
        std::cout << pRec->Get() << std::endl;
    }

    delete pCon;
    delete pCmd;
    delete pRec;

    return 0;
}