/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 6
 * Title:			Pointerfun (again)
 * Author:			Nathalie Herzog
 * ----------------------------------------------------------
 * Description:
 * More fun with pointers.
 * ----------------------------------------------------------
 */
 
#include <stdio.h>
#include <string.h>

struct Playstruct
{
	int int_value;
	double double_value;
	char a_string[64];
};


void print_struct(struct Playstruct ps, struct Playstruct* pps)
{
	printf("Values of struct ps: %d, %lf, %s\n", ps.int_value, ps.double_value, ps.a_string);
	printf("Values of struct pps: %d, %lf, %s\n", pps->int_value, pps->double_value, pps->a_string);
}

void change_struct(struct Playstruct ps, struct Playstruct* pps)
{
	ps.int_value = 33;
	ps.double_value = 9.7;
	strcpy(ps.a_string, "Changed?");
	
	pps->int_value = 22;
	pps->double_value = 8.3;
	strcpy(pps->a_string, "Changed");
}

void print_string(char string_to_print[])
{
	printf("%s\n", string_to_print);
}

void change_string(char string1[], char* p_string[])
{
	string1[2] = '\0';
	*(*p_string + 1) = '\0';
}

int main(int argc, char const *argv[])
{
	struct Playstruct play_struct;
	struct Playstruct *play_struct_pointer = &play_struct;
	
	char another_string[16] = "Text";
	char* another_string_pointer = another_string;
	
	play_struct.int_value = 2;
	play_struct.double_value = 4.3;
	strcpy(play_struct.a_string, "Test");
	
	print_struct(play_struct, play_struct_pointer);
	change_struct(play_struct, play_struct_pointer);
	print_struct(play_struct, play_struct_pointer);
	
	print_string(play_struct.a_string);
	
	change_string(play_struct.a_string, &another_string_pointer);
	
	print_string(another_string);
	print_string(play_struct.a_string);
	return 0;
}
