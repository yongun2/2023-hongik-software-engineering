//
// Created by 계용운 on 2023/05/21.
//

#include "LoginUI.h"

LoginUI::LoginUI(FILE *inputFilePointer, FILE *outputFilePointer, Login *loginControl) : input_file_pointer(
        inputFilePointer), output_file_pointer(outputFilePointer), login_control(loginControl) {}


void LoginUI::select_login() {

    char id[MAX_STRING], password[MAX_STRING];

    /** 현재 상태 출력 **/
    fprintf(output_file_pointer, "2.1. 로그인\n");
    /** 로그인 **/
    fscanf(input_file_pointer, "%s %s", id, password);
    /** 컨트롤 호출 **/
    string login_member = login_control->login(id, password);
    /** 아이디 비밀번호 출력 **/
    fprintf(output_file_pointer, "> %s\n", login_member.c_str());

}
