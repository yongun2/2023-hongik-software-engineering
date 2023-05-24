#define _CRT_SECURE_NO_WARNINGS

#include "ApplyUI.h"

ApplyUI::ApplyUI(FILE* in_fp, FILE* out_fp, EmploymentCollection* ec) :
				input_file_pointer(in_fp), output_file_pointer(out_fp), employment_control(ec) {}

void ApplyUI::select_apply() {
	output_file_pointer = fopen("output.txt", "a+");

	char work[MAX_STRING] = { 0, };
	char p_num[MAX_STRING] = { 0, };
	char l_date[MAX_STRING] = { 0, };
	fscanf(input_file_pointer, "%s %s %s", work, p_num, l_date);

	fprintf(output_file_pointer, "3.1 채용 정보 등록\n");
	Employment temp_employment(work, atoi(p_num), l_date);

	employment_control->addEmployment(temp_employment);
	fprintf(output_file_pointer, "> %s %s %s\n\n", work, p_num, l_date);
	fclose(output_file_pointer);
}

void ApplyUI::check_apply() {
	output_file_pointer = fopen("output.txt", "a+");
	fprintf(output_file_pointer, "3.2 등록된 채용 정보 조회\n");

	for (auto iter = employment_control->getEmploymentCollection()->begin();
		iter != employment_control->getEmploymentCollection()->end(); ++iter) {
		char temp_num[MAX_STRING] = { 0, };
		_itoa(iter->getPeopleNum(), temp_num, 10);
		fprintf(output_file_pointer, "> %s %s %s\n", iter->getWork(), temp_num, iter->getLimitDate());
	}
	fprintf(output_file_pointer, "\n");
	fclose(output_file_pointer);
}