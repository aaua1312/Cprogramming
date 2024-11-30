#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

struct City {
    char name[20];
    char country[20];
    char pop[50];
};
// \n 제거
void remove_newline(char* str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}
int main(void) {
    struct City city[3];

    for (int i = 0; i < 3; i++) {
        printf("도시 이름: ");
        fgets(city[i].name, sizeof(city[i].name), stdin);
        //scanf("%[^\0]s",&city[i].name);
        remove_newline(city[i].name);
        printf("속한 국가: ");
        fgets(city[i].country, sizeof(city[i].country), stdin);
        remove_newline(city[i].country);
        printf("인구수: ");
        fgets(city[i].pop, sizeof(city[i].pop), stdin);
        remove_newline(city[i].pop);
    }

    for (int i = 0; i < 3; i++)
        printf("%s in %s with a population of %s people.\n", city[i].name, city[i].country, city[i].pop);
    return 0;
}