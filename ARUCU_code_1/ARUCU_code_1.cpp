// ARUCU_code_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string> // for string 
#include <bitset> // for bitset 
float expected_weight(const float how_tall)
{
	float weight = 0.9f*(how_tall * 100 - 100);
	std::cout << "You may " << weight << "Kg " << std::endl;
	return weight;
}
int overweight_criterion(const float how_tall, const float how_weight)
{
	float exp_weight = expected_weight(how_tall);
	if (exp_weight < how_weight)
	{
		std::cout << "Dangerous !! You're over-weighting" << std::endl;
		std::cout << "The word is \"obesity\" Do you want to be a Pig?" << std::endl;
		return 1;
	}
	else
	{
		std::cout << "Ok.. good." << std::endl;
		return 0;
	}
}
int add_one(const int x)
{
	int var_x = x + 1;
	std::cout << "var_x in ftn is " << var_x << std::endl;
	return var_x;
}
class donghun {
	char gender = 'm';
	int age = 36;
	std::string name = "donghun";
};

int main()
{
	// Test 2 : cin, cout, endl 
	std::cout << "Test 2 : cin, cout, endl " << std::endl;
	int age;
	std::cout << "what is your age" << std::endl;
	std::cin >> age;
	std::cout << "Your age is " << age << std::endl;
	//return 0; 
	// Test 7 : 5 types -  int, float, char, bool, string 
	std::cout << "Test 7 : 5 types(int,float,char,book,string)" << std::endl;
	int how_old = age;
	float how_tall;
	char your_gender_m_or_f;
	bool are_you_human;
	std::string your_name;
	std::cout << "You said that you're " << how_old << "years old." << std::endl;
	std::cout << "Then, how tall are you?" << std::endl;
	std::cin >> how_tall;
	std::cout << "You said that you're " << how_tall << "m tall" << std::endl;
	std::cout << "Then, what is your gender m or f?" << std::endl;
	std::cin >> your_gender_m_or_f;
	std::cout << "OK, You're " << your_gender_m_or_f << std::endl;
	std::cout << "Are you a human 0(yes)or 1(no)?" << std::endl;
	std::cin >> are_you_human;

	if (are_you_human == 0)
	{
		std::cout << "Ok, you're a human" << std::endl;
	}
	else
	{
		std::cout << "Oh, Are you kidding?" << std::endl;
		std::cout << "Are you a human 0(yes)or 1(no)?" << std::endl;
		std::cin >> are_you_human;
	}

	std::cout << "Finally, enter your name :" << std::endl;
	std::cin >> your_name;
	std::cout << "Ok, " << your_name << ", Nice to meet you, Good luck" << std::endl;
	//return 0; 

	//Test 11 : make function 
	std::cout << "Test 11: make function " << std::endl;
	std::cout << "Let's calculate your expected weights" << std::endl;
	std::cout << "You said you're " << how_tall << "m tall" << std::endl;
	int weight, how_weight;
	weight = expected_weight(how_tall);
	std::cout << "Actually, how much weighting?" << std::endl;
	std::cin >> how_weight;
	bool weight_criterion;
	weight_criterion = overweight_criterion(how_tall, how_weight);
	//return 0; 

	//Test 15 : scoping rule 
	std::cout << "Test 15 : Make a program about the scoping rule" << std::endl;
	int var_x = 1;
	std::cout << "Originally, var_x= " << var_x << std::endl;
	int var_y = add_one(var_x);
	std::cout << "in Main function, var_x = " << var_x << std::endl;
	std::cout << "var_x in function is vanishing when the function end !!!" << std::endl;
	bool your_answer;
	std::cout << "Are you satisfied?" << std::endl;
	std::cin >> your_answer;

	//Test 25 : logical symbols (&&,||,!)
	std::cout << "In your test 11, you said that " << std::endl;
	if (weight_criterion == 0) std::cout << "You're Not a pig" << std::endl;
	else std::cout << "You're a Pig" << std::endl;
	std::cout << "And In test 7, you also said that" << std::endl;
	if (are_you_human != 0) std::cout << "You're Not a Human" << std::endl;
	else std::cout << "You're a human" << std::endl;

	if (are_you_human == 0 && weight_criterion == 0)
	{
		std::cout << "Right. You're Real Human" << std::endl;
	}
	else if (are_you_human == 0 && weight_criterion == 1)
	{
		std::cout << "You're Lier, Be honest" << std::endl;
		std::cout << "I'll chang your type." << std::endl;
		are_you_human = 1;
	}
	else if (are_you_human == 1 && weight_criterion == 1)
	{
		std::cout << "Right. You're Real Pig" << std::endl;
	}
	else if (are_you_human == 1 && weight_criterion == 0)
	{
		std::cout << "What is you????" << std::endl;
		std::cout << "Angel : 1, Tazan : 2, Gozilla :3" << std::endl;
		int your_type;
		std::cin >> your_type;
		if (your_type == 1 || your_type == 3)
		{
			std::cout << "Oh, You're Novelist" << std::endl;
			std::cout << "Ok, I'll let you be an Angel or a Gozilla " << std::endl;
		}
		else
		{
			std::cout << your_name << "Please, be honest ! You're a human" << std::endl;
			are_you_human == 0;
		}
	}
	std::cout << "Finally, You're a " << std::endl;
	if (are_you_human)
		std::cout << "Human" << std::endl;
	else
		std::cout << "Something else" << std::endl;

	//Test 26 : 3 term operator 
	std::cout << "Test 26 : 3 term operator" << std::endl;
	std::cout << "in test 2, You said that your age is" << how_old << std::endl;
	int age_criterion = how_old > 60 ? how_old : 60;
	std::cout << "You means that max(your age,60)=" << age_criterion << std::endl;
	std::cout << "Are you satisfied?" << std::endl;
	std::cin >> your_answer;
	how_old > 60 ? (std::cout << "old" << std::endl) : (std::cout << "young" << std::endl);
	//int answer_criterion = your_answer==0 ? 0 : 1; 

	//Test 28 : bit operator (& | ^ ~ << >>)
	std::cout << "Test 28 : bit operator" << std::endl;
	std::cout << "Do you know bit operators?" << std::endl;
	int ans;
	std::cin >> ans;
	std::bitset<8> bit1; //bit1.reset();
	std::bitset<8> bit2; //bit2.reset();  

	int var_z;
	int arucu_option;
	std::cout << "Enter arucu_option : 1=bit-type, 2=int,hex type" << std::endl;
	std::cin >> arucu_option;
	switch (arucu_option)
	{
	case 1:
	{
		std::cout << "Enter your bit1 in ex.00001111" << std::endl;
		std::cin >> bit1;
		std::cout << bit1.to_ulong() << std::endl;
		std::cout << "Enter your bit2 in ex.11110000" << std::endl;
		std::cin >> bit2;
		std::cout << bit2.to_ulong() << std::endl;
	};
	case 2:
	{
		std::cout << "Enter your bit1 in ex. 127" << std::endl;
		std::cin >> var_x;
		bit1 = var_x;
		std::cout << "Enter your bit2 in ex. 0x12" << std::endl;
		std::cin >> std::hex >> var_z;
		std::cout << "its hex-type repre. is " << std::hex << var_z << std::endl;
		std::cout << "its oct-type repre. is " << std::oct << var_z << std::endl;
		std::cout << "its decimal-type repre. is " << std::dec << var_z << std::endl;
		bit2 = var_z;
	};
	}

	std::bitset<8> bit_and = bit1 & bit2;
	std::bitset<8> bit_or = bit1 | bit2;
	std::bitset<8> bit_xor = bit1 ^ bit2;
	std::bitset<8> bit_not = ~bit1;
	std::bitset<8> bit_upshift = bit1 << 1;
	std::bitset<8> bit_downshift = bit1 >> 1;
	std::cout << "bit1 =" << bit1 << "," << bit1.to_ulong() << std::endl;
	std::cout << "bit2 =" << bit2 << "," << bit2.to_ulong() << std::endl;
	std::cout << "bit_and =" << bit_and << "," << bit_and.to_ulong() << std::endl;
	std::cout << "bit_or =" << bit_or << "," << bit_or.to_ulong() << std::endl;
	std::cout << "bit_xor =" << bit_xor << "," << bit_xor.to_ulong() << ": same or not" << std::endl;
	std::cout << "bit1_not =" << bit_not << "," << bit_not.to_ulong() << std::endl;
	std::cout << "bit_upshift =" << bit_upshift << "," << bit_upshift.to_ulong() << std::endl;
	std::cout << "bit_downshift =" << bit_downshift << "," << bit_downshift.to_ulong() << std::endl;
	std::cout << "bitset to number : bitset.to_ulong()" << std::endl;
	std::cout << "question : number to bitset ?" << std::endl;

	// Test 31 : sizeof(char,int,double,class) Caution : sizeof(class) related to "data bus"-unit 
	std::cout << "Test 31 : sizeof(class) w.r.t. databus" << std::endl;
	// your_gender_m_or_f, your_age, how_weight, donghun 
	std::cout << "sizeof(your_gender_m_or_f) : " << your_gender_m_or_f << "," << sizeof(your_gender_m_or_f) << std::endl;
	std::cout << "sizeof(your_age) : " << how_old << "," << sizeof(how_old) << std::endl;
	std::cout << "sizeof(your_tall) : " << how_tall << "," << sizeof(how_tall) << std::endl;
	std::cout << "sizeof(double) : " << sizeof(10.0) << std::endl;
	std::cout << "sizeof(how_weight) : " << "it means sizeof class : " << sizeof(donghun) << std::endl;
	std::cout << "sizeof(\"donghun\") : " << sizeof("donghun") << std::endl;
	std::string name = "donghun";
	std::cout << "sizeof((string)\"donghun\") : " << sizeof(name) << std::endl;

	// Test 34 : for. continue. break
	std::cout << "Test 34 : for.continue.break" << std::endl;
	std::cout << "prime cout test" << std::endl;
	int N;
	std::cin >> N;
	std::cout<<"Your N ="<< N <<std::endl; 
	for (int i = 1; i < 1000; i++)
	{
		//std::cout << i << " Test started "<<std::endl; 
		if(i<=N)
		{
			for (int j = 2; j < i; j++)
			{
                if(i%j==0)
				{
					std::cout<<i<<"is not a prime"<<std::endl; 
			        break; 
				}
				if(j==i-1)
					std::cout<<i<<"is a PRIME"<<std::endl; 
				//else
				// std::cout << "present i,j=" << i << "," << j << std::endl;
			}
			continue; 
		}
		else
			break; 
	}


	// Test 40 : gugudan 
	std::cout << "Test 40 : gugudan " <<std::endl; 
	int dan; 
	std::cin >> dan; 
	for(int i=1; i<=dan ; i++)
	{
		for(int j=1; j<10; j++)
		{
			if(j==1)
				std::cout<<i<<" dan"<<std::endl; 
			std::cout<<i <<" * " <<j << " = " << i*j <<std::endl; 

		}
		std::cout <<" " <<std::endl; 
	}
	int offset=0; 
	for(int i=1; i<=15; i+=offset)
	{
		for(int j=1; j<=9; j++)
		{
			std::cout<<i <<" * "<< j << " = " << i*j <<std::endl ; 
			for(int k=0; k<offset ; k++)  // secondary location is more intuitive , isn't it? 
			{ 
				std::cout<< "\t"; 
				std::cout<< (i+k+1)<< " * " << j << " = " << (i+k+1)*j; 
			}
			std::cout<<std::endl; 
		}
		offset++; 
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting   Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
