#include "EmploymentInquiryAndApplyUI.h"


EmploymentInquiryAndApplyUI::EmploymentInquiryAndApplyUI(FILE* inputFilePointer, FILE* outputFilePointer, EmploymentInquiryAndApply* ViewControl) :
    input_file_pointer(inputFilePointer), output_file_pointer(outputFilePointer), Viewcontrol(ViewControl) {}


void EmploymentInquiryAndApplyUI::Employment_View() {

    char COMPANY[MAX_STRING],COMPANYINFO[MAX_STRING], Date[MAX_STRING], work[MAX_STRING], NumberPeople[MAX_STRING];

    fprintf(output_file_pointer, "3.2. 등록된 채용 정보 조회 \n");
    strcpy(COMPANYINFO, Viewcontrol->Companyinfo().c_str());
    fscanf(input_file_pointer, "%s", COMPANY);
    if(COMPANY[0] == COMPANYINFO[0]) {
        strcpy(Date, Viewcontrol->EmploymentWork().c_str());
        strcpy(work, Viewcontrol->EmploymentNumberPeople().c_str());
        strcpy(NumberPeople, Viewcontrol->EmploymentDate().c_str());
        strcpy(COMPANYINFO, Viewcontrol->Companyinfo().c_str());
        fprintf(output_file_pointer, "> %s %s %s %s\n", COMPANYINFO, Date, work, NumberPeople);
    }
}
