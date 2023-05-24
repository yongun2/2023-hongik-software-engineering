//
// Created by 계용운 on 2023/05/20.
//

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_REGISTERUI_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_REGISTERUI_H


#include <fstream>
#include "../../controll/auth/Register.h"

#define MAX_STRING 32

/**
 * @var input_file_pointer : input.txt에서 명령어를 읽어 오기 위한 파일 포인터
 * @var output_file_pointer : output.txt에 출력하기 위한 파일 포인터
 * @var logout_control : 로그아웃 로직을 수행하는 컨트롤
 * RegisterUI 객체 생성시에 주입을 받아야 합니다.
 */
class RegisterUI {
private:
    FILE *input_file_pointer;
    FILE *output_file_pointer;
    Register *register_control;

public:
    RegisterUI(FILE *inputFilePointer, FILE *outputFilePointer, Register *registerControl);

    void select_register();

};


#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_REGISTERUI_H
