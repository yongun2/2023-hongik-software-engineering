//
// Created by 계용운 on 2023/05/21.
//

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_LOGOUTUI_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_LOGOUTUI_H


#include <cstdio>
#include "../../controll/auth/Logout.h"

/**
 * @var output_file_pointer : output.txt에 출력하기 위한 파일 포인터
 * @var logout_control : 로그아웃 로직을 수행하는 컨트롤
 * LogoutUI 객체 생성시에 주입을 받아야 합니다.
 */
class LogoutUI {
private:
    FILE *output_file_pointer;
    Logout *logout_control;
public:
    LogoutUI(FILE *inputFilePointer, FILE *outputFilePointer, Logout *logoutControl);

    void select_logout();
};


#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_LOGOUTUI_H
