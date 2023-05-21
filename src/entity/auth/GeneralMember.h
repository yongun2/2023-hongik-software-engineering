//
// Created by 계용운 on 2023/05/21.
//

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_GENERALMEMBER_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_GENERALMEMBER_H


#include "Member.h"

class GeneralMember : public Member{
private:
    char name[MAX_STRING];
    char resident_number[MAX_STRING];
public:
    GeneralMember(const char *id, const char *password, const char *name, const char *residentNumber);

    const char *getName() const;

    const char *getResidentNumber() const;
};


#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_GENERALMEMBER_H
