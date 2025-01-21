# Push_swap

## Project Description
**Push_swap** is a project from the 42 curriculum, designed to implement an algorithm that sorts a list of integers in the smallest number of operations possible, using a limited set of instructions. The challenge is to create an efficient sorting algorithm that uses two stacks (`a` and `b`) and can only use the following operations:

- `sa` : Swap the first two elements of stack `a`.
- `sb` : Swap the first two elements of stack `b`.
- `ss` : `sa` and `sb` simultaneously.
- `pa` : Push the top element of stack `b` to stack `a`.
- `pb` : Push the top element of stack `a` to stack `b`.
- `ra` : Rotate stack `a` (shift all elements up by one).
- `rb` : Rotate stack `b` (shift all elements up by one).
- `rr` : `ra` and `rb` simultaneously.
- `rra` : Reverse rotate stack `a` (shift all elements down by one).
- `rrb` : Reverse rotate stack `b` (shift all elements down by one).
- `rrr` : `rra` and `rrb` simultaneously.

## Objective
The goal is to sort a list of integers with the minimum number of operations using only the above instructions. The solution should be optimized to handle lists of varying sizes efficiently, especially with larger lists (e.g., 1000+ elements).

## What I Did
In this project, I developed a sorting algorithm that sorts a list of integers using a two-stack mechanism and the fewest number of operations possible. Below are the key steps I took:

### 1. **Algorithm Design**
   - I researched and implemented an efficient sorting algorithm that works within the constraints of the problem. The main strategy is to break down the list into smaller, more manageable parts using the stacks and then merge them in sorted order.
   - The algorithm focuses on minimizing the number of operations while ensuring correct sorting. I employed strategies such as selection sort, insertion sort, and other techniques optimized for stack-based sorting.

### 2. **Stack Operations**
   - I implemented the operations (`sa`, `sb`, `pa`, `pb`, `ra`, `rb`, etc.) that are required for manipulating the stacks.
   - The core of the project involves determining how to apply these operations efficiently based on the current state of the stacks and the numbers that need to be sorted.

### 3. **Handling Different Sizes of Input**
   - I implemented different sorting strategies based on the size of the input. For smaller lists, simpler algorithms like insertion sort are more efficient, while larger lists require more complex strategies.
   - I optimized the algorithm for lists of various sizes, ensuring that it performs well with both small and large datasets.

### 4. **Performance Optimization**
   - I worked on optimizing the number of operations used by the algorithm. This involved reducing unnecessary operations and ensuring that the program executes efficiently for larger inputs.
   - I also focused on minimizing memory usage and ensuring that the algorithm runs within the time limits.

### 5. **Edge Cases and Validations**
   - I added checks to handle edge cases like an already sorted list, a reverse sorted list, or a list with repeated numbers.
   - The program validates the input to ensure that only valid integers are provided, and it gracefully handles errors or invalid inputs.

## Features
- Sorting a list of integers with the minimum number of operations.
- Efficient handling of small and large datasets.
- Clear implementation of stack operations (`sa`, `sb`, `pa`, `pb`, etc.).
- Error handling and input validation.
- Optimized sorting for different list sizes.

## Requirements
- A C compiler (e.g., `gcc`).
- Make utility for building the project.

## Installation
To set up and run the program on your local machine, follow these steps:

1. **Clone the repository**:
   ```bash
   git clone https://github.com/AhmadSaadeh03/push_swap.git
   cd push_swap
   make
./push_swap 3 1 5 2 4
For the input 3 1 5 2 4, the program might output:
sa
pb
pb
ra
pa
pa

