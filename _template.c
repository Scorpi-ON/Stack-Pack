#include "lib/tools.h"
#include "lib/stack.h"


// Your target func.


int main(void)
{
    STACK *myStack;
    // And maybe another vars.
    FILE *output = openFile("output.txt", "w");
    puts("Fill stack:");
    myStack = create(); // Or fill(&myStack) if you need the stack length.
    // Maybe additional user input.
    printf("\nOriginal stack: ");
    printToFile(myStack, stdout);
    // Target func call + prints of results to stdout & output file.
    clear(myStack);
    // And for other used STACKs.
    system("pause");
    return 0;
}
