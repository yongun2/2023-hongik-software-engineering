//
// Created by 계용운 on 2023/05/21.
//

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_COMPANYMEMBER_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_COMPANYMEMBER_H


#include "Member.h"

class CompanyMember : public Member{
private:
    char company_name[MAX_STRING];
    char ssn[MAX_STRING];
public:
    CompanyMember(const char *id, const char *password, const char *companyName, const char *ssn);

    const char *getCompanyName() const;

    const char *getSsn() const;
};


#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_COMPANYMEMBER_H
