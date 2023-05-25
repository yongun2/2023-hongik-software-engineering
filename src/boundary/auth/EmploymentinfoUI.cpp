#include "EmploymentinfoUI.h"

/**
 * WriterName: 권오선
 * Description:  ui로서 입력값과 위한 매개변수를 받음
 * WriteTime: 2023/05/25
 */

EmploymentinfoUI::EmploymentinfoUI(FILE* outputFilePointer, Employmentinfo* ViewControl) :
    output_file_pointer(outputFilePointer), Viewcontrol(ViewControl) {}

/**
* WriterName: 권오선
* Description:  Employmentinfo에서 채용정보 반환 함수 호출 함수 호출
* WriteTime: 2023/05/25
* @return: [void]
*/

void EmploymentinfoUI::Employment_View() {
    char Date[MAX_STRING], work[MAX_STRING], NumberPeople[MAX_STRING];

    fprintf(output_file_pointer, "4.1. 채용 정보 검색 \n");
    strcpy(Date, Viewcontrol->EmploymentWork().c_str());
    strcpy(work, Viewcontrol->EmploymentNumberPeople().c_str());
    strcpy(NumberPeople, Viewcontrol->EmploymentDate().c_str());

    fprintf(output_file_pointer, "> %s %s %s\n", Date, work, NumberPeople);
}
