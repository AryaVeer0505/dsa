#include<iostream>
using namespace std;
//int main(){

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

//function syntax

//int printHello(){
//	cout<<"hello\n";
//	return 3;
//}
//int main(){
//   cout<<printHello();
//}

//parameters

//function to print sum of two numbers 

//int sum(int a,int b){
//	return a+b;
//}
//int main(){
//   cout<<"sum of two numbers:"<<sum(3,3);
//}

//or

//int sum(int a,int b){
//	int sum=a+b;
//	return sum;
//}
//int main(){
//   cout<<"sum of two numbers:"<<sum(3,3);
//}

//minimum of two number

//int greater(int a,int b){
//   if(a>b){
//   	return a;
//   }
//   else{
//   	return b;
//   }
//}
//int main(){
//	cout<<"greater number is:"<< greater(3,7);
//}

//function to calculate sum of 1 to n 

//int sum(int num){
//   int sum=0;
//   for(int i=0;i<=num;i++){
//   	sum+=i;
//   }
//   return sum;
//}
//int main(){
//	cout<<"sum of n numbers:"<< sum(10);
//}

//calculate n factorial 

//int factorial(int num){
//   int fact=1;
//   for(int i=1;i<=num;i++){
//   	   fact*=i;
//   }
//   return fact;
//}
//int main(){
//	cout<<"factorial of n numbers:"<< factorial(5);
//}

//functions in memory 

//two types of memory===
//1===stack(static)
//functions are stored in stack
//in stack memory every function is stored in stack frames

//for example:-

//in stack main function is stored first
//Then sum function is called and gets stored above main function
//current function remains on top of stack
//return statement should always be last

//2===heap(dynamic)

//pass by value 
//(copy of arguments is passed to functions)

//int sum(int a,int b){
//	return a+b;
//}
//int main(){
//	int x=3,y=6;
//	cout<<sum(x,y);
//}

//in this exxample copy of x and y values get stored in sum functions a and b

//if we make any change in sum functions variables it will not be reflected in main function

//int sum(int a,int b){
//	a+=5;
//	b+=3;
//	return a+b;
//}
//int main(){
//	int a=3,b=6;
//	cout<<sum(a,b)<<endl;
//	cout<<a<<endl;
//	cout<<b;
//}

//int changeX(int x){
//	x*=2;
//	cout<<"x="<<x<<endl;
//}
//int main(){
//	int x=5;
//	changeX(x);
//	cout<<"x="<<x;
//}

//calculate sum of digits of a numbers

//int main(){
//int digitsum=0;
//int num;
//int lastdigit;
//cout<<"enter any number:";
//cin>>num;
//while(num>0){
//	lastdigit=num%10;
//	num=num/10;
//	digitsum+=lastdigit;
//}
//cout<<digitsum;
//return 0;
//}

//using function

//int digitsum(int num){
//	int ds=0;
//	int last;
//	while(num>0){
//		last=num%10;
//		num=num/10;
//		ds+=last;
//	}
//	cout<<ds;
//}
//int main(){
//	int num =1234;
//	digitsum(num);
//}

//calculate ncr binomial coefficient for n and r

//int factorial(int n){
//	int fact=1;
//	for(int i=1;i<=n;i++){
//		fact*=i;
//	}
//	return fact;
//}
//int ncr(int n,int r){
//	int fact_n=factorial(n);
//	int fact_r=factorial(r);
//	int fact_nmr=factorial(n-r);
//	return fact_n/(fact_r*fact_nmr);
//}
//int main(){
//	int n=8,r=2;
//	cout<<ncr(n,r);
//
//}
