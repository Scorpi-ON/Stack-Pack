#include "lib/tools.h"
#include "lib/stack.h"


bool removeFirstEvenElem(STACK **head)
{
    STACK *current = *head,
          *previous = NULL;
    do
    {
        if (current -> value % 2 == 0)
        {
            if (previous)
                previous -> next = current -> next;
            else
                *head = current -> next;
            free(current);
            return true;
        }
        previous = current;
        current = current -> next;
    } while (current);
    return false;
}


int main(void)
{
    STACK *myStack;
    FILE *output = fopen("output.txt", "w");

    puts("Fill stack:");
    myStack = create();
    printf("Original stack: ");
    printToFile(myStack, stdout);
    if (removeFirstEvenElem(&myStack))
    {
        printf("\nChanged stack: ");
        printToFile(myStack, stdout);
        printToFile(myStack, output);
    }
    else
        puts("\nThere are no even numbers! Nothing to change.");

    fclose(output);
    clear(myStack);
    system("pause");
    return 0;
}
