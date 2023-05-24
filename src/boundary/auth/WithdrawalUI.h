//
// Created by 계용운 on 2023/05/21.
//

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_WITHDRAWALUI_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_WITHDRAWALUI_H

#include <cstdio>
#include "../../controll/auth/Withdraw.h"

/**
 * @var output_file_pointer : output.txt에 출력하기 위한 파일 포인터
 * @var logout_control : 로그아웃 로직을 수행하는 컨트롤
 * WithdrawalUI 객체 생성시에 주입을 받아야 합니다.
 */
class WithdrawalUI {
private:
    FILE *output_file_pointer;
    Withdraw *withdraw_control;
public:
    WithdrawalUI(FILE *inputFilePointer, FILE *outputFilePointer, Withdraw *withdrawControl);
    void select_withdraw();
};


#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_WITHDRAWALUI_H
