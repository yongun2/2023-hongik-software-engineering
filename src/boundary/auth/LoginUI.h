//
// Created by 계용운 on 2023/05/21.
//

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_LOGINUI_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_LOGINUI_H


#include <cstdio>
#include "../../controll/auth/Login.h"


/**
 * WriterName: 계용운
 * Description: 로그인 관련 UI 제공 바운더리 클래스
 * WriteTime: 2023 05 26 03:00
 */
class LoginUI {
private:
    FILE *input_file_pointer;
    FILE *output_file_pointer;
    Login *login_control;
public:

    LoginUI(FILE *inputFilePointer, FILE *outputFilePointer, Login *loginControl);

    void select_login();
};


#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_LOGINUI_H
