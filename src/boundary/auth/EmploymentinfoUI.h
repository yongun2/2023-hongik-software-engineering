#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTONFOUI_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTINFOUI_H


#include <fstream>
#include "../../controll/auth/Employmentinfo.h"

#define MAX_STRING 32

class EmploymentinfoUI {
private:
    FILE* output_file_pointer;
    Employmentinfo* Viewcontrol;

public:
    EmploymentinfoUI(FILE* outputFilePointer, Employmentinfo* ViewControl);

    void Employment_View();

};
#endif 