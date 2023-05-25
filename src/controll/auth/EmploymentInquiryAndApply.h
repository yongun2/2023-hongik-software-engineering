#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTINQUIRYANDAPPLY_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTINQUIRYANDAPPLY_H

#include <vector>
#include "../../entity/auth/EmploymentCollection.h"
using std::vector;

/**
 * WriterName: ������
 * Description: ��ϵ� Emplyoment collection���κ��� ä�� ���� �޾ƿ� 
 * WriteTime: 2023/05/25
 */

class EmploymentInquiryAndApply {
private:
    EmploymentCollection* Employment_collection;
public:

    explicit EmploymentInquiryAndApply(EmploymentCollection* EmploymentCollection);
    /**
 * WriterName: ������
 * Description: ��ϵ� Emplyoment collection���κ��� ȸ���̸� ����ڹ�ȣ
 * WriteTime: 2023/05/25
 */
    string Companyinfo();
    /**
 * WriterName: ������
 * Description: ��ϵ� Emplyoment collection���κ��� ��¥
 * WriteTime: 2023/05/25
 */
    string EmploymentDate();
    /**
 * WriterName: ������
 * Description: ��ϵ� Emplyoment collection���κ��� �ο���
 * WriteTime: 2023/05/25
 */
    string EmploymentNumberPeople();
    /**
 * WriterName: ������
 * Description: ��ϵ� Emplyoment collection���κ��� ����
 * WriteTime: 2023/05/25
 */
    string EmploymentWork();

};
#endif 
