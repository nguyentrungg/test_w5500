#include <stdio.h>
#include <stdarg.h>
#include "mcc_generated_files/uart1.h"
void UART1_SendString(char* string){
    int length = (int)strlen(string);
    while(length >= 0){
        UART1_Write(string[(strlen(string) - length)]);
        length = length - 1;
    }
}
void my_print(const char *format, ...) { // Hàm dùng ?? g?i m?t b?n tin qua UART, các dùng gi?ng printf
    char buffer[100];
    va_list args;
    va_start(args, format);

    int written = 0;
    int result;

    while (*format != '\0') {
        if (*format == '%' && *(format + 1) != '\0') {
            format++;
            switch (*format) {
                case 'd':
                    result = sprintf(buffer + written, "%d", va_arg(args, int));
                    break;
                case 'f':
                    result = sprintf(buffer + written, "%f", va_arg(args, double));
                    break;
                case 'c':
                    result = sprintf(buffer + written, "%c", va_arg(args, int));
                    break;
                case 's':
                    result = sprintf(buffer + written, "%s", va_arg(args, char *));
                    break;
                default:
                    result = sprintf(buffer + written, "%%%c", *format);
                    break;
            }

            if (result < 0) {
                // Handle error if needed
                break;
            }

            written += result;
        } else {
            buffer[written++] = *format;
        }
        format++;
    }

    va_end(args);
    buffer[written] = '\0';
    UART1_SendString(buffer);
}

