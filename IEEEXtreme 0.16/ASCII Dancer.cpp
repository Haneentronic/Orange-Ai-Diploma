#include<bits/stdc++.h>
using namespace std;


string body[3][3];

//This function to initialize the basic parts in body
void resetbody()
{
	body[0][0] = ' ';//the right side of the head
	body[0][1] = 'o';// the head
	body[0][2] = ' ';// the lift side of the  head
	body[1][0] = '/';// the  right hand
	body[1][1] = '|';// the backbone of the body
	body[1][2] = '\\';// the lift hand
	body[2][0] = '/';// the right leg
	body[2][1] = ' '; //the space between the legs
	body[2][2] = '\\';// the lift leg

}


//  print the body
// thi function achieved open closed principle in SOLID principles
void printBody()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << body[i][j] ;

		}

		cout << endl;
	}
}


//All this function achieved open closed , dependency injection principle
//and dependency inversion in SOLID principles

void right_hand_to_hip(string body[3][3])
{
	if (body[0][0] == "(" ) body[0][0] = ' ';
	body[1][0] = '<';
	printBody();
}

void right_hand_to_head(string body[3][3])
{
	body[1][0] = ' ';
	body[0][0] = '(';
	printBody();
}

void left_hand_to_hip(string body[3][3])
{
	if (body[0][2] == ")") body[0][2] = ' ';
	body[1][2] = '>';
	printBody();
}

void left_hand_to_head(string body[3][3])
{
	body[1][2] = ' ';
	body[0][2] = ')';
	printBody();
}


void right_hand_to_start(string body[3][3])
{
	body[0][0] = ' ';
	body[1][0] = '/';
	printBody();
}

void left_hand_to_start(string body[3][3])
{
	body[0][2] = ' ';
	body[1][2] = '\\';
	printBody();
}


void right_leg_in(string body[3][3])
{
	body[2][0] = '<';
	printBody();
}

void right_leg_out(string body[3][3])
{
	body[2][0] = '/';
	printBody();
}


void left_leg_in(string body[3][3])
{
	body[2][2] = '>';
	printBody();
}

void left_leg_out(string body[3][3])
{
	body[2][2] = '\\';
	printBody();
}


//
void turn(string body[3][3])
{
	//printBody();
	/*string temp = body[0][2];

	if (body[0][0] == "(")
	{
		body[0][2] = ")";
	}

	if (temp == ")")
		body[0][0] = "(";
	else
		body[0][0] = " ";
	*/
	if (body[0][0] == " " && body[0][2] == ")") {
		body[0][0] == "(";
		body[0][2] == " ";
	}
	else if (body[0][0] == "(" && body[0][2] == " ") {
		body[0][0] == " ";
		body[0][2] == ")";
	}

	if (body[1][0] == "<" && body[1][2] == "\\") {
		body[1][0] == "/";
		body[1][2] == ">";
	}
	else if(body[1][0] == "/" && body[1][2] == ">") {
		body[1][0] == "<";
		body[1][2] == "\\";
	}
	else if(body[1][0] == "(" && body[1][2] == "\\") {
		body[1][0] == "/";
		body[1][2] == ")";
	}
	else if (body[1][0] == "/" && body[1][2] == ")") {
		body[1][0] == "(";
		body[1][2] == "\\";
	}
	else if (body[1][0] == "<" && body[1][2] == ")") {
		body[1][0] == "(";
		body[1][2] == ">";
	}
	else if (body[1][0] == "(" && body[1][2] == ">") {
		body[1][0] == "<";
		body[1][2] == ")";
	}


	if (body[2][0] == "/" && body[2][2] == ">")	{
		body[2][0] = "<";
		body[2][2] = "\\";
	}
	else if (body[2][0] == "<" && body[2][2] == "\\"){
		body[2][0] = "/";
		body[2][2] = ">";
	}
	printBody();
}



int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		resetbody();
		int r;
		cin >> r >> ws;
		int counter = 1;
		for (int i = 0 ; i < r ; i++)
		{
			string s;
			getline(cin, s);
			if (s[0] == 's')
			{
				string x = s.substr(4, s.size() - 1);
				cout << x << endl;
			}
			else if (s == "left hand to head")
				left_hand_to_head(body);
			else if (s == "left hand to hip")
				left_hand_to_hip(body);
			else if (s == "left hand to start")
				left_hand_to_start(body);
			else if (s == "left leg in")
				left_leg_in(body);
			else if (s == "left leg out")
				left_leg_out(body);
			else if (s == "right hand to head")
				right_hand_to_head(body);
			else if (s == "right hand to hip")
				right_hand_to_hip(body);
			else if (s == "right hand to start")
				right_hand_to_start(body);
			else if (s == "right leg in")
				right_leg_in(body);
			else if (s == "right leg out")
				right_leg_out(body);
			else if (s == "turn")
				turn(body);


		}
	}
}