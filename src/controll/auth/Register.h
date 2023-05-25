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
 * WriterName: 계용운
 * Description: 회원가입 관련 비즈니스 로직 실행 클래스, 생성시 멤버 컬렉션 주입 받아야함
 * WriteTime: 2023 05 26 02:00
 */
class Register {
private:
    MemberCollection *member_collection;
public:
    explicit Register(MemberCollection *memberCollection);

    string register_member(Member *new_member);
};


#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_REGISTER_H
