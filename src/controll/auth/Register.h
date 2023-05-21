//
// Created by 계용운 on 2023/05/20.
//

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_REGISTER_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_REGISTER_H

#include <vector>
#include "../../entity/auth/Member.h"
#include "../../entity/auth/CompanyMember.h"
#include "../../entity/auth/GeneralMember.h"

using std::vector;

class Register {
private:
    vector<CompanyMember> *company_member_repository;
    vector<GeneralMember> *general_member_repository;
public:

    Register(vector<CompanyMember> *companyMemberRepository, vector<GeneralMember> *generalMemberRepository);

    void register_company_member(const char *id, const char *password, const char *company_name, const char *ssn);

    void register_general_member(const char *id, const char *password, const char *name, const char *registration_number);

};


#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_REGISTER_H
