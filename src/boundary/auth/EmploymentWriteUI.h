#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTWRITEUI_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTWRITEUI_H

#include <fstream>
#include "../../controll/auth/EmploymentWrite.h"
#include "../../entity/auth/MemberCollection.h"


#define MAX_STRING 32

/**
 * WriterName: 권오선
 * Description:  ui로서 입력값과 출력값을 위한 매개변수를 받음
 * WriteTime: 2023/05/25
 */

class EmploymentWriteUI {
private:
    FILE* input_file_pointer;
    FILE* output_file_pointer;
    EmploymentWrite* register_control;
    MemberCollection* member_collection;

public:
    EmploymentWriteUI(MemberCollection* memberCollection,FILE* inputFilePointer, FILE* outputFilePointer, EmploymentWrite* EmploymentWriteControl);

    /**
 * WriterName: 권오선
 * Description: MemberCollection에서 회사회원정보를 가져와서 채용정보외함께 Employment생성 후 EmploymentColletion에 저장 
 * WriteTime: 2023/05/25
 * @return: [void]
 */
    void select_register();

};

#endif 
