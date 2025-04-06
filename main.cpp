//lab 4

//problem 1

// #include <iostream>
// using namespace std;
//
// int main() {
//     int num;
//     cin >> num;
//     if (num >= 0)
//         cout << "Positive number";
//     else
//         cout << "Negative number";
//     return 0;
// }


//problem 2

// #include <iostream>
// using namespace std;
//
// int main() {
//     int num;
//     cin >> num;
//     if (num % 2 == 0)
//         cout << "Even number";
//     else
//         cout << "Odd number";
//     return 0;
// }

//problem 3

// #include <iostream>
// using namespace std;
//
// int main() {
//     int a, b;
//     cin >> a >> b;
//     if (a > b)
//         cout << "Largest number is " << a;
//     else
//         cout << "Largest number is " << b;
//     return 0;
// }


//problem 4

// #include <iostream>
// using namespace std;
//
// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
//     if (a >= b && a >= c)
//         cout << "Largest number is " << a;
//     else if (b >= a && b >= c)
//         cout << "Largest number is " << b;
//     else
//         cout << "Largest number is " << c;
//     return 0;
// }

//problem 5

// #include <iostream>
// using namespace std;
//
// int main() {
//     int year;
//     cin >> year;
//     if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//         cout << "Leap year";
//     else
//         cout << "Not a leap year";
//     return 0;
// }

//problem 6

// #include <iostream>
// using namespace std;
//
// int main() {
//     int speed;
//     cin >> speed;
//     if (speed < 20)
//         cout << "too slow";
//     else if (speed > 80)
//         cout << "too fast";
//     else
//         cout << "just right";
//     return 0;
// }

//problem 7

// #include <iostream>
// using namespace std;
//
// int main() {
//     int marks;
//     cin >> marks;
//     if (marks >= 50)
//         cout << "Pass";
//     else
//         cout << "Fail";
//     return 0;
// }

//problem 8

// #include <iostream>
// using namespace std;
//
// int main() {
//     int num;
//     cin >> num;
//     if (num > 0)
//         cout << "Positive";
//     else if (num < 0)
//         cout << "Negative";
//     else
//         cout << "Zero";
//     return 0;
// }

//problem 9

// #include <iostream>
// using namespace std;
//
// int main() {
//     char light;
//     cin >> light;
//     if (light == 'g')
//         cout << "Go!";
//     else if (light == 'y')
//         cout << "Get ready!";
//     else if (light == 'r')
//         cout << "Stop";
//     else
//         cout << "Invalid input";
//     return 0;
// }

//problem 10

// #include <iostream>
// using namespace std;
//
// int main() {
//     int grade;
//     cin >> grade;
//     switch (grade / 10) {
//         case 10:
//         case 9: cout << "A"; break;
//         case 8: cout << "B"; break;
//         case 7: cout << "C"; break;
//        default: cout << "F";
//     }  case 6: cout << "D"; break;
//
//     return 0;
// }

//problem 11

// #include <iostream>
// using namespace std;
//
// int main() {
//     int a, b;
//     cin >> a >> b;
//     if (b == 0)
//         cout << "Cannot divide by zero";
//     else if (a % b == 0)
//         cout << a << " is divisible by " << b;
//     else
//         cout << a << " is not divisible by " << b;
//     return 0;
// }

// problem 12

// #include <iostream>
// using namespace std;
//
// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
//     if (a + b + c == 180)
//         cout << "The triangle is valid";
//     else
//         cout << "The triangle is not valid";
//     return 0;
// }

//problem 13

// #include <iostream>
// using namespace std;
//
// int main() {
//     char ch;
//     cin >> ch;
//     if (ch >= 'a' && ch <= 'z')
//         cout << "Lowercase alphabet";
//     else if (ch >= 'A' && ch <= 'Z')
//         cout << "Uppercase alphabet";
//     else
//         cout << "It is not an alphabet";
//     return 0;
// }

//problem 14

// #include <iostream>
// using namespace std;
//
// int main() {
//     double w1, p1, w2, p2;
//     cin >> w1 >> p1 >> w2 >> p2;
//     double price1 = p1 / w1;
//     double price2 = p2 / w2;
//
//     if (price1 < price2)
//         cout << "Package 1 has a better price";
//     else if (price2 < price1)
//         cout << "Package 2 has a better price";
//     else
//         cout << "Two packages have the same price.";
//     return 0;
// }

//problem 15

// #include <iostream>
// using namespace std;
//
// int main() {
//     int num;
//     cin >> num;
//     int original = num;
//     int reversed = 0;
//
//     while (num > 0) {
//         int digit = num % 10;
//         reversed = reversed * 10 + digit;
//         num /= 10;
//     }
//
//     if (original == reversed)
//         cout << original << " is a palindrome";
//     else
//         cout << original << " is not a palindrome";
//     return 0;
// }

// sorry i can't do 16 and 17









