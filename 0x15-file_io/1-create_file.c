#include "main.h"

/**
 * create_file - creates a file
 * @filename: the file name
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
        FILE *fp;
        size_t n = 0;
        char c;

        if (filename == NULL)
                return (0);
        fp = fopen(filename, "r");
        if (fp == NULL)
                return (0);
        while (n < letters)
        {
                c = fgetc(fp);
                if (c == EOF)
                        break;
                if (_putchar(c) != 1)
                        return (0);
                n++;
        }
        fclose(fp);
        return ((ssize_t)n);
}

