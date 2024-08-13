# Game Statistics and Entity Management

This C++ project demonstrates various concepts such as dynamic memory management, class object instances tracking, and user interaction for updating and verifying game statistics.

## Features

- **Dynamic Memory Management:** Demonstrates the use of pointers, dynamic allocation, and deallocation of memory.
- **Game Statistics Management:** Create and manage game statistics like levels and rooms.
- **User Interaction:** Input scores, update them, and verify the list of scores.
- **Custom Structures:** A `GreatestNum` structure is used to compare scores and determine the winner.
- **Recursion:** Demonstrates recursion with a factorial function and a number guessing game.
- **Color Output:** Utilizes Windows API to set console text colors.

## Code Overview

### Main Functionalities

1. **Score Input & Display:** 
   - `inputArr(int* scoresP, int size)`: Function to input scores.
   - `printArr(int* scoresP, int size)`: Function to print scores.

2. **Score Modification:**
   - `modifyValue(int* const ptr)`: Modify the value of a score.
   - `updateScore(int* scoresP, int size)`: Update a specific score.
   - `verifyList(int* scoresP, int size)`: Allows the user to make updates to the list.

3. **Game Stats & Vector Operations:**
   - `printMember(const GameStats& obj)`: Prints the current level of the game.
   - `setColor(int color)`: Sets the console text color using the Windows API.

4. **Recursion Examples:**
   - `unsigned long factorial(unsigned long n)`: Computes the factorial of a number.
   - `checkNum(int ptr, int answer, int tries)`: Recursive function for a number guessing game.

5. **Object Management:**
   - Manage instances of `GameStats` and `Vector3D` objects.
   - Compare vector values using the `compare` method.

## Dependencies

- **fmt Library:** Used for formatting strings, numbers, and other data types in the program.
- **Windows API:** Utilized to change console text color.

## Setup

1. Clone the repository:

    ```bash
    git clone [https://github.com/your-username/game-statistics-entity-management.git](https://github.com/Tanner-Davison/CPLUS_PLUS_Learning_Project.git)
    ```

2. Compile the code using a C++ compiler with support for the fmt library.

3. Run the executable to start managing game statistics and entities.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contact

For any questions or feedback, feel free to reach out at your.email@example.com.
