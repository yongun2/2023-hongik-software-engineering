//
// Created by 계용운 on 2023/05/21.
//

#include "Withdraw.h"

Withdraw::Withdraw(MemberCollection *memberCollection) : member_collection(memberCollection) {}

string Withdraw::withdraw() {
    /** 컬렉션에서 로그인한 멤버를 가져온다.**/
    Member* find_member = member_collection->get_login_member();

    if (find_member != nullptr) {
        string deleted_id = find_member->get_id();
        /** 해당 멤버에 대한 삭제.**/
        member_collection->delete_member(find_member->get_id());
        return deleted_id;
    } else {
        return "";
    }
}


