#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTWRITEUI_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTWRITEUI_H

#include <fstream>
#include "../../controll/auth/EmploymentWrite.h"
#include "../../entity/auth/MemberCollection.h"


#define MAX_STRING 32

class EmploymentWriteUI {
private:
    FILE* input_file_pointer;
    FILE* output_file_pointer;
    EmploymentWrite* register_control;
    MemberCollection* member_collection;

public:
    EmploymentWriteUI(MemberCollection* memberCollection,FILE* inputFilePointer, FILE* outputFilePointer, EmploymentWrite* EmploymentWriteControl);

    void select_register();

};

#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTWRITEUI_H
