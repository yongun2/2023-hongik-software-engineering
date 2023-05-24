//
// Created by 계용운 on 2023/05/22.
//

#include "MemberCollection.h"


Member *MemberCollection::add_member(Member *new_member) {
    member_repository.push_back(new_member);
}



string MemberCollection::delete_member(string id) {

    for (int i = 0; i < member_repository.size(); ++i) {
        if (member_repository[i]->get_id() == id) {
            string target_id = member_repository[i]->get_id();
            member_repository.erase(member_repository.begin() + i);
            delete member_repository[i];
            return target_id;
        }
    }
    return "";
}

Member *MemberCollection::get_login_member() {
    for (int i = 0; i < member_repository.size(); ++i) {
        if (member_repository[i]->get_is_login()) {
            return member_repository[i];
        }
    }
    return nullptr;
}

Member *MemberCollection::find_by_id_and_password(string id, string password) {
    for (int i = 0; i < member_repository.size(); ++i) {
        if (member_repository[i]->get_id() == id && member_repository[i]->get_password() == password) {
            return member_repository[i];
        }
    }
    return nullptr;
}
