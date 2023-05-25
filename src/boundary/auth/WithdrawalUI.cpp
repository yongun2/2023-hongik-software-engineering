//
// Created by 계용운 on 2023/05/21.
//

#include "WithdrawalUI.h"


/**
 * WriterName: 계용운
 * Description: 회원탈퇴 바운더리 컨트롤 비즈니스 로직
 * WriteTime: 2023 05 26 03:00
 */
void WithdrawalUI::select_withdraw() {

    /** 현재 상태 출력 **/
    fprintf(output_file_pointer, "1.2. 회원탈퇴\n\n");
    /** 컨트롤 호출 **/
    string id = withdraw_control->withdraw();
    /** 회원탈퇴 아이디 출력 **/
    fprintf(output_file_pointer, "> %s\n\n", id.c_str());
}


/**
 * WriterName: 계용운
 * Description: 로그아웃 바운더리 생성자
 * WriteTime: 2023 05 26 03:00\
 * @arg: FILE *outputFilePointer 쓰기용 파일 포인터
 * @arg: Withdraw *withdrawControl 회원 탈퇴 컨트롤
 */
WithdrawalUI::WithdrawalUI(FILE *outputFilePointer, Withdraw *withdrawControl) : output_file_pointer(outputFilePointer),
                                                                                 withdraw_control(withdrawControl) {}

