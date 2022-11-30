#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {


//
//    int h,m;
//    char ch1;
//
//    printf("Press 'P' for Principal, 'T' for Teacher or 'C' for Clerk:");
//    scanf(" %c", &ch1);
//    printf("\nEnter the number of hours worked:");
//    scanf("%d", &h);
//        if(ch1==80){
//            if(h>44 && h<50){
//                m = (h-22)*800;
//            }
//            else{
//            m = h*400;
//            }
//        }   else if(ch1==84) {
//            if (h > 44 && h < 50) {
//                m = (h - 22) * 400;
//            }else { m = h*400;}
//        }   else if (ch1=67){
//            if (h > 44 && h < 50) {
//                m = (h - 22) * 200;
//            }else{
//                m = h * 200;
//            }
//        }
//    printf("\nThe weekly salary is %d", m);
//
//
//
//
//
//    int x;
//    printf("Enter the number:\n");
//    scanf("%d", &x);
//    if (x%5 != 0 ){
//        printf("Number of turns required to win the game is -1");
//    } else if (x%10 == 0){
//        printf("Number of turns required to win this game is 0");
//    } else {
//        printf("Number of turns required to win this game is 1");
//    }
//

int r,g;
    srand(time(NULL));
 //   gtech();
    r = rand();
    printf("%d",r%10);
    scanf("%d",&g);
    if (r==g) {printf("Correct");
    } else { printf("Incorrect");}
 return 0;
}




