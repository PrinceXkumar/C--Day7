/*
1
23
456
78910


#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int count=1;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<count;
			count++;
			j++;
		}
		cout<<endl;
		i++;
	}
}

*/

/*
1
23
345
4567

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	
	while(i<=n){
		int j=1;
		int v= i;
		while(j<=i){
			cout<<v;
			v++;
			j++;
		}
		cout<<endl;
		i++;
	}
}
*/


/*
1
21
321
4321

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<i-j+1;
			j++;
		}
		cout<<endl;
		i++;
	}
}

*/



/*
AAA
BBB
CCC
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=0;
	while(i<n){
		int j=1;
		while(j<=n){
			char a=65;
			cout<<char(a+i);
			a++;
			
			j++;
		}
		cout<<endl;
		i++;
	}
}

*/


/*
ABC
ABC
ABC

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=0; 
	while(i<n){
		int j=0;
		char a=65;
		while(j<n){
			cout<<char(a+j);
			
			j++;
		}
		cout<<endl;
		i++;
	}
}

*/

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	char s=65;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<char(s);
			s++;
			j++;
		}
		cout<<endl;
		i++;
	}
}














