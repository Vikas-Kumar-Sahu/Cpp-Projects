#include<iostream>
using namespace std;

int main(){

    int finalResult = 0;
    char playAgain;
    int playQuiz(void);
    play:
    finalResult = playQuiz();
    cout << "Your score is "<< finalResult << endl;

    if (finalResult >= 6)
    {
        cout << "You are pass this Quiz." << endl;
        cout << "Do you want to play the Quiz again." << endl; 
        cout << "if yes then enter y else n." << endl;
        cin >> playAgain;
        if (playAgain=='y' || playAgain=='Y')
        {
            goto play;
        }
        else
        {
            cout << "Thank you to play Quiz." << endl;
        }
        
    }
    else{
        cout << "You are fail this Quiz." << endl;
        cout << "Do you want to pass this Quiz again." << endl; 
        cout << "if yes then enter y else n." << endl;
        cin >> playAgain;
        if (playAgain=='y' || playAgain=='Y')
        {
            goto play;
        }
        else
        {
            cout << "Thank you to play Quiz." << endl;
        }
    }
    
}
int playQuiz(){
    char c;
    char option;
    int score = 0;
    playInsidethefunction:
    cout << "----------Welcome to Quiz Game---------" << endl;
    cout << "-------Please follow the instructions-----"<< endl;
    cout << "step 1 : Quiz conatins 10 question" << endl;
    cout << "step 2 : Yuo will given 1 marks for each right ans" << endl;
    cout << "step 3 : There will be negative marking in wrong ans" << endl;
    cout << "step 4 : Please press s to start quiz" << endl;
    cout << "step 5 : Please select option a,b,c,d for ans" << endl;
    cout << "step 6 : If you score >= 6, you will pass the Quiz " << endl;
    cout << "step 7 : playAgain enter y or n, enter the value" << endl;
    cin >> c;
    if (c=='s' || c=='S')
    {
        cout << "Q1. What is the capital of India." << endl;
        cout << "(a) Delhi (b) Kolkata (c) Mumbai (d) Chennai" << endl;
        cin >> option;
        if (option=='a' || option=='A')
        {
            score = score + 1;
        }
        else{
            score = score - 1;
        }

        cout << "Q2. Who is the prime minister of India." << endl;
        cout << "(a) Adityanath (b) Modi (c) Kejriwal (d) Rahul" << endl;
        cin >> option;
        if (option=='b' || option=='B')
        {
            score = score + 1;
        }
        else{
            score = score - 1;
        }

        cout << "Q3. What is the national bird of India." << endl;
        cout << "(a) Sparrow (b) Piegon (c) Peacock (d) Parrot" << endl;
        cin >> option;
        if (option=='c' || option=='C')
        {
            score = score + 1;
        }
        else{
            score = score - 1;
        }

        cout << "Q4. What is the national animal of India." << endl;
        cout << "(a) Lion (b) Tiger (c) Horse (d) Leopard" << endl;
        cin >> option;
        if (option=='b' || option=='B')
        {
            score = score + 1;
        }
        else{
            score = score - 1;
        }

        cout << "Q5. What is the national of India." << endl;
        cout << "(a) Rose (b) Lillit (c) Lotus (d) Sunflower" << endl;
        cin >> option;
        if (option=='c' || option=='C')
        {
            score = score + 1;
        }
        else{
            score = score - 1;
        }

        cout << "Q6. Who is the chief minister of UP." << endl;
        cout << "(a) Nitin (b) Kejriwal (c) Lalu (d) Adityanath" << endl;
        cin >> option;
        if (option=='a' || option=='A')
        {
            score = score + 1;
        }
        else{
            score = score - 1;
        }

        cout << "Q7. What is the capital of UP." << endl;
        cout << "(a) Lucknow (b) Prayagraj (c) Mirzapur (d) Varansi" << endl;
        cin >> option;
        if (option=='a' || option=='A')
        {
            score = score + 1;
        }
        else{
            score = score - 1;
        }

        cout << "Q8. What is the capital of Bihar." << endl;
        cout << "(a) Dalsinghsarai (b) Samastipur (c) Patna (d) Ujjain" << endl;
        cin >> option;
        if (option=='c' || option=='C')
        {
            score = score + 1;
        }
        else{
            score = score - 1;
        }

        cout << "Q9. Who is captain of Inian Cricket team." << endl;
        cout << "(a) Kohli (b) Rahul (c) Rohit (d) Dhoni" << endl;
        cin >> option;
        if (option=='d' || option=='D')
        {
            score = score + 1;
        }
        else{
            score = score - 1;
        }

        cout << "Q10. Who is master blaster of India." << endl;
        cout << "(a) Dhoni (b) Dravid (c) Sachin (d) Kumble" << endl;
        cin >> option;
        if (option=='a' || option=='A')
        {
            score = score + 1;
        }
        else{
            score = score - 1;
        }
    }
    else{
        cout << "You have entered wrong value, Please enter the right value." << endl;
        goto playInsidethefunction;
    }
    return score;
}