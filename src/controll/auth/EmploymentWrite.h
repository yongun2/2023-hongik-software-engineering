#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTWRITE_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTWRITE_H

#include <vector>
#include "../../entity/auth/EmploymentCollection.h"

using std::vector;

/**
 * WriterName: 권오선
 * Description: Contral로서 EmploymentCollection에 접근하여 채용정보를 저장
 * WriteTime: 2023/05/25
 */

class EmploymentWrite {
private:
    EmploymentCollection* Employment_collection;
public:
    explicit EmploymentWrite(EmploymentCollection* EmploymentCollection);

/**
* WriterName: 권오선
* Description:  Employment_collection에서 add_Employment 함수 호출
* WriteTime: 2023/05/25
* @arg: Employment* new_Employment [특정채용을 벡터형태로 EmploymentCollection에 저장 하거나 호출하기 위한 포인터]
* @return: [void]
*/

    void register_Employment(Employment* new_Employment);
};
#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTWRITE_H