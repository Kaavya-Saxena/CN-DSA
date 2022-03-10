// void print(int n){
//     if(n < 0){
//         return;
//     }
//     if(n == 0){
//         cout << n << " ";
//         return;
//     }
//     print(n--);
//     cout << n << " ";
// }

// int main() {
//     int num = 3;
//     print(num);
// }

//*******************************************************************************************************************************************************************

// int getValue(int x = 0, int y = 0, int z){
//     return (x + y + z);
// }

// int main(){
//   cout << getValue(10);
//   return 0;
// }

//*********************************************************************************************************************************************************************

// "MULTIPLY(a, b)" will be replaced by "a*b" in code.
// So, MULTIPLY(2+3, 3+5) will be replaced by 2+3*3+5. And according to operator precedence, multiply operator (*) has higher precedence than plus operator (+).
// So, 3*3 will be evaluated first. Hence expression will become :
// 2+9+5 = 16

// #define MULTIPLY(a, b) a*b

// int main(){
//     cout << MULTIPLY(2+3, 3+5);
//     return 0;
// }

//*********************************************************************************************************************************************************************

// int x = 1;

// void print(){
//     cout<<"2."<<x<<endl;
//     int x = 2;
//     cout<<"3."<<x<<endl;
//     {
//         int x = 3;
//         cout <<"4."<< x << endl;
//     }
// }
// int main(){
//     cout<<"1."<<x<<endl;
//     print();
//     cout<<"5."<<x<<endl;
//     return 0;
// }
