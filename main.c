//HeaderFiles
#include <stdio.h>
#include <stdlib.h>

/*Function declaration that prompts the user the students 1st,
2nd and 3rd score/grade and reads the first grade, second grade, and third grade*/
int readFirstGrade();
int readSecondGrade();
int readThirdGrade();

//Function declaration that computes the average
double processGrade(int firstGrade, int secondGrade, int thirdGrade);

//Function declaration that prints out the output whether the student got A, B C, D, or F
void printGrade();

int main()
{
    //Calling printGrade function in main function to print the output
    printGrade();

    return 0;
}
//----------------------Function Definition------------------------
int readFirstGrade(){
    int firstScore;
    printf("Enter first score: "); // Simple user input interface
    scanf("%d", &firstScore);   // Reads the data

    return firstScore; // Returns the data
}

int readSecondGrade(){
    int secondScore;
    printf("Enter first score: "); // Simple user input interface
    scanf("%d", &secondScore);  // Reads the data

    return secondScore; // Returns the data
}

int readThirdGrade(){
    int thirdScore;
    printf("Enter first score: "); // Simple user input interface
    scanf("%d", &thirdScore);   // Reads the data

    return thirdScore; // Returns the data
}

double processGrade(int firstGrade, int secondGrade, int thirdGrade){
    double sumOfGrade;
    sumOfGrade = firstGrade + secondGrade + thirdGrade; //Sum up all the parameters
    return (double)sumOfGrade / 3.0;// Return the average (sum of all the items / number of items)
}

void printGrade(){
    int firstGrade;
    int secondGrade;
    int thirdGrade;
    double average;
    firstGrade = readFirstGrade(); // Prints out the "Simple user input interface" and the firstGrade variable is the receiver of the returned value
    secondGrade = readSecondGrade(); // Prints out the "Simple user input interface" and the secondGrade variable is the receiver of the returned value
    thirdGrade = readThirdGrade(); // Prints out the "Simple user input interface" and the thirdGrade variable is the receiver of the returned value
    average = processGrade(firstGrade, secondGrade, thirdGrade);//gets the return value of processGrade function where the variable average is the reciever;


    if(average >= 90){ //Checks if the average is more than or equal to 90
        printf("\n%.2lf%%, The grade of the student is A.", average); //if true then this would print out
    }else if(average >= 70 && average < 90){ //Checks if the average is more than or equal to 70 and less to 90
        if(thirdGrade >= 90){//if true then it checks another condition whether the thirdGrade is more than or equal to 90
            printf("\n%.2lf%%, The grade of the student is A, Because the third score is more than 90%%.", average);// if true then this would print out
        }else{//if the nested if is false
            printf("\n%.2lf%%, The grade of the student is B", average);// then this would print out
        }
    }else if(average >= 50 && average < 70){//Checks if the average is more than or equal to 50 and less than to 70

        /*  if true then we go through another process within this else if statement
            this process gets the average of the second score and the third score
            as shown below
        */
        double scoreSecond;
        double scoreThird;
        double averageSecondThird;

        scoreSecond = secondGrade;
        scoreThird = thirdGrade;
        averageSecondThird = (scoreSecond + scoreThird) / 2;

        if(!(averageSecondThird > 70)){ //Checks if the average of second and third score is less than 70
            printf("\n%.2lf%%, The grade of the student is D.",average); // if true then this would print out
        }else{
            printf("\n%.2lf%%, The grade of the student is C, Because the second and third average is more than 70%%.", average);//if false then this would print out
        }

    }else{//If none of the conditions are true then this else would run and prints out whatever the code is inside of it
        printf("\n%.2lf%%, The grade of the student is F", average);
    }
}

