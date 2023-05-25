//
// Created by 계용운 on 2023/05/21.
//

#include "Logout.h"

/**
 * WriterName: 계용운
 * Description: 로그아웃 컨트롤 클래스 생성자
 * WriteTime: 2023 05 26 02:00
 * @arg: MemberCollection* memberCollection 멤버 컬렉션을 주입 받는다.
 */
Logout::Logout(MemberCollection *memberCollection) : member_collection(memberCollection) {}

/**
 * WriterName: 계용운
 * Description: 로그아웃 관련 비즈니스 로직 실행
 * WriteTime: 2023 05 26 02:00
 * @return: 로그아웃한 멤버의 아이디
 */
string Logout::logout() {
    /** 컬렉션에서 로그인한 멤버를 가져온다.**/
    Member *find_member = member_collection->get_login_member();
    /** 컬렉션에서 로그인 상태를 false로 변경.**/
    //member_collection->get_login_member()->get_detail();
    find_member->set_is_login(false);
    return find_member->get_id();
}
