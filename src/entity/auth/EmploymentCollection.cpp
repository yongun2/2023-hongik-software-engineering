#include "EmploymentCollection.h"

/**
* WriterName: 권오선
* Description: Employment 정보를 백터형태로 저장하기 위해 사용
* WriteTime: 2023/05/25
* @arg: Employment* new_Employment [Employment 정보를 백터형태로 저장하기 위해 사용]
* @return: [void]
*/
void EmploymentCollection::add_Employment(Employment* new_Employment) {
    Employment_repository.push_back(new_Employment);
      
}

/**
* WriterName: 권오선
* Description: 특정 Employment정보를 얻기위한 포인터 반환
* WriteTime: 2023/05/25
* @return: [Employment* 특정 Employment정보를 얻기위한 포인터 반환]
*/

Employment* EmploymentCollection::get_Employment() {
  
    return Employment_repository[0];
}
