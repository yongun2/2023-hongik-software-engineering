//
// Created by 계용운 on 2023/05/21.
//

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_LOGINUI_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_LOGINUI_H


#include <cstdio>
#include "../../controll/auth/Login.h"


/**
 * @var input_file_pointer : input.txt에서 명령어를 읽어 오기 위한 파일 포인터
 * @var output_file_pointer : output.txt에 출력하기 위한 파일 포인터
 * @var logout_control : 로그아웃 로직을 수행하는 컨트롤
 * LoginUI 객체 생성시에 주입을 받아야 합니다.
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
