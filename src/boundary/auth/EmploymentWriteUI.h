#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTWRITEUI_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTWRITEUI_H

#include <fstream>
#include "../../controll/auth/EmploymentWrite.h"
#include "../../entity/auth/MemberCollection.h"


#define MAX_STRING 32

/**
 * WriterName: �ǿ���
 * Description:  ui�μ� �Է°��� ��°��� ���� �Ű������� ����
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
 * WriterName: �ǿ���
 * Description: MemberCollection���� ȸ��ȸ�������� �����ͼ� ä���������Բ� Employment���� �� EmploymentColletion�� ���� 
 * WriteTime: 2023/05/25
 * @return: [void]
 */
    void select_register();

};

#endif 
