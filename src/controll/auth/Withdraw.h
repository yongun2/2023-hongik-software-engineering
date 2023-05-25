//
// Created by 계용운 on 2023/05/21.
//

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_WITHDRAW_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_WITHDRAW_H


#include "../../entity/auth/MemberCollection.h"

/**
 * WriterName: 계용운
 * Description: 회원 탈퇴 관련 비즈니스 로직 실행 클래스, 생성시에 멤버 컬렉션 주입 받아야함
 * WriteTime: 2023 05 26 02:00
 */
class Withdraw {
private:
    MemberCollection *member_collection;
public:
    explicit Withdraw(MemberCollection *memberCollection);

    string withdraw();

};


#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_WITHDRAW_H
