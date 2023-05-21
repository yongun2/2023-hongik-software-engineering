//
// Created by 계용운 on 2023/05/20.
//

#include "RegisterUI.h"
#include "../../entity/auth/CompanyMember.h"
#include "../../entity/auth/GeneralMember.h"

RegisterUI::RegisterUI(FILE *inputFilePointer, FILE *outputFilePointer, Register *registerControl) : input_file_pointer(
        inputFilePointer), output_file_pointer(outputFilePointer), register_control(registerControl) {}


void RegisterUI::select_register() {
    int user_type;

    char company_name[MAX_STRING], ssn[MAX_STRING];
    char name[MAX_STRING], registration_number[MAX_STRING];
    char id[MAX_STRING], password[MAX_STRING];

    fscanf(input_file_pointer, "%d", &user_type);

    fprintf(output_file_pointer, "1.1. 회원가입\n");
    switch (user_type) {
        case 1: {
            /** 회사 회원 회원가입 **/
            fscanf(input_file_pointer, "%s %s %s %s", company_name, ssn, id, password);

            /** 회사 회원 회원가입 로직 호출 **/
            register_control->register_company_member(id, password, company_name, ssn);

            fprintf(output_file_pointer, "> 1 %s %s %s %s\n", company_name, ssn, id, password);
            break;
        }
        case 2: {
            /** 일반 회원 회원가입 **/
            fscanf(input_file_pointer, "%s %s %s %s", name, registration_number, id, password);

            /** 일반 회원 회원가입 로직 호출 **/
            register_control->register_general_member(id, password, name, registration_number);

            fprintf(output_file_pointer, "> 2 %s %s %s %s\n", name, registration_number, id, password);
            break;
        }
    }



}





