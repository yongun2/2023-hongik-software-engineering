#include "EmploymentinfoUI.h"

/**
 * WriterName: �ǿ���
 * Description:  ui�μ� �Է°��� ���� �Ű������� ����
 * WriteTime: 2023/05/25
 */

EmploymentinfoUI::EmploymentinfoUI(FILE* outputFilePointer, Employmentinfo* ViewControl) :
    output_file_pointer(outputFilePointer), Viewcontrol(ViewControl) {}

/**
* WriterName: �ǿ���
* Description:  Employmentinfo���� ä������ ��ȯ �Լ� ȣ�� �Լ� ȣ��
* WriteTime: 2023/05/25
* @return: [void]
*/

void EmploymentinfoUI::Employment_View() {
    char Date[MAX_STRING], work[MAX_STRING], NumberPeople[MAX_STRING];

    fprintf(output_file_pointer, "4.1. ä�� ���� �˻� \n");
    strcpy(Date, Viewcontrol->EmploymentWork().c_str());
    strcpy(work, Viewcontrol->EmploymentNumberPeople().c_str());
    strcpy(NumberPeople, Viewcontrol->EmploymentDate().c_str());

    fprintf(output_file_pointer, "> %s %s %s\n", Date, work, NumberPeople);
}
