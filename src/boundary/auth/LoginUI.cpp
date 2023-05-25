//
// Created by ���� on 2023/05/21.
//

#include "LoginUI.h"

/**
 * WriterName: 계용운
 * Description: 로그인 바운더리 생성자
 * WriteTime: 2023 05 26 03:00
 * @arg: FILE *inputFilePointer 읽기용 파일 포인터
 * @arg: FILE *outputFilePointer 쓰기용 파일 포인터
 * @arg: Login *loginControl 로그인 컨트롤
 */
LoginUI::LoginUI(FILE *inputFilePointer, FILE *outputFilePointer, Login *loginControl) : input_file_pointer(
        inputFilePointer), output_file_pointer(outputFilePointer), login_control(loginControl) {}

/**
 * WriterName: 계용운
 * Description: 로그인 관련 바운더리
 * WriteTime: 2023 05 26 03:00
 */
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
