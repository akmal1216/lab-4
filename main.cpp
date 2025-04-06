//lab 5

// problem 1

// #include <iostream>
// using namespace std;
//
// int main() {
//     // 1.1
//     for (int i = 1; i <= 10; ++i)
//         cout << i << " ";
//     cout << endl;
//
//     // 1.2
//     int N;
//     cout << "Enter N: ";
//     cin >> N;
//     for (int i = 1; i <= N; ++i)
//         cout << i << " ";
//     cout << endl;
//
//     // 1.3
//     int sum = 0;
//     for (int i = 1; i <= 10; ++i)
//         sum += i;
//     cout << "Sum of first 10 numbers: " << sum << endl;
//
//     // 1.4
//     sum = 0;
//     cout << "Enter N again: ";
//     cin >> N;
//     for (int i = 1; i <= N; ++i)
//         sum += i;
//     cout << "Sum of first " << N << " numbers: " << sum << endl;
//
//     // 1.5
//     sum = 0;
//     for (int i = 1; i <= 10; ++i)
//         sum += i;
//     cout << "Average of first 10 numbers: " << (sum / 10.0) << endl;
//
//     // 1.6
//     sum = 0;
//     cout << "Enter N for average: ";
//     cin >> N;
//     for (int i = 1; i <= N; ++i)
//         sum += i;
//     cout << "Average of first " << N << " numbers: " << (sum / (float)N) << endl;
//
//     return 0;
// }

//problem 2

// #include <iostream>
// using namespace std;
//
// int main() {
//     // 2.1
//     cout << "Odd numbers (1-10): ";
//     for (int i = 1; i <= 10; ++i)
//         if (i % 2 != 0)
//             cout << i << " ";
//     cout << endl;
//
//     // 2.2
//     cout << "Even numbers (1-10): ";
//     for (int i = 1; i <= 10; ++i)
//         if (i % 2 == 0)
//             cout << i << " ";
//     cout << endl;
//
//     // 2.3
//     int N;
//     cout << "Enter N for odd: ";
//     cin >> N;
//     for (int i = 1; i <= N; ++i)
//         if (i % 2 != 0)
//             cout << i << " ";
//     cout << endl;
//
//     // 2.4
//     cout << "Enter N for even: ";
//     cin >> N;
//     for (int i = 1; i <= N; ++i)
//         if (i % 2 == 0)
//             cout << i << " ";
//     cout << endl;
//
//     // 2.5
//     cout << "Divisible by 10 (1-100): ";
//     for (int i = 10; i <= 100; i += 10)
//         cout << i << " ";
//     cout << endl;
//
//     // 2.6
//     cout << "Enter N for divisible by 10: ";
//     cin >> N;
//     for (int i = 10; i <= N; i += 10)
//         cout << i << " ";
//     cout << endl;
//
//     return 0;
// }

//problem 3

// #include <iostream>
// using namespace std;
//
// int main() {
//     char ch = 'A';
//     int count = 0;
//     while (ch <= 'Z') {
//         cout << ch << " ";
//         count++;
//         if (count % 5 == 0)
//             cout << endl;
//         ch++;
//     }
//     return 0;
// }

//problem 4

// #include <iostream>
// using namespace std;
//
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//
//     if (n < 0)
//         cout << "Factorial of a negative number is not defined." << endl;
//     else {
//         long long factorial = 1;
//         for (int i = 1; i <= n; ++i)
//             factorial *= i;
//         cout << "Factorial of " << n << " is " << factorial << endl;
//     }
//
//     return 0;
// }

//problem 5

// #include <iostream>
// using namespace std;
//
// int main() {
//     int classes, credit;
//     float grade, totalGPA = 0, totalCredits = 0;
//
//     cout << "Enter number of classes: ";
//     cin >> classes;
//
//     for (int i = 0; i < classes; i++) {
//         cin >> credit >> grade;
//         totalGPA += credit * grade;
//         totalCredits += credit;
//     }
//
//     cout << "Your total GPA is\n" << (totalGPA / totalCredits) << endl;
//     return 0;
// }

//problem 6

// #include <iostream>
// using namespace std;
//
// int main() {
//     int students, classes, credit;
//     float grade;
//
//     cout << "Enter number of students: ";
//     cin >> students;
//
//     for (int i = 1; i <= students; ++i) {
//         cout << "Student " << i << " - enter number of classes: ";
//         cin >> classes;
//
//         float total = 0, credits = 0;
//         for (int j = 0; j < classes; ++j) {
//             cin >> credit >> grade;
//             total += credit * grade;
//             credits += credit;
//         }
//
//         cout << "Student " << i << "'s GPA is " << (total / credits) << endl;
//     }
//
//     return 0;
// }

//problem 7

// #include <iostream>
// using namespace std;
//
// int main() {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;
//
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < n; ++j)
//             cout << "*";
//         cout << endl;
//     }
//
//     return 0;
// }

//problem 8

// #include <iostream>
// using namespace std;
//
// int main() {
//     int n;
//     cout << "Enter height: ";
//     cin >> n;
//
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= i; ++j)
//             cout << "*";
//         cout << endl;
//     }
//
//     return 0;
// }

//problem 9

// #include <iostream>
// using namespace std;
//
// int main() {
//     int n, i, flag = 0;
//     cout << "Enter a number: ";
//     cin >> n;
//
//     if (n <= 1)
//         flag = 1;
//     else {
//         for (i = 2; i <= n / 2; ++i) {
//             if (n % i == 0) {
//                 flag = 1;
//                 break;
//             }
//         }
//     }
//
//     if (flag == 0)
//         cout << "Number is prime\n";
//     else
//         cout << "Number is not prime\n";
//
//     return 0;
// }

// problem 10

// #include <iostream>
// using namespace std;
//
// int main() {
//     int n;
//     cout << "Enter value of n: ";
//     cin >> n;
//
//     for (int i = 1; i <= n; ++i)
//         cout << i << "*" << i << "=" << (i * i) << endl;
//
//     return 0;
// }

//problem 11

// #include <iostream>
// using namespace std;
//
// int main() {
//     int num, positives = 0, negatives = 0, total = 0, count = 0;
//
//     cout << "Enter integers (0 to stop): ";
//     while (true) {
//         cin >> num;
//         if (num == 0)
//             break;
//
//         total += num;
//         count++;
//         if (num > 0)
//             positives++;
//         else
//             negatives++;
//     }
//
//     if (count == 0)
//         cout << "No numbers entered." << endl;
//     else {
//         cout << "The number of positives is " << positives << endl;
//         cout << "The number of negatives is " << negatives << endl;
//         cout << "The total is " << total << endl;
//         cout << "The average is " << (total / (float)count) << endl;
//     }
//
//     return 0;
// }

//problem 12

// #include <iostream>
// using namespace std;
//
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//
//     cout << "Reversed: ";
//     while (n > 0) {
//         cout << n % 10;
//         n /= 10;
//     }
//     cout << endl;
//
//     return 0;
// }

//problem 13

// #include <iostream>
// using namespace std;
//
// int main() {
//     int depth;
//     cout << "Enter depth: ";
//     cin >> depth;
//
//     if (depth == 0)
//         cout << "The depth is 0" << endl;
//     else {
//         for (int i = 1; i <= depth; ++i) {
//             for (int j = 1; j <= i; ++j)
//                 cout << i;
//             cout << endl;
//         }
//     }
//
//     return 0;
// }

//problem 14

// #include <iostream>
// using namespace std;
//
// int main() {
//     int binary, decimal = 0, base = 1;
//     cout << "Enter binary number: ";
//     cin >> binary;
//
//     while (binary > 0) {
//         int lastDigit = binary % 10;
//         decimal += lastDigit * base;
//         base *= 2;
//         binary /= 10;
//     }

//     cout << "The decimal number is " << decimal << endl;
//     return 0;
// }


