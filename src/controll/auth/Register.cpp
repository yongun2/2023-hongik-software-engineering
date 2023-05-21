//
// Created by 계용운 on 2023/05/20.
//

#include "Register.h"


Register::Register(vector<CompanyMember> *companyMemberRepository, vector<GeneralMember> *generalMemberRepository)
        : company_member_repository(companyMemberRepository), general_member_repository(generalMemberRepository) {

}

void Register::register_company_member(const char *id, const char *password, const char *company_name,
                                       const char *ssn) {

    CompanyMember *member = new CompanyMember(id, password, company_name, ssn);
    company_member_repository->push_back(*member);

}

void Register::register_general_member(const char *id, const char *password, const char *name,
                                       const char *registration_number) {

    GeneralMember *member = new GeneralMember(id, password, name, registration_number);
    general_member_repository->push_back(*member);
}

