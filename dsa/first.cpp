#include<iostream>
using namespace std;
int main(){

//Day===1
//(flowcharts,psedocodes,basic questions)

//max of two numbers

//int a,b;
//cout<<"Enter value of a:";
//cin>>a;
//cout<<"Enter value of b:";
//cin>>b;
//if(a>b){
//	cout<<"a is greater";
//}
//else{
//	cout<<"b is greater";
//}

//sum of n numbers

//int n;
//int sum=0;
//cout<<"Enter value of n:";
//cin>>n;
//for(int i=0;i<=n;i++){
//   sum=sum+i;
//}
//cout<<"Sum of n numbers:"<<sum;

//	age

//    int age=20;
//    if(age>=18){
//        cout<<"can vote";
//    }
//    else{
//        cout<<"can not vote";
//    }

//Calculate Simple interest

//     int principle=2000;
//     int rate=20;
//     int time=24;
//     int SI=principle*rate*time;
//     cout<<SI;

//factorial

//
//int n=5;
//int fact=1;
//for(int i=1;i<=n;i++){
//	fact=fact*i;
//
//}
//	cout<<fact;


//Day===2
//(variables,datatypes,operators,questions)

//size of operator
//int age=20;
//cout<<sizeof(age);

//datatypes

//(primitive datatypes)
//int===4bytes(1byte==8bits)
//    int age=20;
//    cout<<sizeof(age);

//char===1bytes
//   char name='a';
//   cout<<sizeof(name);
//string===8bytes
//   string name="aryaveer";
//   cout<<sizeof(name);
//float===4
//     float percentage=90.20f;
//     cout<<percentage;
//double===8
//     double percentage=90.20;
//     cout<<sizeof(percentage);
//bool===1byte(true or false)(1 or 0)
//       bool a=true;
//       cout<<a;

//type casting(explicit)
//type conversion(implicit)

//implicit conversion===small to big(float to double)

//char grade='a';
//int val=grade;
//cout<<val;
//ASCII value of small a will be printed

//explicit conversion===big to small(double to int)

//    double price=100.90;
//    int newPrice=int(price);
//    cout<<newPrice;
////    100 will be printed values after decimal will be removed

//input in c++

//   int n;
//   cout<<"Enter value of n:";
//   cin>>n;
//   cout<<"value of n:"<<n;

//operators (binary(need two operands),unary)

//Arithmetic (+,-,*,/,%)

//int a=5;
//int b=4;
//cout<<a+b<<"\n";
//cout<<a-b<<"\n";
//cout<<a*b<<"\n";
//cout<<a/b<<"\n";(value after decimal is removed)
//cout<<a%b;(remainder is printed)
//  cout<<(5/(double)2);

//Relational (<,>,<=,>=,==,!=)

//int a=5;
//int b=6;
//cout<<(a>b)<<"\n";
//cout<<(a<b)<<"\n";
//cout<<(a>=b)<<"\n";
//cout<<(a>=b)<<"\n";
//cout<<(a==b)<<"\n";
//cout<<(a!=b);

//logical (or==|| AND==&&  Not ==!)

//not=reverse the answer
//cout<<!(3>1);

//or==if 1 true answer true
//  cout<<(3>1)||(3<1);

//and==if both true answer is true
//cout<<(3>1)&&(5>3);

//unary operators(need only one operand)

//increment++

//===1(post)

//  int a=10;
//  int b=a++;
//  cout<<b; (old value of a)
//  cout<<a;

//===2(pre)

//  int a=10;
//  int b=++a;
//  cout<<b; (new value of a)
//  cout<<a;

//decrement--

//===1(pre)

//  int a=10;
//  int b=--a;
//  cout<<b; (new value of a)
//  cout<<a;

//===2(post)

//  int a=10;
//  int b=a--;
//  cout<<b; (new value of a)
//  cout<<a;

//sum of two numbers

//  int a,b,c;
//  cout<<"Enter value of a:";
//  cin>>a;
//  cout<<"Enter value of b:";
//  cin>>b;
//  c=a+b;
//  cout<<"Sum of a and b:"<<c;


//Day==3
//(conditional statements,loops,questions)

//conditional statements

//if

//int age=21;
//if(age>18){
//	cout<<"you can drive"<<endl;
//}
//cout<<"hello";

//if-else

//  int n;
//  cout<<"enter value of n:";
//  cin>>n;
//  if(n>0){
//  	cout<<"N is a positive number";
//  }
//  else if(n<0){
//  	cout<<"N is a negative number";
//  }
//else{
//	cout<<"equal to zero";
//}

//  int n=3;
//  if(n%2==0){
//  	cout<<"even";
//  }
//  else{
//  	cout<<"odd";
//  }

//if else-if

//   int n=55;
//   if(n>=90){
//   	cout<<"A grade";
//   }
//   else if(n>=80 && n<90){
//   	cout<<"B grade";
//   }
//   else if(n>=50 && n<80){
//   	cout<<"C grade";
//   }
//   else{
//   	cout<<"fail";
//   }

//find character is uppercase or lowercase

//  char ch;
//  cout<<"Enter character:";
//  cin>>ch;
//  if(ch>='a' && ch<='z'){
//  	cout<<"lowercase";
//  }
//  else if(ch>='A' && ch<='Z'){
//  	cout<<"uppercase";
//  }

//using ascii values
//in memory characters are stored in the form of int


// char ch;
// cout<<"Enter character:";
// cin>>ch;
// if(ch>=65 && ch<=90){
// 	cout<<"uppercase";
// }
// else if(ch>=97 && ch<=122){
// 	cout<<"lowercase";
// }

//ternary statement(short hand if else method)
//condition?st1:st2

//   int a=-5;
//   (a>0)?cout<<"positive":cout<<"negative";

//loops

//while loop

//  int n=5;
//  int i=1;
//  while(i<=n){
//  	cout<<i<<"\n";
//  	i++;
//  }

//int n;
//cout<<"Enter value of n:";
//cin>>n;
//for(int i=1;i<=n;i++){
//	cout<<i<<"\n";
//}

//for loop

//int n=5;
//int i=1;
//for(i;i<=n;i++){
//	cout<<i<<"\n";
//}

//int n=10;
//for(int i=0;i<=n;i+=2){
//	cout<<i<<"\n";
//}

//break(terminates the loop)

//int n=5;
//int i=1;
//for(i;i<=n;i++){
//	if(i==3){
//		break;
//	}
//	cout<<i<<"\n";
//}
// continue (skips the condition)

//int n=5;
//int i=1;
//for(i;i<=n;i++){
//	if(i==3){
//		continue;
//	}
//	cout<<i<<"\n";
//}

//sum of all odd numbers

//int n;
//cout<<"Enter value of n:";
//cin>>n;
//int sum=0;
//for(int i=1;i<=n;i+=2){
//	cout<<i<<"\n";
//	sum=sum+i;
//}
//cout<<"sum of all odd numbers:"<<sum;

//day===4
//(patterns problems)

//1 == square patterns

//a

//int n=4;
//for(int i=0;i<n;i++){
//	for(int j=0;j<0;j++){
//		cout<<"*";
//	}
//	cout<<"\n";
//}

//b

//int n=4;
//for(int i=0;i<n;i++){
//	for(int j=0;j<0;j++){
//		cout<<j;
//	}
//	cout<<"\n";
//}

//c

//int n=4;
//for(int i=0;i<n;i++){
//	char ch='A';
//	for(int j=0;j<0;j++){
//		cout<<ch;
//		ch+=1;
//	}
//	cout<<"\n";
//}

//d

//int n=4;
//int num=0;
//for(int i=0;i<n;i++){
//	for(int j=0;j<0;j++){
//		cout<<num;
//		num+=1;
//	}
//	cout<<"\n";
//}

//e

//int n=4;
//char ch='A';
//for(int i=0;i<n;i++){
//	for(int j=0;j<0;j++){
//		cout<<ch;
//		ch+=1;
//	}
//	cout<<"\n";
//}

//2=== Triangle patterns

//a

//int n=4;
//for(int i=0;i<n;i++){
//	for(int j=0;j<i+1;j++){
//		cout<<"*";
//	}
//	cout<<"\n";
//}

//b

//int n=4;
//for(int i=0;i<n;i++){
//	for(int j=1;j<=i+1;j++){
//		cout<<j;
//	}
//	cout<<"\n";
//}

//c

//int n=4;
//for(int i=0;i<n;i++){
//	char ch='A';
//	for(int j=0;j<i+1;j++){
//		cout<<ch;
//		ch+=1;
//	}
//	cout<<"\n";
//}

//d

//int n=4;
//int num=1;
//for(int i=0;i<n;i++){
//	for(int j=0;j<i+1;j++){
//		cout<<num;
//		num+=1;
//	}
//	cout<<"\n";
//}

//f

//int n=4;
//char ch='A';
//for(int i=0;i<n;i++){
//	for(int j=0;j<i+1;j++){
//		cout<<ch;
//		ch+=1;
//	}
//	cout<<"\n";
//}

//g

//int n=4;
//int num=1;
//for(int i=0;i<n;i++){
//	for(int j=0;j<i+1;j++){
//		cout<<num;
//	}
//	num+=1;
//	cout<<"\n";
//}

//h

//int n=4;
//char ch='A';
//for(int i=0;i<n;i++){
//	for(int j=0;j<i+1;j++){
//		cout<<ch;
//	}
//	ch+=1;
//	cout<<"\n";
//}

//3===Reverse triangle pattern 

//a

//int n=4;
//for(int i=0;i<n;i++){
//	for(int j=i+1;j>0;j--){
//		cout<<j;
//	}
//	cout<<endl;
//}

//b

//int n=4;
//for(int i=0;i<n;i++){
//	char ch='A';
//	ch+=i;
//	for(int j=i+1;j>0;j--){
//		cout<<ch--;
//
//	}
//	cout<<endl;
//}

//c 

//int n=4;
//int num=0;
//for(int i=0;i<n;i++){
//	num+=i;
//	for(int j=i+1;j>0;j--){
//		cout<<num++;
//	}
//	cout<<endl;
//}

//4==inverted triangle 

//a

//int n=4;
//for(int i=0;i<n;i++){
//	for(int j=0;j<i;j++){
//		cout<<" ";
//	}
//	for(int j=0;j<n-i;j++){
//		cout<<"*";
//	}
//	cout<<endl;
//}

//b

//int n=4;
//for(int i =0;i<n;i++){
//	for(int j=0;j<i;j++){
//		cout<<" ";
//	}
//	for(int j=1;j<=n-i;j++){
//		cout<<j;
//	}
//	cout<<endl;
//}

//c

//int n=4;
//for(int i =0;i<n;i++){
//	char ch='A';
//	for(int j=0;j<i;j++){
//		cout<<" ";
//	}
//	for(int j=1;j<=n-i;j++){
//		cout<<ch++;
//	}
//	cout<<endl;
//}

//d

//int n=4;
//int num=0;
//for(int i =0;i<n;i++){
//	for(int j=0;j<i;j++){
//		cout<<" ";
//	}
//	for(int j=1;j<=n-i;j++){
//		cout<<num++;
//	}
//	cout<<endl;
//}

//e

//int n=4;
//char ch='A';
//for(int i =0;i<n;i++){
//	for(int j=0;j<i;j++){
//		cout<<" ";
//	}
//	for(int j=1;j<=n-i;j++){
//		cout<<ch++;
//	}
//	cout<<endl;
//}

//f

//int n=4;
//for(int i=0;i<n;i++){
//	for(int j=0;j<i;j++){
//		cout<<" ";
//	}
//	for(int j=0;j<n-i;j++){
//		cout<<(i+1);
//	}
//	cout<<endl;
//}

//g

//int n=4;
//char ch='A';
//for(int i=0;i<n;i++){
//	for(int j=0;j<i;j++){
//		cout<<" ";
//	}
//	for(int j=0;j<n-i;j++){
//		cout<<ch;
//	}
//	ch+=1;
//	cout<<endl;
//}

//5==reverse inverted triangle 

//a

//int n=4;
//for(int i=0;i<n;i++){
//	for(int j=0;j<i;j++){
//		cout<<" ";
//	}
//	for(int j=n-i;j>0;j--){
//		cout<<j;
//	}
//	cout<<endl;
//}

//5==right side triangle 

//a

//int n=4;
//for(int i=0;i<n;i++){
//	for(int j=0;j<(n-i-1);j++){
//		cout<<" ";
//	}
//	for(int j=0;j<i+1;j++){
//		cout<<"*";
//	}
//	cout<<endl;
//}

//b

//int n=4;
//for(int i=0;i<n;i++){
//	for(int j=0;j<(n-i-1);j++){
//		cout<<" ";
//	}
//	for(int j=0;j<i+1;j++){
//		cout<<j;
//	}
//	cout<<endl;
//}

//c

//int n=4;
//for(int i=0;i<n;i++){
//	char ch='A';
//	for(int j=0;j<(n-i-1);j++){
//		cout<<" ";
//	}
//	for(int j=0;j<i+1;j++){
//		cout<<ch;
//		ch+=1;
//	}
//	cout<<endl;
//}

//d

//int n=4;
//int num=0;
//for(int i=0;i<n;i++){
//	for(int j=0;j<(n-i-1);j++){
//		cout<<" ";
//	}
//	for(int j=0;j<i+1;j++){
//		cout<<num++;
//	}
//	cout<<endl;
//}

//e

//int n=4;
//char ch='A';
//for(int i=0;i<n;i++){
//	for(int j=0;j<(n-i-1);j++){
//		cout<<" ";
//	}
//	for(int j=0;j<i+1;j++){
//		cout<<ch++;
//	}
//	cout<<endl;
//}

//f

//int n=4;
//int num=0;
//for(int i=0;i<n;i++){
//	for(int j=0;j<(n-i-1);j++){
//		cout<<" ";
//	}
//	for(int j=0;j<i+1;j++){
//		cout<<num;
//	}
//	num++;
//	cout<<endl;
//}

//g

//int n=4;
//char ch='A';
//for(int i=0;i<n;i++){
//	for(int j=0;j<(n-i-1);j++){
//		cout<<" ";
//	}
//	for(int j=0;j<i+1;j++){
//		cout<<ch;
//	}
//	ch++;
//	cout<<endl;
//}

//h

//int n=4;
//for(int i=0;i<n;i++){
//	for(int j=0;j<(n-i-1);j++){
//		cout<<" ";
//	}
//	for(int j=i+1;j>0;j--){
//		cout<<j;
//	}
//	cout<<endl;
//}

//6=== Pyramid pattern 

//a

//int n=4;
//for(int i=0;i<n;i++){
//	for(int j=0;j<(n-i-1);j++){
//		cout<<" ";
//	}
//	for(int j=1;j<=i+1;j++){
//		cout<<j;
//	}
//	for(int j=1;j<=i;j++){
//		cout<<j;
//	}
//	cout<<endl;
//}

//b

//int n=4;
//for(int i=0;i<n;i++){
//	for(int j=0;j<(n-i-1);j++){
//		cout<<" ";
//	}
//	for(int j=1;j<=i+1;j++){
//		cout<<j;
//	}
//	for(int j=i;j>=1;j--){
//		cout<<j;
//	}
//	cout<<endl;
//}

//7=== hollow diamond pattern 

//int n=4;
//for(int i=0;i<n;i++){
//	for(int j=0;j<n-i-1;j++){
//		cout<<" ";
//	}
//	cout<<"*";
//
//if(i!=0){
//
//		for(int j=0;j<2*i-1;j++){
//			cout<<" ";
//		}
//		cout<<"*";
//	}
//	cout<<endl;
//}
//for(int i=0;i<(n-1);i++){
//	for(int j=0;j<i+1;j++){
//		cout<<" ";
//	}
//	cout<<"*";
//	if(i!=n-2){
//		for(int j=0;j<(2*(2-i)-1);j++){
//			cout<<" ";
//		}
//		cout<<"*";
//	}
//	cout<<endl;
//}

//8==Butterfly pattern

//int n=4;
//for(int i=0;i<n;i++){
//	for(int j=0;j<i+1;j++){
//	cout<<"*";
//	}
//	if(i!=0){
//	
//	for(int j=0;j<2*(n-2*i);j++){
//		cout<<" ";
//	}
//}
//
//	for(int j=0;j<i+1;j++){
//	cout<<"*";
//	}
//	
//	cout<<endl;
//}


//day ===5
//(functions,basic questions)

return 0;
}
