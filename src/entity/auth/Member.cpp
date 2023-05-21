//
// Created by 계용운 on 2023/05/21.
//

#include "Member.h"


Member::Member(const char *id, const char *password) {
    strncpy(this->id, id, MAX_STRING);
    strncpy(this->password, password, MAX_STRING);
}

const char *Member::getId() const {
    return id;
}

const char *Member::getPassword() const {
    return password;
}
