#include <stdio.h>
int input_array_size() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}
void input_array(int n, int a[]) {
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

int sum_n_array(int n, int a[]) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
    }
    return sum;
}


void output(int n, int a[], int sum) {
    printf("The sum of the entered numbers is: %d\n", sum);
    printf("The entered numbers are: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
}


int main() {
    int n, sum;
    n = input_array_size();
    int a[n];
    input_array(n, a);
    sum = sum_n_array(n, a);
    output(n, a, sum);
    return 0;
}
