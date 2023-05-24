//
// Created by 계용운 on 2023/05/21.
//

#include "Login.h"

Login::Login(MemberCollection *memberCollection) : member_collection(memberCollection) {}

string Login::login(string id, string password) {
    /** 컬렉션에서 아이디와 비밀번호가 일치하는 멤버를 가져온다.**/
    Member *find_member = member_collection->find_by_id_and_password(id, password);
    /** 해당 멤버의 로그인 상태를 true로 변경.**/
    if (find_member != nullptr) {
        find_member->set_is_login(true);
        return find_member->get_id() + " " + find_member->get_password();
    }
    return "";

}
