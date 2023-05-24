//
// Created by 계용운 on 2023/05/21.
//

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_COMPANYMEMBER_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_COMPANYMEMBER_H

#include<iostream>
#include "Member.h"

class CompanyMember:public Member{
private:
    string companyname;
    string businessnum;
public:
    CompanyMember(const char *id, const char *password, GROUP group, const char *companyname, const char *businessnum);

    string get_detail() const override;

};


#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_COMPANYMEMBER_H
