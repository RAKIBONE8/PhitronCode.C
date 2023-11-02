#include <stdio.h>
void world()
{
    printf("World\n");
}
void hello()
{
    printf("Hello\n");
    world();
    printf("Hello end\n");
}
int main()
{
    printf("Main start\n");
    hello();
    printf("Main End\n");

    return 0;
}