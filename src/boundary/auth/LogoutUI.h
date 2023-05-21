//
// Created by 계용운 on 2023/05/21.
//

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_LOGOUTUI_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_LOGOUTUI_H


#include <cstdio>
#include "../../controll/auth/Logout.h"

#define MAX_STRING 32

class LogoutUI {
private:
    FILE *input_file_pointer;
    FILE *output_file_pointer;
    Logout *logout_control;
public:
    LogoutUI(FILE *inputFilePointer, FILE *outputFilePointer, Logout *logoutControl);

    void select_logout();
};


#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_LOGOUTUI_H
