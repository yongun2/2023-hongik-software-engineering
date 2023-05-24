#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTINQUIRYANDAPPLYUI_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTINQUIRYANDAPPLYUI_H


#include <fstream>
#include "../../controll/auth/EmploymentInquiryAndApply.h"


#define MAX_STRING 32

class EmploymentInquiryAndApplyUI {
private:
    FILE* input_file_pointer;
    FILE* output_file_pointer;
    EmploymentInquiryAndApply* Viewcontrol;

public:
    EmploymentInquiryAndApplyUI(FILE* inputFilePointer,FILE* outputFilePointer, EmploymentInquiryAndApply* ViewControl);

    void Employment_View();

};
#endif 
