//
// Created by 계용운 on 2023/05/20.
//

#include "Register.h"


Register::Register(MemberCollection *memberCollection) : member_collection(memberCollection) {}

string Register::register_member(Member *new_member) {
    /** 컬렉션에 새로운 회원 추가.**/
    member_collection->add_member(new_member);
    return new_member->get_detail() + " " + new_member->get_id() + " " + new_member->get_password();
}

