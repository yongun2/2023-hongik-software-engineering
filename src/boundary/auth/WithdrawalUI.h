//
// Created by 계용운 on 2023/05/21.
//

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_WITHDRAWALUI_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_WITHDRAWALUI_H

#include <cstdio>
#include "../../controll/auth/Withdraw.h"

/**
 * WriterName: 계용운
 * Description: 회원탈퇴 바운더리 클래스
 * WriteTime: 2023 05 26 03:00
 */
class WithdrawalUI {
private:
    FILE *output_file_pointer;
    Withdraw *withdraw_control;
public:
    WithdrawalUI(FILE *outputFilePointer, Withdraw *withdrawControl);

    void select_withdraw();
};


#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_WITHDRAWALUI_H
