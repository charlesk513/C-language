#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char buf[1024];

    // Prompt
    printf("Enter a number (e.g. 12345): ");
    if (!fgets(buf, sizeof buf, stdin))
        return 1;

    // Remove trailing newline
    buf[strcspn(buf, "\n")] = '\0';

    int sum = 0;
    int found_digit = 0;

    for (size_t i = 0; i < strlen(buf); ++i)
    {
        if (isdigit((unsigned char)buf[i]))
        {
            sum += buf[i] - '0';
            found_digit = 1;
        }
        // ignore other characters (e.g. spaces, '+' or '-')
    }

    if (!found_digit)
    {
        printf("No digits found in input.\n");
        return 1;
    }

    printf("Sum of digits = k%d\n", sum);
    return 0;
}