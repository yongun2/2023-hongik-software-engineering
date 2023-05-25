//
// Created by 계용운 on 2023/05/21.
//

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_LOGOUT_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_LOGOUT_H


#include "../../entity/auth/MemberCollection.h"

/**
 * WriterName: 계용운
 * Description: 로그아웃 관련 비즈니스로직 실행 클래스, 생성시에 로그아웃 컨트롤 주입 받아야함
 * WriteTime: 2023 05 26 02:00
 */
class Logout {
private:
    MemberCollection *member_collection;
public:
    explicit Logout(MemberCollection *memberCollection);

    string logout();
};


#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_LOGOUT_H
