#include "EmploymentCollection.h"

/**
* WriterName: �ǿ���
* Description: Employment ������ �������·� �����ϱ� ���� ���
* WriteTime: 2023/05/25
* @arg: Employment* new_Employment [Employment ������ �������·� �����ϱ� ���� ���]
* @return: [void]
*/
void EmploymentCollection::add_Employment(Employment* new_Employment) {
    Employment_repository.push_back(new_Employment);
      
}

/**
* WriterName: �ǿ���
* Description: Ư�� Employment������ ������� ������ ��ȯ
* WriteTime: 2023/05/25
* @return: [Employment* Ư�� Employment������ ������� ������ ��ȯ]
*/

Employment* EmploymentCollection::get_Employment() {
  
    return Employment_repository[0];
}
