//
// Created by 계용운 on 2023/05/21.
//

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_LOGIN_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_LOGIN_H


#include "../../entity/auth/MemberCollection.h"

/**
 * WriterName: 계용운
 * Description: 로그인 컨트롤, 로그인 관련 비즈니스 로직 실행, 멤버 컬렉션을 생성시 주입 받아야 함
 * WriteTime: 2023 05 26 02:00
 */
class Login {
private:
    MemberCollection *member_collection;
public:
    explicit Login(MemberCollection *memberCollection);

    string login(string id, string password);
};


#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_LOGIN_H
