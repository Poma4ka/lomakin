#include <stdio.h>

typedef struct fish{
    const char *name;
    const char *species;
    int teeth;
    int age;
} fish;
void catalog(fish f){
    printf("%s - это %s с %d зубами, ему %d лет\n",
        f.name, f.species, f.teeth, f.age);
}
int main(){
    fish snappy = {"Зубастик", "пиранья", 69, 4};
    catalog(snappy);
    return 0;
} 
