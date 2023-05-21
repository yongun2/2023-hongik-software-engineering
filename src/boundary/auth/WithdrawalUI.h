//
// Created by 계용운 on 2023/05/21.
//

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_WITHDRAWALUI_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_WITHDRAWALUI_H

#include <cstdio>
#include "../../controll/auth/Withdraw.h"

#define MAX_STRING 32

class WithdrawalUI {
private:
    FILE *input_file_pointer;
    FILE *output_file_pointer;
    Withdraw *withdraw_control;
public:
    WithdrawalUI(FILE *inputFilePointer, FILE *outputFilePointer, Withdraw *withdrawControl);
    void select_withdraw();
};


#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_WITHDRAWALUI_H
