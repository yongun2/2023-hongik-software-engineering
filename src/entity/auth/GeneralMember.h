//
// Created by 계용운 on 2023/05/21.
//

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_GENERALMEMBER_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_GENERALMEMBER_H

#include<iostream>
#include "Member.h"

class GeneralMember : public Member{
private:
    string name;
    string resident_number;
public:
    GeneralMember(const char *id, const char *password, GROUP group, const char* name, const char* resident_number);

    string get_detail() const override;
};


#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_GENERALMEMBER_H
