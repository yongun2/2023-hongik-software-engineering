//
// Created by ���� on 2023/05/21.
//

#include "LogoutUI.h"


LogoutUI::LogoutUI(FILE *outputFilePointer, Logout *logoutControl) : output_file_pointer(outputFilePointer),
                                                                     logout_control(logoutControl) {}


void LogoutUI::select_logout() {

    /** ���� ���� ��� **/
    fprintf(output_file_pointer, "2.2. �α׾ƿ�\n");
    /** ��Ʈ�� ȣ�� **/
    string id = logout_control->logout();
    /** �α׾ƿ� ���̵� ��� **/
    fprintf(output_file_pointer, "> %s \n", id.c_str());
}


