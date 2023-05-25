//
// Created by 계용운 on 2023/05/21.
//

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_LOGOUTUI_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_LOGOUTUI_H


#include <cstdio>
#include "../../controll/auth/Logout.h"

/**
 * WriterName: 계용운
 * Description: 로그아웃 바운더리 클래스
 * WriteTime: 2023 05 26 03:00
 */
class LogoutUI {
private:
    FILE *output_file_pointer;
    Logout *logout_control;
public:
    LogoutUI(FILE *outputFilePointer, Logout *logoutControl);

    void select_logout();
};


#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_LOGOUTUI_H
