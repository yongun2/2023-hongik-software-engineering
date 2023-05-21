//
// Created by 계용운 on 2023/05/21.
//

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_MEMBER_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_MEMBER_H

#define MAX_STRING 32
#include <iostream>

class Member {
private:
    char id[MAX_STRING];
    char password[MAX_STRING];

public:
    Member(const char *id, const char *password);

    const char *getId() const;

    const char *getPassword() const;
};


#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_MEMBER_H
