//
// Created by 계용운 on 2023/05/21.
//

#include "CompanyMember.h"


CompanyMember::CompanyMember(const char *id, const char *password, GROUP group, const char *companyname,
                             const char *businessnum) : Member(id, password, COMPANY) {
    this->companyname = companyname;
    this->businessnum = businessnum;
}

string CompanyMember::get_detail() const {
    return this->companyname + " " + this->businessnum;
}


