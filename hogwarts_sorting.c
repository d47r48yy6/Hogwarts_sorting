#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


    int griffyndor,hufflepuff,ravenclaw,salazer;
    
    //Max_of_four();
    int max_of_four(int a, int b, int c, int d)
  {
  int result;
  
  result =     a >b ? a : b;
  result = result  >c ? result : c;
  result = result  >d ? result : d;
  
  if(result == a){
    printf("\n\n");
    printf("\t\t***** You have have been choosen for bravery :Griffyndor ******\n");
    return 1;
  }
  
  else if (result== b){
    printf("\n\n");
    printf("\t\t***** You have been choosen for Honesty :Hufflepuff ******\n");
    return 2;
  }
    
  else if(result == c){
    printf("\n\n");
    printf("\t\t***** You have been choosen for cleverness :Ravenclaw ******\n");
    return 3;
  }
  else{
    printf("\n\n");
    printf("\t\t***** You have been choosen for Ruling :Salzer ******\n");
    return 4;
  } 
}

  void delay1(int number_of_seconds)
  {
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
  
    // Storing start time                                         //DelayFunction_2()
    clock_t start_time = clock();
  
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);     
}


  void set_priority()
  {
    int n;
    scanf("%d",&n);
  
  switch(n){
    case 1:
      griffyndor++;
      break;
    case 2:
      hufflepuff++;
      break;
    case 3:
      ravenclaw++;
      break;
    case 4:
      salazer++;
      break;
      default :
        printf("Invalid number :(");
        break;
        
  }
  printf("Your response is recorded ");
  getch();
}
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

int main()
{
  char user_input;
  

    printf("\t\t\t\t\t*");
  delay(50);
  printf("*");
  delay(50);
  printf("*");
  delay(50);
  printf("*");
  delay(50);
  printf("*");
  delay(50);
  printf("*");
  delay(50);
  printf("H");
    delay(50);
  printf("O");
    delay(50);
  printf("G");
    delay(50);
  printf("W");
    delay(50);
  printf("A");
    delay(50);
  printf("R");
    delay(50);
  printf("T");
    delay(50);
  printf("S");
  delay(50);
  printf(" ");
  printf("G");
  delay(50);
  printf("A");
  delay(50);
  printf("M");
  delay(500);
  printf("E");
  delay(50);
  printf("*");delay(50);
  printf("*");delay(50);
  printf("*");delay(50);
  printf("*");delay(50);
  printf("*");delay(50);
  printf("*\n\n");delay(50);int j=0;
  char name[]="Ayush";
  char password[]="login";
  char user1[20];
  char user2[20];
  
  printf("Enter The Username :- ");
  gets(user1);
  printf("Enter The Password :- ");
  for(j=0;j<5;j++)
  {
    user2[j] = getch();
    printf("*");
   }
   user2[j]='\0';
  if(strcmp(user1,name)==0 && strcmp(user2,password)==0)
  printf("\n\n\n");
  
  else
  {
  printf("\nInvalid Login Deatils");
  goto LOGIN ;
      }  
  
  
  system("cls");
  
  printf("\t\t\t\t\t\tL");
  delay(50);
  printf("O");
  delay(50);
  printf("G");
  delay(50);
  printf("I");
  delay(50);
  printf("N");
  delay(50);
  printf(" S");
  delay(50);
  printf("U");
    delay(50);
  printf("C");
    delay(50);
  printf("C");
    delay(50);
  printf("E");
    delay(50);
  printf("S");
    delay(50);
  printf("S");
    delay(50);
  printf("F");
    delay(50);
  printf("U");
  delay(50);
  printf("L");
  printf(".");
  delay(50);
  printf(".");
  delay(50);
  printf(".\n\n");
  
  
  printf("\t\t\t\tWelcome to the world of wizards and witchcrafts\n");    //Welcome letter :
  printf("\n\n");
  
  printf("\t\tHogwarts, was the British wizarding school, located in the Scottish Highlands.\n ");
  printf("\n\t\tIt accepted magical students from Great Britain and Ireland for enrolment.\n"); 
  printf("\n\t\t It was a state-owned school, funded by the Ministry of Magic.\n\n ");delay1(1);
  system("cls");
  printf("\n\n\n\n");
  printf("\t\t\t\t\tLet me introduce you :)");delay1(1);
  system("cls");
  printf("\n\n\n\n\n");
  printf("\t\t\t\t\t\tH");
  delay(50);
  printf("O");
  delay(50);
  printf("G");
  delay(50);
  printf("W");
  delay(50);
  printf("A");
  delay(50);
  printf("R");
  delay(50);
  printf("T");
    delay(50);
  printf("S");
    delay(50);
  printf(".");
    delay(50);
  printf(".");
    delay(50);
  printf(".");
    delay(50);
  printf(".");
    delay(50);
  printf(".\n\n");
  delay(50);  delay1(1);
  system("cls");
  
      // for griffyndor
  printf("\n \t\t\t\t\t*** Gryffindor ***\n\n");
  printf("\t\t\t It is one of four Houses of HOGWARTS school \n ");
  printf("\t\t A person having traits associated with GRIYFFINDOR house includes \n \t  personality of Bravery , Boldness ,or an affinity for Lions or the");
  printf("The colours  RED and GOLD \n \n ");
  printf("\nFamous Wizards of Gryffindor are :" );
  printf("\n1: Harry_James_Potter ");
  printf("\n2: Albus_Pervical_Wulfric_Brian_Dumbledore ");              //Wizards of Gryffindor 
  printf("\n3: Rubius_Hagrid ");
  printf("\n3: Peter_Pettigrew ");
  printf("\n4: Sirius Black ");
  printf("\n5: Sir_Nicholas ");
  delay1(1);
  system("cls");
  
  
    // for ravenclaw
  printf("\n \t\t\t\t\**** RavenClaw ***\n\n");
  printf("\t\t It is one of the four Houses of HOGWARTS school which include common \n\t personality which includes Intelligence ,learning ,Wisdom ");
  printf(" and wit , creativity , \n\t\tcleverness  winthin them. The house colours are blue and bronze ");
  printf("\n\n");
  printf("\nFamous Wizrds of RavenClaw are :");
  printf("\n1: Rowna_ravenclaw");
  printf("\n2: Gilderoy_Lockhart");              //Wizards of Ravenclaw
  printf("\n3: Filius_Filtwick");
  printf("\n4: Luan_lovegood ");
  printf("\n5: Padma_Patil");
  
  
  delay1(1); //delay 1 seconds
  system("cls");
  
  // for hufflepuff
  printf("\n\t\t\t\t*** Hufflepuff ***\n");
  printf("\t\t It is one of four Houses of HOGWARTS school Which include wizards \n   \tcommon personality Which includes a strong sense of Justice ,loyality \n");
  printf("\t\t Patience and a prosperity for hard work .");
  printf("\n \n");
  printf("\nFamous Wizards of Hufflepuff were :");
  printf("1: Newton_Scamander \n");
  printf("2: Minerva_McGonagll \n");                      //Wizards of hufflepuff
  printf("3: Giffard_Abbott \n ");
  printf("4: Wayne_Hopkins \n");
  printf("5: Helga_Hufflepuff \n");
  
  delay1(1);
  system("cls");
       
    printf("\n\t\t\t\t*** Salazer Slytherien ***\n");printf("\tSalazar Slytherin was a pure-blood wizard, noted for his cunning and determination.\n\tHe was regarded as one of the greatest wizards of the age, respectively as a \n\tParselmouth and as a skilled Legilimens. Slytherin was one of the four founders of Hogwarts School \n\tof Witchcraft and Wizardry along with Godric Gryffindor, Helga Hufflepuff and Rowena Ravenclaw.\n\tHe was also the namesake of the Slytherin House.");
   delay1(1);
      system("cls");
  
  //i have to write about salazer people ;
  printf("select your desired house for Hogwarts\n");
    printf("1: Griffyndor\n");
  printf("2: Hufflepuff\n");
  printf("3: RavenClaw\n");
  printf("4: Salazer Slytherin\n");
  
  
  
  set_priority();

  system("cls");
    printf("\a\a\a\a");
    printf("\t\t\t\t******* Welcome to level 1 *******\n");
  printf("\t\t\tYou have to anserwers the following questions!\n\n");
  printf("\t\t\tenter y / n to justify your answer\"\n");
  
    // question no 1
  fflush(stdin);
  printf("Q1: To save your friends, can you go to forbiden forest ??  ");
  user_input = getch();
  
  if(user_input=='y'||user_input == 'Y'){
     griffyndor++;
     hufflepuff++;
  }
  else
  ravenclaw++;
  salazer++;
  printf("\n\nyour response is recorded");
  getch();
  
  system("cls");
   
  fflush(stdin);
  
  // question 2
  
  printf("Q2 : Do you like muggle ?\n") ;
  user_input=getch();
  if(user_input=='y'||user_input == 'Y')
  {
  ravenclaw++;
  griffyndor++;
  hufflepuff++;
  }
  
  else
  salazer++;
  printf("Your response is recorded ");
  getch();
  system("cls");
  
  //question 3;
  
  printf("Q3 : Which colour will you choose between Darkness or Sunrise ?\n");
  user_input=getch();
  if(user_input=='D'||user_input=='d')
  {
    ravenclaw++;
    salazer++;
  }
  else
  griffyndor++;
  hufflepuff++;
  printf("Your respone is recorded \n:");
  getch();
  system("cls");
  
  
   max_of_four(griffyndor,hufflepuff,ravenclaw,salazer);
  LOGIN:
    return 0;
}