
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;

//     for ( int i = 1 ; i<= n ; i++){
//         for (int j = 1 ; j<= n  ; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }




// A B C D 
// A B C D 
// A B C D                        FOR ALPHABETS PATTERN : BE CAUTIOUS.
// A B C D 

// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
    
//     for ( int i =1 ; i<= n ; i++){
//         char ch = 'A';                                            // IF INNER LOOP MAI VARIABLE DECLARE KARENGE THEN NUMBER RESET HOJAYEGA WITH EVRY NEW ITERATION.  
//         for (int j = 1 ; j<= n ; j++ ){                              IF OUTTER LOOP MAI DECLARE KARENGE THEN  RESET NHI HOGA AND CONITUE KREGA APNA VALUE KO.
//             cout << ch;
//             ch = ch +1 ;
//         }
//         cout << endl;
//     }
//     return 0;
// // }






// 1 2 3 
// 4 5 6 
// 7 8 9

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 3;
//     int m = 1;
//     for ( int i =0 ; i<n ; i++){
//         for ( int j=0; j<n;j++){
//             cout << m;
//             m = m+1;
//         }
//         cout << endl;
//     }
//     return 0;
// } 




// *
// * *
// * * *
// * * * *

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     for ( int i = 1 ; i<= n ; i++){
//         for (int j = 1 ; j<=i; j++){                                    //  I = J IN THE RIGHT ANGLED TRIANGLE PATTERN .
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }




// 1 
// 2 2 
// 3 3 3
// 4 4 4 4

// #include <iostream>
// using namespace std;

// int main (){
//     int n = 4;
//     int m = 1;
//     for ( int i =1 ; i<= n ; i++){
//         for ( int j = 1 ; j<= i ; j++){
//             cout << m;
//         }
//         m = m+1;                                          DO THE DRY RUN .
//         cout << endl;
//     }
//     return 0;
// }



// A 
// B B 
// C C C 
// D D D D

// #include <iostream>
// using namespace std;

// int main (){
//     int n = 4;
//     char ch = 'A';

//     for (int i = 1 ; i<=n;i++){
//         for (int j=1; j<= i; j++){
//             cout << ch;
//         }
//         ch = ch + 1;
//         cout << endl;
//     }
//     return 0;
// }




// 1
// 12
// 123
// 1234

// #include <iostream>
// using namespace std;

// int main (){
//     int n = 4;

//     for (int i = 1 ; i<= n;i++){
//         int m =1;                                     AS INNER LOOP MAI DECLARED HAI TOH REINITIALISE HOGA .
//         for (int j = 1 ; j<=i; j++){
//             cout << m;
//             m = m+1;                                  INNER LOOP MAI HI INCREMENT HOGA . 
//         }
        
//         cout << endl;
//     }
//     return 0;
// }



// 1
// 21
// 321
// 4321
// #include <iostream>
// using namespace std;

// int main (){
//     int n = 4;
    
//     for (int i =1 ; i<= n; i++){
       
//         for (int j =i ; j> 0;j--){
//             cout << j ;          
//         }
        
//         cout << endl;
//     }
//     return 0;
// }




//FLOYD'S TRIANGLE PATTERN:

// #include <iostream>
// using namespace std;

// int main (){
//     int n=4;
//     int m = 1;
//     for(int i = 1; i<= n ; i++){
//         for (int j=1; j<=i; j++){
//             cout << m;
//             m = m+1;
//         }
//         cout << endl;
//     }
//     return 0;



// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;
   
//     for ( int i = 1 ; i<= n ; i++){
//         for (int j =1 ; j <= n-i ; j++){
//             cout<< " ";
//         }
//         //int z = 1;
//         for ( int m = 1; m<= i ; m++){
//             cout << m;
//             //z = z+1;
//         }   
//         for (int x = i -1; x >= 1 ; x--){
//             cout << x;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;

//     for (int i =1 ; i<=n ; i++){
//         for (int j = 1 ; j<= i ; j++){
//             cout << "*";
//         }
//         for (int j =1 ; j <= n-i;j++){
//             cout << " ";

//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int n = 4;                                        

//     for ( int i = 1; i<=n ; i++){
//         for (int j = 1 ; j<= n-i ; j++){
//             cout << " ";
//         }
//         cout << "*";
//         if ( i != 1){
//             for (int m = 2 ; m<= 2*i-1; m++){
//                 cout << " ";
//             }
       
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;

// }



// #include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for (int i= 1 ; i<=n ; i++){
//         for (int j = 1 ; j <= i;j++ ){
//             cout << "*";
//         }
//         for (int m = 1 ; m< n-i; m++){
//             cout << " ";
//         }
//         for (int k = 1; k<=n-i; k++){
//             cout << " ";
//         }                                                                       BUTTERFLY PATTERN !
//         for (int x = 1 ; x<= i ; x++){
//             cout << "*";
//         }
//         cout << endl;
//     }

//     for (int a = 1 ; a <= n-1; a++ ){
//         for (int b = 1; b<= n-a; b++){
//             cout << "*";
//         }
//         for (int c =1 ; c <=a ; c++){
//             cout << " ";
//         }
//         for (int d = 1 ; d<= a ; d++){
//             cout << " ";
//         }
//         for (int e = 1 ; e <= n-a ; e++){
//             cout << "*";
//         }
//         cout << endl;

//     }
//     return 0;
// }