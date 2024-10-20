#include <iostream>
#include <vector>

bool isPrime(int number) {
    if (number <= 1) return false; // اعداد منفی و 0 و 1 اول نیستند
    for (int i = 2; i * i <= number; ++i) { // بررسی تا ریشه‌ی مربع عدد
        if (number % i == 0) return false; // اگر عدد قابل تقسیم باشد، اول نیست
    }
    return true; // اگر هیچ تقسیما وجود نداشت، عدد اول است
}

int main() {
    std::vector<int> primeNumbers; // لیستی برای ذخیره‌ی اعداد اول

    for (int i = 2; i <= 1000; ++i) { // سی اعداد از 2 تا 1000
        if (isPrime(i)) {
            primeNumbers.push_back(i); // اگر عدد اول بود، به لیست اضافه می‌شود
        }
    }

    // نمایش اعداد اول
    std::cout << "اعداد اول بین 1 تا 1000:\n";
    for (int prime : primeNumbers) {
        std::cout << prime << " ";
    }
    std::cout << std::endl;

    return 0;
}

