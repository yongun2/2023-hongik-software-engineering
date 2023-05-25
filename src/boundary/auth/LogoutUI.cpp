//
// Created by ���� on 2023/05/21.
//

#include "LogoutUI.h"

/**
 * WriterName: 계용운
 * Description: 로그아웃 바운더리 생성자
 * WriteTime: 2023 05 26 03:00
 * @arg: FILE *inputFilePointer 읽기용 파일 포인터
 * @arg: FILE *outputFilePointer 쓰기용 파일 포인터
 * @arg: Logout *logoutControl 로그아웃 컨트롤
 */
LogoutUI::LogoutUI(FILE *outputFilePointer, Logout *logoutControl) : output_file_pointer(outputFilePointer),
                                                                     logout_control(logoutControl) {}

/**
 * WriterName: 계용운
 * Description: 로그아웃 바운더리
 * WriteTime: 2023 05 26 03:00
 */
void LogoutUI::select_logout() {

    /** ���� ���� ��� **/
    fprintf(output_file_pointer, "2.2. �α׾ƿ�\n");
    /** ��Ʈ�� ȣ�� **/
    string id = logout_control->logout();
    /** �α׾ƿ� ���̵� ��� **/
    fprintf(output_file_pointer, "> %s \n", id.c_str());
}


