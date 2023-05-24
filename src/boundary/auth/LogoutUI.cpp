//
// Created by 계용운 on 2023/05/21.
//

#include "LogoutUI.h"

/** 생성자 **/
LogoutUI::LogoutUI(FILE *inputFilePointer, FILE *outputFilePointer, Logout *logoutControl) : input_file_pointer(
        inputFilePointer), output_file_pointer(outputFilePointer), logout_control(logoutControl) {}


void LogoutUI::select_logout() {

    /** 현재 상태 출력 **/
    fprintf(output_file_pointer, "2.2. 로그아웃\n");
    /** 컨트롤 호출 **/
    string id = logout_control->logout();
    /** 로그아웃 아이디 출력 **/
    fprintf(output_file_pointer, "> %s\n", id.c_str());
}

