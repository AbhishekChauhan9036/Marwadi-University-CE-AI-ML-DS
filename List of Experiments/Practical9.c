// Apply structure and union concepts in C programs for data management
#include <stdio.h>
struct student {
    int id;
    char name[20];
};
union data {
    int x;
    float y;
};
int main() {
    struct student s = {1, "Ram"};
    union data d;
    d.x = 10;

    printf("%d %s\n", s.id, s.name);
    printf("%d", d.x);

    return 0;
}

