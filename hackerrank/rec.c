#include<stdio.h>

void swap(char list[], int i, int j){
    char t = list[i];
    list[i] = list[j];
    list[j] = t;
}

void func(char list[], int i, int n) {
    int j = 0;
    if (j == n) {
        for(j = 0; j <= n; j++)
            printf("%c", list[j]);
        printf(" ");
    }
    else {
        for(j = i; j <= n; j++) {
            swap(list, i, j);
            func(list, i+1, n);
            swap(list, i, j);
        }
    }
}

int main() {
    char arr[] = {'a', 'b', 'c'};
    func(arr, 0, 2);
    return 0;
}