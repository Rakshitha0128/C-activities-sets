#include <stdio.h>
struct _complex 
{
    float real, imaginary;
};
typedef struct _complex Complex;

int get_n() {
    int n;
    printf("Enter the number of complex numbers: ");
    scanf("%d", &n);
    return n;
}

Complex input_complex() {
    Complex num;
    printf("Enter the real part: ");
    scanf("%f", &num.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &num.imaginary);
    return num;
}

void input_n_complex(int n, Complex c[n]) {
    printf("Enter the complex numbers:\n");
    for (int i = 0; i < n; ++i) {
        printf("Complex number %d:\n", i + 1);
        c[i] = input_complex();
    }
}

Complex add(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}


Complex add_n_complex(int n, Complex c[n]) {
    Complex result = {0, 0}; 
    for (int i = 0; i < n; ++i) {
        result = add(result, c[i]);
    }
    return result;
}
void output(int n, Complex c[n], Complex result) {
    printf("Sum of the %d complex numbers is %.2f + %.2fi\n",
           n, result.real, result.imaginary);
}
int main() 
{
    int n;
    Complex result;
    n = get_n();
    Complex complex_numbers[n];
    input_n_complex(n, complex_numbers);
    result = add_n_complex(n, complex_numbers);
    output(n, complex_numbers, result);
    return 0;
}
