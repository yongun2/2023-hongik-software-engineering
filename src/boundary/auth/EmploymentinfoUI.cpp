#include "EmploymentinfoUI.h"


EmploymentinfoUI::EmploymentinfoUI(FILE* outputFilePointer, Employmentinfo* ViewControl) :
    output_file_pointer(outputFilePointer), Viewcontrol(ViewControl) {}


void EmploymentinfoUI::Employment_View() {
    char Date[MAX_STRING], work[MAX_STRING], NumberPeople[MAX_STRING];

    fprintf(output_file_pointer, "4.1. 채용 정보 검색 \n");
    strcpy(Date, Viewcontrol->EmploymentWork().c_str());
    strcpy(work, Viewcontrol->EmploymentNumberPeople().c_str());
    strcpy(NumberPeople, Viewcontrol->EmploymentDate().c_str());

    fprintf(output_file_pointer, "> %s %s %s\n", Date, work, NumberPeople);
}
