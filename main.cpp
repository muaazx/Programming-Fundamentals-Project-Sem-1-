#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>
#include <conio.h>

using namespace std;
using namespace chrono;

 int Q_NO = 1;
 int CORRECT = 0;
 int WRONG = 0;

   bool ask[30] = {true, true, true, true, true, true, true, true, true, true, true, true, true, true, true,
                true, true, true, true, true, true, true, true, true, true, true, true, true, true, true};
   auto start_time = system_clock::now();
   int TIME_LIMIT = 400;

void welcome_message();
void display();
void question(const string &question, const string &a, const string &b, const string &c, const string &d, char correct_answer);
void result();
bool is_time_remaining();

int main() {
    welcome_message();
    start_time = system_clock::now();
    display();
    return 0;
}

void welcome_message() {
    cout << "======================================" << endl;
    cout << "   Welcome to the C++ Quiz Program!   " << endl;
    cout << "======================================" << endl << endl;
    cout << "Test your knowledge of programming basics!" << endl;
    cout << "You will be asked 30 questions, one by one." << endl;
    cout << "For each question, type the letter corresponding to the correct answer (A, B, C, or D)." << endl;
    cout << "You have 400 Seconds to complete the quiz. Good luck!" << endl << endl;
    cout << "Press any key to start the test..." << endl;
    _getch(); // Wait for user to start
    system("cls");
}

void display() {
    system("cls");
    cout << "Question NO: " << Q_NO << "\t\tCorrect Answers: " << CORRECT << "\t\tWrong Answers: " << WRONG << endl;

    int time_remaining = TIME_LIMIT - duration_cast<seconds>(system_clock::now() - start_time).count();
    if (time_remaining > 0) {
        cout << "Time Remaining: " << time_remaining << " seconds" << endl << endl;
    } else {
        cout << "\nTime's up!" << endl;
        result();
        return;
    }

    for (int i = 0; i < 30; i++) {
        if (ask[i]) {
            ask[i] = false;
            switch (i) {
                case 0:
                    question("1. Which language supports the Object Oriented Programming Technique?", "C language", "C++ language", "Cobal language", "Fortran Language", 'b');
                    break;
                case 1:
                    question("2. What is a variable?", "An empty container in which we store data", "box", "Data type", "language", 'a');
                    break;
                case 2:
                    question("3. Which of the following is a high-level programming language?", "C", "C++", "Java", "Machine code", 'c');
                    break;
                case 3:
                    question("4. What does OOP stand for?", "Object Oriented Programming", "Object Option Programming", "Open Operated Programming", "Other Operation Programming", 'a');
                    break;
                case 4:
                    question("5. Which of these is not a loop structure in programming?", "for", "while", "until", "do-while", 'c');
                    break;
                case 5:
                    question("6. What is the main function in C++?", "main()", "start()", "begin()", "init()", 'a');
                    break;
                case 6:
                    question("7. Which is the correct syntax for declaring a variable in C++?", "int x;", "int x = 5;", "x int;", "int x 5;", 'b');
                    break;
                case 7:
                    question("8. What is polymorphism in OOP?", "Ability to create multiple objects", "Ability to hide data", "Ability to take many forms", "None of the above", 'c');
                    break;
                case 8:
                    question("9. What does HTML stand for?", "HyperText Markup Language", "HyperText Machine Language", "HighText Markup Language", "None of the above", 'a');
                    break;
                case 9:
                    question("10. Which language is primarily used for web development?", "C", "Python", "HTML", "Java", 'c');
                    break;
                case 10:
                    question("11. What is inheritance in OOP?", "Ability of a class to use methods of another class", "Ability to inherit rights", "Sharing data between two programs", "None of the above", 'a');
                    break;
                case 11:
                    question("12. Which of the following is an example of an IDE?", "Notepad", "Eclipse", "Notepad++", "Terminal", 'b');
                    break;
                case 12:
                    question("13. What is an array?", "A data structure to store multiple values", "A type of loop", "A method", "A function", 'a');
                    break;
                case 13:
                    question("14. Which of the following is used to define a constant in C++?", "const", "let", "define", "constant", 'a');
                    break;
                case 14:
                    question("15. What does the 'cin' keyword do in C++?", "Output data", "Input data", "Control flow", "Define a variable", 'b');
                    break;
                case 15:
                    question("16. What is the purpose of a compiler?", "To translate high-level code to machine code", "To debug code", "To execute code", "To optimize code", 'a');
                    break;
                case 16:
                    question("17. What is the correct syntax for a comment in C++?", "/* Comment */", "// Comment", "Both A and B", "# Comment", 'c');
                    break;
                case 17:
                    question("18. What is encapsulation in OOP?", "Hiding the implementation details", "Combining functions", "Creating new classes", "None of the above", 'a');
                    break;
                case 18:
                    question("19. What is the output of 5 % 2 in C++?", "2", "1", "0", "5", 'b');
                    break;
                case 19:
                    question("20. What is the keyword for a conditional statement in C++?", "if", "for", "switch", "while", 'a');
                    break;
                case 20:
                    question("21. What is a pointer in C++?", "A variable that stores an address", "A loop", "A type of array", "A function", 'a');
                    break;
                case 21:
                    question("22. Which operator is used for accessing members of a class in C++?", ".", "::", "->", "All of the above", 'd');
                    break;
                case 22:
                    question("23. Which of the following is used to handle exceptions in C++?", "try-catch", "if-else", "switch-case", "while-loop", 'a');
                    break;
                case 23:
                    question("24. What is the size of an int data type in most compilers?", "4 bytes", "2 bytes", "8 bytes", "16 bytes", 'a');
                    break;
                case 24:
                    question("25. What is a destructor in C++?", "A function that destroys objects", "A function that initializes objects", "A function that creates objects", "None of the above", 'a');
                    break;
                case 25:
                    question("26. What is the purpose of the 'return' keyword in C++?", "To exit a loop", "To exit a program", "To return a value from a function", "None of the above", 'c');
                    break;
                case 26:
                    question("27. Which operator is used for dynamic memory allocation in C++?", "malloc", "new", "calloc", "None of the above", 'b');
                    break;
                case 27:
                    question("28. What is the correct syntax for a 'for' loop in C++?", "for(int i = 0; i < n; i++)", "for i = 0 to n", "loop(int i; i < n; i++)", "None of the above", 'a');
                    break;
                case 28:
                    question("29. What is the result of the expression 2 + 2 * 2 in C++?", "6", "8", "4", "2", 'a');
                    break;
                case 29:
                    question("30. Which header file is used for input/output operations in C++?", "<iostream>", "<stdlib.h>", "<stdio.h>", "<string>", 'a');
                    break;
            }
            break;
        }
    }
    result();
}

  void question(const string &question, const string &a, const string &b, const string &c, const string &d, char correct_answer) {
    cout << question << endl;
    cout << "a.\t" << a << endl;
    cout << "b.\t" << b << endl;
    cout << "c.\t" << c << endl;
    cout << "d.\t" << d << endl;

    char answer;
    cin >> answer;
    if (tolower(answer) == correct_answer)
        CORRECT++;
    else
        WRONG++;

    Q_NO++;
    display();
}

 void result() {
    system("cls");
    cout << "======================================" << endl;
    cout << "              Quiz Results            " << endl;
    cout << "======================================" << endl;
    cout << "Total Questions = " << Q_NO - 1 << endl;
    cout << "Correct Answers = " << CORRECT << endl;
    cout << "Wrong Answers = " << WRONG << endl;
    if (CORRECT > WRONG)
        cout << "Result = PASS" << endl;
    else if (WRONG > CORRECT)
        cout << "Result = FAIL" << endl;
    else
        cout << "Result = Tie" << endl;
    cout << "======================================" << endl;
    cout << "Thank you for taking the quiz!!!" << endl;
    _getch();
}

  bool is_time_remaining() {
    int elapsed_time = duration_cast<seconds>(system_clock::now() - start_time).count();
    return elapsed_time < TIME_LIMIT;
}
