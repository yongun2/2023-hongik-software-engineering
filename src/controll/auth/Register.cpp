//
// Created by 계용운 on 2023/05/20.
//

#include "Register.h"

/**
 * WriterName: 계용운
 * Description: 회원가입 관련 컨트롤 클래스 생성자
 * WriteTime: 2023 05 26 02:00
 * @arg: MemberCollection *memberCollection doTask 함수에서 주입 받는다.
 */
Register::Register(MemberCollection *memberCollection) : member_collection(memberCollection) {}

/**
 * WriterName: 계용운
 * Description: 회원가입 관련 비즈니스 로직 실행
 * WriteTime: 2023 05 26 02:00
 * @arg: Member *new_member 새로이 회원가입 하는 회원의 정보
 * @return: 회원가입 한 사람의 이름 주민번호 아이디 비밀번호 문자열
 */
string Register::register_member(Member *new_member) {
    /** 컬렉션에 새로운 회원 추가.**/
    member_collection->add_member(new_member);
    return new_member->get_detail() + " " + new_member->get_id() + " " + new_member->get_password();
}

