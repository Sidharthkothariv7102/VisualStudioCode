// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>
#include <string>
#include <array>

// IMPORTANT: Only add code in the section
// indicated below. The code I've provided
// makes your solution work with the 
// automated grader on Coursera

/**
 * Programming Assignment 3
 * @return exit status
*/
int main()
{
	std::string Input;

	// loop while there's more input
	std::getline(std::cin, Input);
	while (Input[0] != 'q')
	{
		// Add your code between this comment
		// and the comment below. You can of
		// course add more space between the
		// comments as needed
		
		std::array<int,26> Total;
		for (int i = 0; i < 26; i++)
		{
			Total[i] = 0;
		}
		
		for (int i = 0; i < Input.size(); i++)
		{
			if (isalpha(Input[i]))
			{
				Input[i] = toupper(Input[i]);
				if (Input[i] == 'A')
				{
					Total[0] += 1;
				}
				else if (Input[i] == 'B')
				{
					Total[1] += 1;
				}
				else if (Input[i] == 'C')
				{
					Total[2] += 1;
				}
				else if (Input[i] == 'D')
				{
					Total[3] += 1;
				}
				else if (Input[i] == 'E')
				{
					Total[4] += 1;
				}
				else if (Input[i] == 'F')
				{
					Total[5] += 1;
				}
				else if (Input[i] == 'G')
				{
					Total[6] += 1;
				}
				else if (Input[i] == 'H')
				{
					Total[7] += 1;
				}
				else if (Input[i] == 'I')
				{
					Total[8] += 1;
				}
				else if (Input[i] == 'J')
				{
					Total[9] += 1;
				}
				else if (Input[i] == 'K')
				{
					Total[10] += 1;
				}
				else if (Input[i] == 'L')
				{
					Total[11] += 1;
				}
				else if (Input[i] == 'M')
				{
					Total[12] += 1;
				}
				else if (Input[i] == 'N')
				{
					Total[13] += 1;
				}
				else if (Input[i] == 'O')
				{
					Total[14] += 1;
				}
				else if (Input[i] == 'P')
				{
					Total[15] += 1;
				}
				else if (Input[i] == 'Q')
				{
					Total[16] += 1;
				}
				else if (Input[i] == 'R')
				{
					Total[17] += 1;
				}
				else if (Input[i] == 'S')
				{
					Total[18] += 1;
				}
				else if (Input[i] == 'T')
				{
					Total[19] += 1;
				}
				else if (Input[i] == 'U')
				{
					Total[20] += 1;
				}
				else if (Input[i] == 'V')
				{
					Total[21] += 1;
				}
				else if (Input[i] == 'W')
				{
					Total[22] += 1;
				}
				else if (Input[i] == 'X')
				{
					Total[23] += 1;
				}
				else if (Input[i] == 'Y')
				{
					Total[24] += 1;
				}
				else
				{
					Total[25] += 1;
				}
			}
		}

		for (int i = 0; i < 26; i++)
		{
			if (Total[i] != 0)
			{
				std::cout << (char)(i + 'A') << Total[i] << " ";
			}
		}
		std::cout << "\n";

		// Don't add or modify any code below
		// this comment
		std::getline(std::cin, Input);
	}
}
