//
// Created by 계용운 on 2023/05/21.
//

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_LOGIN_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_LOGIN_H


#include "../../entity/auth/MemberCollection.h"

/**
 * @var member_collection : 회원들에 대한 정보를 저장하는 컬렉션
 * Login 객체 생성시에 주입 필요
 */
class Login {
private:
    MemberCollection *member_collection;
public:
    explicit Login(MemberCollection *memberCollection);

    string login(string id, string password);
};


#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_LOGIN_H
