//
// Created by 계용운 on 2023/05/21.
//

#include "Withdraw.h"
/**
 * WriterName: 계용운
 * Description: 회원 탈퇴 컨트롤 생성자
 * WriteTime: 2023 05 26 03:00
 * @arg: MemberCollection *memberCollection 멤버 컬렉션 doTask 함수에서 주입 받음
 */
Withdraw::Withdraw(MemberCollection *memberCollection) : member_collection(memberCollection) {}

/**
 * WriterName: 계용운
 * Description: 회원 탈퇴 비즈니스 로직 실행
 * WriteTime: 2023 05 26 03:00
 * @return: 탈퇴한 회원의 세부정보
 */
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


