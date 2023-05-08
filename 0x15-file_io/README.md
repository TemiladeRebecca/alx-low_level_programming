C File Input/Output 📃  About this project:

In this project I have learnt and practiced; File descriptors and how to use open()read()write() Functions

Task file description;
Main.h: My header file which contains prototypes and description for all functions written in my 0x15. C – File Input/Output.

0-read_textfile.c: A function that reads a text file and prints it to the POSIX standard output.
where letters is the number of letters it should read and print
returns the actual number of letters it could read and print
if the file can not be opened or read, return 0
if filename is NULL return 0
if write fails or does not write the expected amount of bytes, return 0

1-create_file.c: A function that creates a file.
where filename is the name of the file to create and text_content is a NULL terminated string to write to the file
Returns: 1 on success, -1 on failure

2-append_text_to_file: A function that appends text at the end of a file
where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file
Return: 1 on success and -1 on failure

3-cp.c: A program that copies the content of a file to another file.

100-elf_header.c.c: A program that displays the information contained in the ELF header at the start of an ELF file.
~                                                                                             
