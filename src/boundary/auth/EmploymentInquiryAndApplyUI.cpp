#include "EmploymentInquiryAndApplyUI.h"
/**
* WriterName: ������
* Description: �Է°��� �Ű���������
* WriteTime: 2023/05/25
* @return: [void]
*/

EmploymentInquiryAndApplyUI::EmploymentInquiryAndApplyUI(FILE* inputFilePointer, FILE* outputFilePointer, EmploymentInquiryAndApply* ViewControl) :
    input_file_pointer(inputFilePointer), output_file_pointer(outputFilePointer), Viewcontrol(ViewControl) {}
/**
* WriterName: ������
* Description: ä�� ���� �˻��� ä������ ��ȯ �� ��� �Լ�
* WriteTime: 2023/05/25
* @return: [void]
*/

void EmploymentInquiryAndApplyUI::Employment_View() {

    char COMPANY[MAX_STRING],COMPANYINFO[MAX_STRING], Date[MAX_STRING], work[MAX_STRING], NumberPeople[MAX_STRING];

    fprintf(output_file_pointer, "4.1 ä�� ���� �˻� \n");
    strcpy(COMPANYINFO, Viewcontrol->Companyinfo().c_str());
    fscanf(input_file_pointer, "%s", COMPANY);
    if(COMPANY[0] == COMPANYINFO[0]) {
        strcpy(work, Viewcontrol->EmploymentWork().c_str());
        strcpy(NumberPeople, Viewcontrol->EmploymentNumberPeople().c_str());
        strcpy(Date, Viewcontrol->EmploymentDate().c_str());
        strcpy(COMPANYINFO, Viewcontrol->Companyinfo().c_str());
        fprintf(output_file_pointer, "> %s %s %s %s\n", COMPANYINFO, work, NumberPeople, Date);
    }
}
/**
* WriterName: ������
* Description:  ���� �� ���� ���� ��� �Լ�
* WriteTime: 2023/05/25
* @return: [void]
*/
void EmploymentInquiryAndApplyUI::Apply() {

    char NUM[MAX_STRING], COMPANYINFO[MAX_STRING], Date[MAX_STRING], work[MAX_STRING], NumberPeople[MAX_STRING];

    fprintf(output_file_pointer, "4.2 ä�� ���� \n");
    strcpy(COMPANYINFO, Viewcontrol->Companyinfo().c_str());
    fscanf(input_file_pointer, "%s", NUM);
    if (isdigit(NUM[0])) {
        strcpy(work, Viewcontrol->EmploymentWork().c_str());
        strcpy(NumberPeople, Viewcontrol->EmploymentNumberPeople().c_str());
        strcpy(Date, Viewcontrol->EmploymentDate().c_str());
        strcpy(COMPANYINFO, Viewcontrol->Companyinfo().c_str());
        fprintf(output_file_pointer, "> %s %s \n", COMPANYINFO, work);
    }
}
/**
* WriterName: ������
* Description:  ���� ���� ����Ʈ ��� �Լ�
* WriteTime: 2023/05/25
* @return: [void]
*/
void EmploymentInquiryAndApplyUI::Apply_View() {

    char COMPANY[MAX_STRING] = { 0, };
    char COMPANYINFO[MAX_STRING] = { 0, };
    char Date[MAX_STRING] = { 0, };
    char work[MAX_STRING] = { 0, };
    char NumberPeople[MAX_STRING] = { 0, };
    fprintf(output_file_pointer, "4.3. ���� ���� ��ȸ \n");
    strcpy(COMPANYINFO, Viewcontrol->Companyinfo().c_str());
    strcpy(Date, Viewcontrol->EmploymentDate().c_str());
    strcpy(work, Viewcontrol->EmploymentWork().c_str());
    strcpy(NumberPeople, Viewcontrol->EmploymentNumberPeople().c_str());
    strcpy(COMPANYINFO, Viewcontrol->Companyinfo().c_str());
    fprintf(output_file_pointer, "> %s %s %s %s\n", COMPANYINFO, work, NumberPeople, Date);
}

