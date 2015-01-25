/* Mathematics Quiz Game
Date: 31/10/2013
Author: Seán Jennings
*/
#include <stdio.h>
#include <conio.h>
main()
{
    //Option Variable
    int option;
    
    //Question Amount Variable
    int amount;
    
    //Question Input & Answer Variables
    int input_answer1;
    int correct_answer1=28;
    int input_answer2;
    int correct_answer2=11;
    int input_answer3;
    int correct_answer3=6;
    int input_answer4;
    int correct_answer4=8;
    int input_answer5;
    int correct_answer5=6;
    
    //Total Variables
    int correct_total=0;
    int incorrect_total=0;
    
    //Main Menu Loop Variable
    int loop=1;
    
    //Option Removal Variables
    int rounds_check=0;
    int quiz_check=0;
    int sequence_error_rounds;
    int sequence_error_quiz;
    
    //Loop back to main menu
    do
    {
        //Main Menu Text
        do
        {
            sequence_error_rounds=0;
            sequence_error_quiz=0;
            
            printf("Main Menu\n");
            
            printf("\n  Option 1: Choose number of questions in the round");
            printf("\n  Option 2: Start Quiz");
            printf("\n  Option 3: Round Results");
            printf("\n  Option 4: Exit Quiz");
            
            //Reading in option
            printf("\n\nPlease choose an option: ");
            scanf("%d",&option);
            flushall();
            
            //Stop entering rounds number twice
            if(option==1&&rounds_check==1)
            {
                printf("\nPlease continue to quiz.\n");
                sequence_error_rounds=1;
                printf("\nPress Enter to return to main menu...");
                getchar();
                clrscr();
            }
            
            //Stop doing quiz again before viewing results
            if(option==2&&quiz_check==1)
            {
                printf("\nPlease continue to results.\n");
                sequence_error_quiz=1;
                printf("\nPress Enter to return to main menu...");
                getchar();
                clrscr();
            }
        }while(sequence_error_rounds==1||sequence_error_quiz==1);
        
        
        //Options
        switch(option)
        {
            /*No. Questions Input*/
            case 1:
            {
                printf("\nPlease enter the amount of questions for this round.(1-5): ");
                scanf("%d",&amount);
                flushall();
                
                //Not between 1 and 5
                if(amount<1||amount>5)
                {
                    printf("\nEnter an amount of questions between 1 and 5.\n");
                }
                else
                {
                rounds_check=1;
                }
            }
            break;
            
            /*Quiz Section*/
            case 2:
            {
                
                //Reset counters from previous rounds(if applicable)
                correct_total=0;
                incorrect_total=0;
                
                
                //1-5 questions only
                if(amount>=1&&amount<=5)
                {
                    //Question 1 - Always Prints in Quiz
                    printf("\nQuestion 1: 24 + 32 / 8 = ?\n");
                    scanf("%d",&input_answer1);
                    flushall();
                    
                    //Correct Answer
                    if(input_answer1==28)
                    {
                        printf("You entered: %d - Correct !!\n",input_answer1);
                        correct_total+=1;
                    }
                    
                    //Incorrect Answer
                    else if(input_answer1!=28)
                    {
                        printf("You entered: %d - Wrong !! The correct answer: %d\n",input_answer1,correct_answer1);
                        incorrect_total+=1;
                    }
                    
                    //Unrecognised Input
                    else
                    {
                        printf("Invalid Input. The correct answer: %d\n",correct_answer1);
                        incorrect_total+=1;
                    }
                    
                    //Question 2
                    if(amount>=2)
                    {
                        printf("\nQuestion 2: 12 / 4 + 8 = ?\n");
                        scanf("%d",&input_answer2);
                        flushall();
                        
                        //Correct Answer
                        if(input_answer2==11)
                        {
                            printf("You entered: %d - Correct !!\n",input_answer2);
                            correct_total+=1;
                        }
                        
                        //Incorrect Answer
                        else if(input_answer2!=11)
                        {
                            printf("You entered: %d - Wrong !! The correct answer: %d\n",input_answer2,correct_answer2);
                            incorrect_total+=1;
                        }
                        
                        //Unrecognised Input
                        else
                        {
                            printf("Invalid Input. The correct answer: %d\n",correct_answer2);
                            incorrect_total+=1;
                        }
                    }//end if() - Q2
                    
                    //Question 3
                    if(amount>=3)
                    {
                        printf("\nQuestion 3: 12 x 3 / 6 = ?\n");
                        scanf("%d",&input_answer3);
                        flushall();
                        
                        //Correct Answer
                        if(input_answer3==6)
                        {
                            printf("You entered: %d - Correct !!\n",input_answer3);
                            correct_total+=1;
                        }
                        
                        //Incorrect Answer
                        else if(input_answer3!=6)
                        {
                            printf("You entered: %d - Wrong !! The correct answer: %d\n",input_answer3,correct_answer3);
                            incorrect_total+=1;
                        }
                        
                        //Unrecognised Input
                        else
                        {
                            printf("Invalid Input. The correct answer: %d\n",correct_answer3);
                            incorrect_total+=1;
                        }
                    }//end if() - Q3
                    
                    //Question 4
                    if(amount>=4)
                    {
                        printf("\nQuestion 4: 12 + 7 - 11 = ?\n");
                        scanf("%d",&input_answer4);
                        flushall();
                        
                        //Correct Answer
                        if(input_answer4==8)
                        {
                            printf("You entered: %d - Correct !!\n",input_answer4);
                            correct_total+=1;
                        }
                        
                        //Incorrect Answer
                        else if(input_answer4!=8)
                        {
                            printf("You entered: %d - Wrong !! The correct answer: %d\n",input_answer4,correct_answer4);
                            incorrect_total+=1;
                        }
                        
                        //Unrecognised Input
                        else
                        {
                            printf("Invalid Input. The correct answer: %d\n",correct_answer4);
                            incorrect_total+=1;
                        }
                    }//end if() - Q4
                    
                    //Question 5
                    if(amount==5)
                    {
                        printf("\nQuestion 5: 24 / 3 - 2 = ?\n");
                        scanf("%d",&input_answer5);
                        flushall();
                        
                        //Correct Answer
                        if(input_answer5==6)
                        {
                            printf("You entered: %d - Correct !!\n",input_answer5);
                            correct_total+=1;
                        }
                        
                        //Incorrect Answer
                        else if(input_answer5!=6)
                        {
                            printf("You entered: %d - Wrong !! The correct answer: %d\n",input_answer5,correct_answer5);
                            incorrect_total+=1;
                        }
                        
                        //Unrecognised Input
                        else
                        {
                            printf("Invalid Input. The correct answer: %d\n",correct_answer5);
                            incorrect_total+=1;
                        }
                    }//end if() - Q5
                    quiz_check=1;
                }//end outer if()
                
                //Incorrect selection in option 2
                else
                {
                    printf("\nSelect 1-5 in option 2.\n");
                }
                
            }//end Quiz Section
            break;
            
            /*Round Results*/
            case 3:
            {
                printf("\nYou answered %d questions correctly and %d questions incorrectly.\n",correct_total,incorrect_total);
                
                //Allow New Round
                rounds_check=0;
                quiz_check=0;
            }
            break;
            
            /*Exit*/
            case 4:
            {
               printf("\nPress Enter to exit.");
            }
            break;
            
            /*Invalid Option Input*/
            default:
            {
                printf("\nInvalid Input. Please choose from options 1 - 4.\n");
            }
            break;
        }//end switch(option)
        
        //Stop immediate return to main menu after option is completed
        if(option!=4)
        {
            printf("\nPress Enter to return to main menu...");
            getchar();
            
            //Clear screen of lines from previous option
            clrscr();
        }
        
        //Exit Option - Break out of loop and wait for a key to be pressed to exit
        else
        {
            loop=0;
        }
    }while(loop==1);
    
    getchar();
    
}//end main()