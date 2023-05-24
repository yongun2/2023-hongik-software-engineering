#include "EmploymentWriteUI.h"

EmploymentWriteUI::EmploymentWriteUI(MemberCollection* memberCollection,FILE* inputFilePointer, FILE* outputFilePointer, EmploymentWrite* EmploymentWriteControl) : 
    member_collection(memberCollection),input_file_pointer(inputFilePointer), output_file_pointer(outputFilePointer), register_control(EmploymentWriteControl) {}


void EmploymentWriteUI::select_register() {

    char work[MAX_STRING], NumberPeople[MAX_STRING], Date[MAX_STRING], Companyinfo[MAX_STRING], id[MAX_STRING];
   
    string a= member_collection->get_login_member()->get_detail();
    
    strcpy(Companyinfo, a.c_str());

    fprintf(output_file_pointer, "3.1. 채용 정보 등록 \n");
    
    fscanf(input_file_pointer, "%s %s %s ", work, NumberPeople, Date);
   
    Employment* new_Employment = new Employment(Companyinfo, work, NumberPeople, Date);
   
    register_control->register_Employment(new_Employment);
 
    fprintf(output_file_pointer, "> %s %s %s \n", work, NumberPeople, Date);

}

