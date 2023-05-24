//
// Created by 계용운 on 2023/05/21.
//

#include "GeneralMember.h"


GeneralMember::GeneralMember(const char *id, const char *password, GROUP group, const char *name,
                             const char *resident_number) : Member(id, password, GENERAL){
    this->name = name;
    this->resident_number = resident_number;
}


string GeneralMember::get_detail() const {
    return this->name + " " + this->resident_number;
}

