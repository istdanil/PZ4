#include <stdio.h>
#include <Windows.h>

void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    printf("������ ���������� ����� n: ");
    scanf_s("%d", &n);
    int count = 0; 
    for (int i = 1; i <= n; i++) {
        if (n % i == n / i) {
            count++;
        }
    }
    printf("ʳ������ ����� ������� ����� %d: %d\n", n, count);
}
