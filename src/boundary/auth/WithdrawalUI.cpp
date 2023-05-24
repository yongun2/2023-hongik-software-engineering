//
// Created by 계용운 on 2023/05/21.
//

#include "WithdrawalUI.h"

WithdrawalUI::WithdrawalUI(FILE *inputFilePointer, FILE *outputFilePointer, Withdraw *withdrawControl)
        : input_file_pointer(inputFilePointer), output_file_pointer(outputFilePointer),
          withdraw_control(withdrawControl) {}

void WithdrawalUI::select_withdraw() {

    /** 현재 상태 출력 **/
    fprintf(output_file_pointer, "1.2. 회원탈퇴\n");
    /** 컨트롤 호출 **/
    string id = withdraw_control->withdraw();
    /** 회원탈퇴 아이디 출력 **/
    fprintf(output_file_pointer, "> %s\n", id.c_str());
}

