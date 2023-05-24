//
// Created by 계용운 on 2023/05/22.
//

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_MEMBERCOLLECTION_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_MEMBERCOLLECTION_H

#include <vector>
#include "Member.h"

using std::vector;
class MemberCollection {
    vector<Member*> member_repository;

public:

    Member *add_member(Member *new_member);

    string delete_member(string id);

    Member* get_login_member();

    Member *find_by_id_and_password(string id, string password);
};


#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_MEMBERCOLLECTION_H
