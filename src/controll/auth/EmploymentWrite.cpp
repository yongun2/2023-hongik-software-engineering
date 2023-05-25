#include "EmploymentWrite.h"

/**
 * WriterName: �ǿ���
 * Description: Contral�μ� EmploymentCollection�� �����Ͽ� ä�������� ����
 * WriteTime: 2023/05/25
 */

EmploymentWrite::EmploymentWrite(EmploymentCollection* EmploymentCollection) : Employment_collection(EmploymentCollection) {}

/**
* WriterName: �ǿ���
* Description:  Employment_collection����  add_Employment �Լ� ȣ��
* WriteTime: 2023/05/25
* @arg: Employment* new_Employment [Ư��ä���� �������·� EmploymentCollection�� ���� �ϰų� ȣ���ϱ� ���� ������]
* @return: [void]
*/

void EmploymentWrite::register_Employment(Employment* new_Employment) {
    Employment_collection->add_Employment(new_Employment);
}