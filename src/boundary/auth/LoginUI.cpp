//
// Created by ���� on 2023/05/21.
//

#include "LoginUI.h"

LoginUI::LoginUI(FILE *inputFilePointer, FILE *outputFilePointer, Login *loginControl) : input_file_pointer(
        inputFilePointer), output_file_pointer(outputFilePointer), login_control(loginControl) {}


void LoginUI::select_login() {

    char id[MAX_STRING], password[MAX_STRING];

    /** ���� ���� ��� **/
    fprintf(output_file_pointer, "2.1. �α���\n");
    /** �α��� **/
    fscanf(input_file_pointer, "%s %s", id, password);
    /** ��Ʈ�� ȣ�� **/
    string login_member = login_control->login(id, password);
    /** ���̵� ��й�ȣ ��� **/
    fprintf(output_file_pointer, "> %s\n", login_member.c_str());

}
