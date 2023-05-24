//
// Created by 계용운 on 2023/05/23.
//

#include "Member.h"

Member::Member(const char *id, const char *password, GROUP group): is_login(false), group(group){
    this->id = id;
    this->password = password;
}

string Member::get_id() const {
    return this->id;
}

string Member::get_password() const {
    return this->password;
}

void Member::set_is_login(bool login_status) {
    this->is_login = login_status;
}

bool Member::get_is_login() const {
    return this->is_login;

}

GROUP Member::get_group() const {
    return this->group;
}

Member::~Member() {

}




