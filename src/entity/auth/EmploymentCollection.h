#include <vector>
#include "Employment.h"

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTCOLLETION_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTCOLLETION_H

using std::vector;

/**
 * WriterName: �ǿ���
 * Description: Employment�� �����ϸ� ������������ Employment���� ä������ ����
 * WriteTime: 2023/05/25
 */


class EmploymentCollection {
    vector<Employment*> Employment_repository;

public:
 /**
 * WriterName: �ǿ���
 * Description: Employment���� �� ����
 * WriteTime: 2023/05/25
 * @arg: Employment* new_Employment [Employment����]
 * @return: [void]
 */

    void add_Employment(Employment* new_Employment);

 /**
* WriterName: �ǿ���
* Description: Employment������ ������� ������ ��ȯ
* WriteTime: 2023/05/25
* @return: [Employment* ������ ��ȯ]
*/
    Employment* get_Employment();
};
#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTCOLLETION_H
