#include "EmploymentWrite.h"

/**
 * WriterName: 권오선
 * Description: Contral로서 EmploymentCollection에 접근하여 채용정보를 저장
 * WriteTime: 2023/05/25
 */

EmploymentWrite::EmploymentWrite(EmploymentCollection* EmploymentCollection) : Employment_collection(EmploymentCollection) {}

/**
* WriterName: 권오선
* Description:  Employment_collection에서  add_Employment 함수 호출
* WriteTime: 2023/05/25
* @arg: Employment* new_Employment [특정채용을 벡터형태로 EmploymentCollection에 저장 하거나 호출하기 위한 포인터]
* @return: [void]
*/

void EmploymentWrite::register_Employment(Employment* new_Employment) {
    Employment_collection->add_Employment(new_Employment);
}