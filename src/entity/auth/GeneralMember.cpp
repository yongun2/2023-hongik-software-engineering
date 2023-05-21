//
// Created by 계용운 on 2023/05/21.
//

#include "GeneralMember.h"

GeneralMember::GeneralMember(const char *id, const char *password, const char *name, const char *residentNumber) : Member(id, password) {
    strncpy(this->name, name, MAX_STRING);
    strncpy(this->resident_number, residentNumber, MAX_STRING);
}

const char *GeneralMember::getName() const {
    return name;
}

const char *GeneralMember::getResidentNumber() const {
    return resident_number;
}
