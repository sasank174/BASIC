// //  stack=============================
// #include<iostream>
// using namespace std;

// int main()
// {
//     int a =10;
//     int *p;
//     p=&a;

//     cout<<p<<endl; // adress of a 0x61fe14
//     cout<<*p<<endl; // value of a 10

//     return 0;
// }


//  heap=============================
#include<iostream>
using namespace std;

int main()
{
	int *p = new int[5];
	p[0]=1;
	p[1]=10;
	p[2]=2;
	p[3]=13;
	p[4]=4;

	for (int i = 0; i < 5; i++)
	{
		cout<<p[i]<<endl;
	}

	delete []p;

	return 0;
}


// // ==================

// #include<iostream>
// using namespace std;

// struct rect
// {
//     int length = 10;
//     int width = 10;
// };


// int main(int argc, char const *argv[])
// {
//     struct rect r = {20,20};
//     struct rect *p = &r;

//     cout<< r.length;
//     p->length = 30;
//     cout<< r.length;
	
//     return 0;
// }
