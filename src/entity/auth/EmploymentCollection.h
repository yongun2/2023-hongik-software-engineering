#include <vector>
#include "Employment.h"

#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTCOLLETION_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTCOLLETION_H

using std::vector;

/**
 * WriterName: 권오선
 * Description: Employment를 관리하며 벡터형식으로 Employment생성 채용정보 저장
 * WriteTime: 2023/05/25
 */


class EmploymentCollection {
    vector<Employment*> Employment_repository;

public:
 /**
 * WriterName: 권오선
 * Description: Employment생성 후 저장
 * WriteTime: 2023/05/25
 * @arg: Employment* new_Employment [Employment생성]
 * @return: [void]
 */

    void add_Employment(Employment* new_Employment);

 /**
* WriterName: 권오선
* Description: Employment정보를 얻기위한 포인터 반환
* WriteTime: 2023/05/25
* @return: [Employment* 포인터 반환]
*/
    Employment* get_Employment();
};
#endif //INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTCOLLETION_H
