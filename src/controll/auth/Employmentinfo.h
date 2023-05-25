#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTONFO_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTONFO_H

#include <vector>
#include "../../entity/auth/EmploymentCollection.h"
using std::vector;


/**
 * WriterName: �ǿ���
 * Description: EmploymentCollection���� ä�������� ������� ������
 * WriteTime: 2023/05/25
 */

class Employmentinfo {
private:
    EmploymentCollection * Employment_collection;
public:

    explicit Employmentinfo(EmploymentCollection * EmploymentCollection);

    /**
* WriterName: �ǿ���
* Description:  Employment_collection���� Ư�� ä������ ������ ���� �� ������ ���� ������ ��ȯ
* WriteTime: 2023/05/25
* @return: [string ������]
*/

    string EmploymentDate();

    /**
* WriterName: �ǿ���
* Description:  Employment_collection���� Ư�� ä������ ������ ���� �� �ο� ���� ������ ��ȯ
* WriteTime: 2023/05/25
* @return: [string �ο�]
*/

    string EmploymentNumberPeople();

    /**
* WriterName: �ǿ���
* Description:  Employment_collection���� Ư�� ä������ ������ ���� �� ���� ���� ������ ��ȯ
* WriteTime: 2023/05/25
* @return: [string ����]
*/
    string EmploymentWork();

};
#endif 