//
// Created by 계용운 on 2023/05/21.
//

#include "Login.h"

/**
 * WriterName: 계용운
 * Description: 생성자 함수
 * WriteTime: 2023 05 26 02:00
 * @arg: MemberCollection* memberCollection doTask 함수에서 주입받음
 */
Login::Login(MemberCollection *memberCollection) : member_collection(memberCollection) {}


/**
 * WriterName: 계용운
 * Description: 로그인 관련 비즈니스 로직 실행
 * WriteTime: 2023 05 26 02:00
 * @arg: stirng id 멤버 아이디
 * @arg: string password 멤버 패스워드
 * @return: 로그인한 멤버의 아이디와 패스워드 문자열
 */
string Login::login(string id, string password) {
    /** 컬렉션에서 아이디와 비밀번호가 일치하는 멤버를 가져온다.**/
    Member *find_member = member_collection->find_by_id_and_password(id, password);

    /** 해당 멤버의 로그인 상태를 true로 변경.**/
    find_member->set_is_login(true);
    return find_member->get_id() + " " + find_member->get_password();

}
