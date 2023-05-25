#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTWRITE_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTWRITE_H

#include <vector>
#include "../../entity/auth/EmploymentCollection.h"

using std::vector;

/**
 * WriterName: �ǿ���
 * Description: Contral�μ� EmploymentCollection�� �����Ͽ� ä�������� ����
 * WriteTime: 2023/05/25
 */

class EmploymentWrite {
private:
    EmploymentCollection* Employment_collection;
public:
    explicit EmploymentWrite(EmploymentCollection* EmploymentCollection);

/**
* WriterName: �ǿ���
* Description:  Employment_collection���� add_Employment �Լ� ȣ��
* WriteTime: 2023/05/25
* @arg: Employment* new_Employment [Ư��ä���� �������·� EmploymentCollection�� ���� �ϰų� ȣ���ϱ� ���� ������]
* @return: [void]
*/

    void register_Employment(Employment* new_Employment);
};
#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTWRITE_H