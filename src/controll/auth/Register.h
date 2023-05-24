//
// Created by 계용운 on 2023/05/20.
//

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_REGISTER_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_REGISTER_H

#include <vector>
#include "../../entity/auth/Member.h"
#include "../../entity/auth/CompanyMember.h"
#include "../../entity/auth/GeneralMember.h"
#include "../../entity/auth/MemberCollection.h"

using std::vector;

/**
 * @var member_collection : 회원들에 대한 정보를 저장하는 컬렉션
 * Register 객체 생성시에 주입 필요
 */
class Register {
private:
    MemberCollection *member_collection;
public:
    explicit Register(MemberCollection *memberCollection);

    string register_member(Member *new_member);
};


#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_REGISTER_H
