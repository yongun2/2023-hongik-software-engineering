#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTONFO_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTONFO_H

#include <vector>
#include "../../entity/auth/EmploymentCollection.h"
using std::vector;


/**
 * WriterName: 권오선
 * Description: EmploymentCollection에서 채용정보를 얻기위한 포인터
 * WriteTime: 2023/05/25
 */

class Employmentinfo {
private:
    EmploymentCollection * Employment_collection;
public:

    explicit Employmentinfo(EmploymentCollection * EmploymentCollection);

    /**
* WriterName: 권오선
* Description:  Employment_collection에서 특정 채용으로 포인터 반한 후 마감일 정보 포인터 반환
* WriteTime: 2023/05/25
* @return: [string 마감일]
*/

    string EmploymentDate();

    /**
* WriterName: 권오선
* Description:  Employment_collection에서 특정 채용으로 포인터 반한 후 인원 정보 포인터 반환
* WriteTime: 2023/05/25
* @return: [string 인원]
*/

    string EmploymentNumberPeople();

    /**
* WriterName: 권오선
* Description:  Employment_collection에서 특정 채용으로 포인터 반한 후 업무 정보 포인터 반환
* WriteTime: 2023/05/25
* @return: [string 업무]
*/
    string EmploymentWork();

};
#endif 