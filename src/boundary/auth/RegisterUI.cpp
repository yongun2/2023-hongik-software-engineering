//
// Created by ���� on 2023/05/20.
//

#include "RegisterUI.h"


/**
 * WriterName: 계용운
 * Description: 회원가입 바운더리 생성자
 * WriteTime: 2023 05 26 03:00
 * @arg: FILE *inputFilePointer 읽기용 파일 포인터
 * @arg: FILE *outputFilePointer 쓰기용 파일 포인터
 * @arg: Register *registerControl 회원가입 컨트롤
 */
RegisterUI::RegisterUI(FILE *inputFilePointer, FILE *outputFilePointer, Register *registerControl) : input_file_pointer(
        inputFilePointer), output_file_pointer(outputFilePointer), register_control(registerControl) {}


/**
* WriterName: 계용운
* Description: 회원가입 바운더리
* WriteTime: 2023 05 26 03:00
*/
void RegisterUI::select_register() {
    int user_type;

    char company_name[MAX_STRING], ssn[MAX_STRING];
    char name[MAX_STRING], registration_number[MAX_STRING];
    char id[MAX_STRING], password[MAX_STRING];
    string new_member_detail;

    fscanf(input_file_pointer, "%d", &user_type);

    fprintf(output_file_pointer, "1.1. ȸ������\n");
    switch (user_type) {
        case 1: {
            /** ȸ�� ȸ�� ȸ������ **/
            fscanf(input_file_pointer, "%s %s %s %s", company_name, ssn, id, password);

            /** ȸ�� ȸ�� ȸ������ ���� ȣ�� **/
            Member *new_member = new CompanyMember(id, password, COMPANY,company_name, ssn);
            new_member_detail = register_control->register_member(new_member);

            fprintf(output_file_pointer, "> 1 %s\n", new_member_detail.c_str());
            break;
        }
        case 2: {
            /** �Ϲ� ȸ�� ȸ������ **/
            fscanf(input_file_pointer, "%s %s %s %s", name, registration_number, id, password);

            /** �Ϲ� ȸ�� ȸ������ ���� ȣ�� **/
            Member *new_member = new GeneralMember(id, password, GENERAL, name, registration_number);
            new_member_detail = register_control->register_member(new_member);
            fprintf(output_file_pointer, "> 1 %s\n", new_member_detail.c_str());
            break;
        }
    }
}





