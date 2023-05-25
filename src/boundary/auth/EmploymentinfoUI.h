#ifndef INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTONFOUI_H
#define INC_2023_HONGIK_SOFTWARE_ENGINEERING_EMPLOYMENTINFOUI_H


#include <fstream>
#include "../../controll/auth/Employmentinfo.h"

#define MAX_STRING 32


/**
 * WriterName: 권오선
 * Description:  ui로서 입력값과 위한 매개변수를 받음
 * WriteTime: 2023/05/25
 */

class EmploymentinfoUI {
private:
    FILE* output_file_pointer;
    Employmentinfo* Viewcontrol;

public:
    EmploymentinfoUI(FILE* outputFilePointer, Employmentinfo* ViewControl);

    /**
* WriterName: 권오선
* Description:  Employmentinfo에서 채용정보 반환 함수 호출 함수 호출
* WriteTime: 2023/05/25
* @return: [void]
*/

    void Employment_View();

};
#endif 