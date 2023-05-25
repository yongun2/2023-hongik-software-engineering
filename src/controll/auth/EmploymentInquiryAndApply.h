#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTINQUIRYANDAPPLY_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTINQUIRYANDAPPLY_H

#include <vector>
#include "../../entity/auth/EmploymentCollection.h"
using std::vector;

/**
 * WriterName: 김재윤
 * Description: 등록된 Emplyoment collection으로부터 채용 정보 받아옴 
 * WriteTime: 2023/05/25
 */

class EmploymentInquiryAndApply {
private:
    EmploymentCollection* Employment_collection;
public:

    explicit EmploymentInquiryAndApply(EmploymentCollection* EmploymentCollection);
    /**
 * WriterName: 김재윤
 * Description: 등록된 Emplyoment collection으로부터 회사이름 사업자번호
 * WriteTime: 2023/05/25
 */
    string Companyinfo();
    /**
 * WriterName: 김재윤
 * Description: 등록된 Emplyoment collection으로부터 날짜
 * WriteTime: 2023/05/25
 */
    string EmploymentDate();
    /**
 * WriterName: 김재윤
 * Description: 등록된 Emplyoment collection으로부터 인원수
 * WriteTime: 2023/05/25
 */
    string EmploymentNumberPeople();
    /**
 * WriterName: 김재윤
 * Description: 등록된 Emplyoment collection으로부터 업무
 * WriteTime: 2023/05/25
 */
    string EmploymentWork();

};
#endif 
