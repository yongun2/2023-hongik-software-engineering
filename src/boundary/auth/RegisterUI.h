//
// Created by 계용운 on 2023/05/20.
//

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_REGISTERUI_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_REGISTERUI_H


#include <fstream>
#include "../../controll/auth/Register.h"

#define MAX_STRING 32

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
