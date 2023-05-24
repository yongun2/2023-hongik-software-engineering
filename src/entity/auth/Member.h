//
// Created by 계용운 on 2023/05/23.
//

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_MEMBER_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_MEMBER_H

#define MAX_STRING 32
#include <iostream>
#include <string>

using std::string;

typedef enum {
    COMPANY,
    GENERAL,
    NON
} GROUP;

class Member {
private:
    string id;
    string password;
    bool is_login;
    GROUP group;
public:
    Member(const char *id, const char *password, GROUP group);

    virtual ~Member();

    string get_id() const;

    string get_password() const;

    bool get_is_login() const;

    GROUP get_group() const;

    void set_is_login(bool login_status);

    virtual string get_detail() const{
        return "";
    };

};


#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_MEMBER_H
