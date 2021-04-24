//
// Created by mau14 on 14/4/21.
//

#ifndef PROYECTO_1_DATOS_II_SERVER_C__CONVERT_REQUEST_H
#define PROYECTO_1_DATOS_II_SERVER_C__CONVERT_REQUEST_H

#include "JSON_Management.h"
#include "istream"
#include "../Actions/Modify_Type.h"
#include "../Actions/Create_Type.h"
#include "../Actions/Search_Type.h"


using namespace std;
class Convert_request {

public:

    static void Select_Type_Message(const string &jsonString) {
        string message = JSON_Management::GetJSONString("action", jsonString);
        if (message == "CREATE") {
            Create_Type::Create_DataType<string>(jsonString);
        } else if (message == "MODIFY") {
            cout << "SOY UN ARCHIVO AL QUE VAN A MODIFICAR" << endl;
            Modify_Type::Modify_Datatype<string>(jsonString);
        } else if (message == "SEARCH") {
            cout << "SOY UN ARCHIVO AL QUE VAN A BUSCAR" << endl;
            Search_Type::Search_DataType(jsonString);
        }
    }
};


#endif //PROYECTO_1_DATOS_II_SERVER_C__CONVERT_REQUEST_H