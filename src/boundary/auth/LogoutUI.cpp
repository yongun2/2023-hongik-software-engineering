//
// Created by 계용운 on 2023/05/21.
//

#include "LogoutUI.h"


LogoutUI::LogoutUI(FILE *outputFilePointer, Logout *logoutControl) : output_file_pointer(outputFilePointer),
                                                                     logout_control(logoutControl) {}


void LogoutUI::select_logout() {

    /** 현재 상태 출력 **/
    fprintf(output_file_pointer, "2.2. 로그아웃\n");
    /** 컨트롤 호출 **/
    string id = logout_control->logout();
    /** 로그아웃 아이디 출력 **/
    fprintf(output_file_pointer, "> %s\n", id.c_str());
}


