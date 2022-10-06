//
//  main.cpp
//  week_ 3 class_1
//
//  Created by Emil Istamov on 28/09/22.
//

//#include <iostream>
//using namespace std ;
//int main() {
//
//
//   //initialze first inteer number
//    int number = 9;
//
//    number ++; // incremented by 1
//
//
//    return 0;
    //#include <iostream>
//using namespace std;
//int main() {
//    int intNumber = 18;
//    float floatNumber = 4.3;
//    double doublenumber = 45.1234;
//    bool boolean = true;
//    char charNumber = 'A';
//
//    cout <<intNumber << endl;
//    cout <<floatNumber << endl;
//    cout <<doublenumber<< endl;
//    cout <<boolean<< endl;
//    cout <<charNumber<< endl;
//
//
//
//
//    return 0;
//
//}
//#include <iostream>
//  using namespace std;
//  int main() {
//
//      float number1 = 0;
//      float number2 = 0;
//
//      cout<<"Enter the first number: ";
//      cin>>number1;
//
//      cout<<"Enter the second number: ";
//      cin>>number2;
//
//      cout<< number1 * number2 << endl ;
//
  
  
  
  
//  }

//#include <iostream>
//  using namespace std;
//  int main() {
//
//      float number1 = 0;
//      float number2 = 0;
//
//      cout<<"Enter the first number: ";
//      cin>>number1;
//
//      cout<<"Enter the second number: ";
//      cin>>number2;
//
//      cout<<"Enter the second number: ";
//      cin>>number2;
//  }

//#include <iostream>
//  using namespace std;
//  int main() {
//
//      int number1 = 38;
//      int number2= 73;
//
//      cout <<"Sum: " << number1<< "+" << number2<< "=" << number1 + number2 << endl;
//
//      return 0;
//  }
 

       //EXERSIZE-6
//#include <iostream>
//  using namespace std;
//  int main() {
//
//      int number1 = 5;
//      number1 += 3;
//
//    cout <<number1 << endl;
//      return 0;
//}

     //PROBLEM-7
//#include <iostream>
//  using namespace std;
//int main() {
//    int number1 = 250;
//    int number2 =11;
//
//    cout <<number1/number2<< endl;
//    return 0;
//}

//#include <iostream>
//   using namespace std;
//   int main() {
//
//       double number1= 15e4;
//       float number2=25e3;
//       cout <<number1 <<endl;
//       cout <<number2 <<endl;
//       return 0;
//
//   }
    //PROBLEM-9
//#include <iostream>
//   using namespace std;
//   int main() {
//       int x=0;
//       int y=0;
//
//       cout <<"Enter the first number:";
//       cin >>x;
//
//       cout <<"Enter the second number:";
//       cin >>y;
//
//
//
//
//
//       cout <<(x==y)<<endl;
//       return 0;
//   }
     //PROBLEM-10
//#include <iostream>
//   using namespace std;
//   int main() {
//
//       int a=0;
//       int b=0;
//
//       cout <<"Enter the first number"<< endl;
//       cin >>a;
//       cout <<"Enter the second number"<< endl;
//       cin >>b;
//
//       cout << (a<50 && a<b) <<endl;
//       return 0;
//   }

       //PROBLEM-11
//#include <iostream>
//   using namespace std;
//   int main() {
//
//       int a=0;
//       int b=0;
//
//       cout <<"Enter the first number"<< endl;
//       cin >>a;
//       cout <<"Enter the second number"<< endl;
//       cin >>b;
//
//       cout << (a<50 || a<b) <<endl;
//       return 0;
//   }
          //PROBLEM-11
//#include <iostream>
//   using namespace std;
//   int main() {
//
//       int a=0;
//       int b=0;
//
//       cout <<"Enter the first number"<< endl;
//       cin >>a;
//       cout <<"Enter the second number"<< endl;
//       cin >>b;
//
//       cout << (a<50 || a<b) <<endl;
//       return 0;
//   }
     //PROBLEM-12
//       #include <iostream>
//     using namespace std;
//      int main() {
//
//          float student_mark=74.5;
//          int weight =30;
//          int total_mark =100;
//          float cumulative=0;
//
//          cumulative = (student_mark*weight)/total_mark;
//          cout <<"Cumulative persentage is " <<cumulative <<"%"<<endl;
//          return 0;
//      }
//#include <iostream>
//using namespace std;
//int main() {
//    float grade1  = 0;
//    float grade2  = 0;
//    float credit1 =0;
//    float credit2 =0;
//    float gpa = 0;
//
//    cout<<"enter the first grade " << endl;
//    cin>> grade1;
//
//    cout <<"enter the second grade " << endl;
//    cin>> grade2;
//
//    cout<<"enter the first credit "<<endl;
//    cin>> credit1;
//
//    cout<<"enter the second credit "<<endl;
//    cin>>credit2;
//
//    gpa=((grade1 * credit1) + (grade2 * credit2))/(credit1+credit2);
//    cout<<gpa;
//
//    return 0;
// }
//#include <iostream>
//using namespace std;
//int main() {
//    int year;
//    cout<<"Enter the year ";
//    cin>>year;
//
//    if (year%400==0){
//        cout <<year<< " is a leap year\n";
//    }
//
//    else if (year %100 ==0){
//        cout<<year<<" is not laep year\n";}
//
//    else if (year %4==0){
//        cout<<year<<" is a leap year\n";}
//
//
//    return 0;
//}

               //quadratic equation
//#include <iostream>
//#include <math.h>
//using namespace std;
//int main() {
//
//    float a, b, c;
//    float d,  x1, x2;
//
//    cout << "Enter three float number";
//    cin >>a >>b >>c;
//
//    d = b * b - 4 * a * c;
//
//    if ( d > 0){
//        x1= (-b + sqrt (d))/ (2 * a);
//        x2= (-b + sqrt (d))/ (2 * a);
//        cout << x1 << endl << x2 << endl;
//
//    }
//    else if (d == 0){
//        x1 = -b / ( 2  * a );
//        x2 =x1;
//        cout<< x1 <<endl;
//
//    }
//     else if ( d < 0 )
//         cout << "There is not solution" <<endl;
//    return 0;

    
// PROBLEM-6

    

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}

    
          
    
