//HeaderFiles
#include <stdio.h>
#include <stdlib.h>

/*Function declaration that prompts the user the students 1st,
2nd and 3rd score/grade and reads the first grade, second grade, and third grade*/
void readGrade(int* firstScore,int* secondScore, int* thirdScore);

//Function declaration that computes the average
double processGrade(int firstGrade,int secondGrade,int thirdGrade);

//Function declaration that prints out the output whether the student got A, B C, D, or F
void printGrade(int firstScore, int secondScore, int thirdScore, double average);

int main()
{
    //Calling printGrade function in main function to print the output
    int firstscore, secondScore, thirdScore;
    double average;

    readGrade(&firstscore, &secondScore, &thirdScore);

    average = processGrade(firstscore, secondScore, thirdScore);

    printGrade(firstscore, secondScore, thirdScore, average);

    return 0;
}
//----------------------Function Definition------------------------
void readGrade(int* firstScore,int* secondScore, int* thirdScore){

    printf("Enter first score(1-100): "); // Simple user input interface
    scanf("%d", firstScore);   // Reads the data

    printf("Enter second score(1-100): "); // Simple user input interface
    scanf("%d", secondScore);  // Reads the data

    printf("Enter third score(1-100): "); // Simple user input interface
    scanf("%d", thirdScore);   // Reads the data
}


double processGrade(int firstGrade,int secondGrade,int thirdGrade){
    double sumOfGrade;
    sumOfGrade = firstGrade + secondGrade + thirdGrade; //Sum up all the parameters
    return (double)sumOfGrade / 3.0;// Return the average (sum of all the items / number of items)
}

void printGrade(int firstScore, int secondScore, int thirdScore, double average){

    if(average >= 90){ //Checks if the average is more than or equal to 90
        printf("\n%.2lf%%The grade of the student is A.",average); //if true then this would print out
    }else if(average >= 70 && average < 90){ //Checks if the average is more than or equal to 70 and less to 90
        if(thirdScore >= 90){//if true then it checks another condition whether the thirdGrade is more than or equal to 90
            printf("\n%.2lf%%The grade of the student is A, Because the third score is more than 90%%.",average);// if true then this would print out
        }else{//if the nested if is false
            printf("\n%.2lf%%The grade of the student is B",average);// then this would print out
        }
    }else if(average >= 50 && average < 70){//Checks if the average is more than or equal to 50 and less than to 70

        int averageSecondThird;
        //Checks if the second and third score average is more than 70%
        averageSecondThird = (secondScore + thirdScore) / 2;

        if(!(averageSecondThird > 70)){ //Checks if the average of second and third score is less than 70
            printf("\n%.2lf%%The grade of the student is D.",average); // if true then this would print out
        }else{
            printf("\n%.2lf%%, The grade of the student is C, Because the second and third average is more than 70%%.", average);//if false then this would print out
        }

    }else{//If none of the conditions are true then this else would run and prints out whatever the code is inside of it
        printf("\n%.2lf%%, The grade of the student is F", average);
    }
}

