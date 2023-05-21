//
// Created by 계용운 on 2023/05/21.
//

#include "CompanyMember.h"

CompanyMember::CompanyMember(const char *id, const char *password, const char *companyName, const char *ssn) : Member(id, password){
    strncpy(this->company_name, companyName, MAX_STRING);
    strncpy(this->ssn, ssn, MAX_STRING);
}

const char *CompanyMember::getCompanyName() const {
    return company_name;
}

const char *CompanyMember::getSsn() const {
    return ssn;
}

