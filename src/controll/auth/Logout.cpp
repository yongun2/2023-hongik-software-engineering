//
// Created by 계용운 on 2023/05/21.
//

#include "Logout.h"

Logout::Logout(MemberCollection *memberCollection) : member_collection(memberCollection) {}

string Logout::logout() {
    /** 컬렉션에서 로그인한 멤버를 가져온다.**/
    Member *find_member = member_collection->get_login_member();
    /** 컬렉션에서 로그인 상태를 false로 변경.**/
    find_member->set_is_login(false);
    return find_member->get_id();
}
