#include <stdio.h>
#include <string.h>

char *str_replace(const char *str, const char *old_word, const char *new_word)
{
    int i = 0, count = 0;
    int new_word_len = strlen(new_word);
    int old_word_len = strlen(old_word);
    int str_len = strlen(str);

    //to check the string is present
    while (str[i] != '\0')
    {
        if (strstr(&str[i], old_word) == &str[i])
        {
            //jump over this word
            i += old_word_len;
            count++;
            continue;
        }

        i++;
        // printf("%c" , str[i] );
    };

    if (count)
    {
        char *result = (char *)malloc(str_len + count * (new_word_len - old_word_len) + 1); //+1 to to add '\0' at end

        i = 0;

        while (*str)
        {
            //compare the substring with result
            if (strstr(str, old_word) == str)
            {
                strcpy(&result[i], new_word);

                i += new_word_len;
                str += old_word_len;
            }
            else
            {
                result[i] = *str;
                i++;
                str++;
            }
        };

        result[i] = '\0';
        // printf("new letter :\n%s", result);

        // strcpy(str, result);
        // *letter = *result;
        // free(result);
        return result;
    }

    return str;
}

int main()
{
    const char *name = "vikash", *item = "fan", *outlet = "db city mall";

    char *letter = "thanks {{name}} for purchasing {{item}} from out outlet {{outlet}}.\nplease visit out outlet {{outlet}} for any king of problem. We plan to serve you again soon.thankyou {{name}}  for this {{item}} item\n";

    letter = str_replace(letter, "{{name}}", name);
    letter = str_replace(letter, "{{item}}", item);
    letter = str_replace(letter, "{{outlet}}", outlet);

    FILE *ptr = fopen("receipt.txt", "w");

    if (ptr == NULL)
        puts("file does not create!!");

    fprintf(ptr, "%s", letter);
    printf("%s", letter);
    letter = NULL;

    fclose(ptr);
    return 0;
}