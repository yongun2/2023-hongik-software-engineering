//
// Created by 계용운 on 2023/05/20.
//

#include "RegisterUI.h"

RegisterUI::RegisterUI(FILE *inputFilePointer, FILE *outputFilePointer, Register *registerControl) : input_file_pointer(
        inputFilePointer), output_file_pointer(outputFilePointer), register_control(registerControl) {}


void RegisterUI::select_register() {
    int user_type;

    char company_name[MAX_STRING], ssn[MAX_STRING];
    char name[MAX_STRING], registration_number[MAX_STRING];
    char id[MAX_STRING], password[MAX_STRING];
    string new_member_detail;

    fscanf(input_file_pointer, "%d", &user_type);

    fprintf(output_file_pointer, "1.1. 회원가입\n");
    switch (user_type) {
        case 1: {
            /** 회사 회원 회원가입 **/
            fscanf(input_file_pointer, "%s %s %s %s", company_name, ssn, id, password);

            /** 회사 회원 회원가입 로직 호출 **/
            Member *new_member = new CompanyMember(id, password, COMPANY,company_name, ssn);
            new_member_detail = register_control->register_member(new_member);

            fprintf(output_file_pointer, "> 1 %s\n", new_member_detail.c_str());
            break;
        }
        case 2: {
            /** 일반 회원 회원가입 **/
            fscanf(input_file_pointer, "%s %s %s %s", name, registration_number, id, password);

            /** 일반 회원 회원가입 로직 호출 **/
            Member *new_member = new GeneralMember(id, password, GENERAL, name, registration_number);
            new_member_detail = register_control->register_member(new_member);
            fprintf(output_file_pointer, "> 1 %s\n", new_member_detail.c_str());
            break;
        }
    }
}





