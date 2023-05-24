//
// Created by 계용운 on 2023/05/21.
//

#include "WithdrawalUI.h"



void WithdrawalUI::select_withdraw() {

    /** 현재 상태 출력 **/
    fprintf(output_file_pointer, "1.2. 회원탈퇴\n\n");
    /** 컨트롤 호출 **/
    string id = withdraw_control->withdraw();
    /** 회원탈퇴 아이디 출력 **/
    fprintf(output_file_pointer, "> %s\n\n", id.c_str());
}

WithdrawalUI::WithdrawalUI(FILE *outputFilePointer, Withdraw *withdrawControl) : output_file_pointer(outputFilePointer),
                                                                                 withdraw_control(withdrawControl) {}

