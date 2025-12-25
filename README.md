# Brute Force Lab 🧪

A simple C-based simulation tool to understand the logic behind brute-force attacks through numeric password matching.

## 🚀 Features

* **Mode 1: Brute Force via File** – Searches for a target password within an existing `passwords.txt` file.
* **Mode 2: In-Memory Brute Force** – Generates random 6-digit passwords in RAM and checks them against your target.
* **Mode 3: Password Generator** – Creates a custom-sized list of random 6-digit numbers and exports them to a text file.
* **Error Handling** – Includes validation for user inputs and file existence checks.

## 🛠️ Installation & Usage

### Compilation
Open your terminal and run:
```bash
gcc main.c -o brute_force_lab
Running the Program
Bash

./brute_force_lab
📋 How It Works
Targeting: The program handles 6-digit passwords (ranging from 100,000 to 999,999).

Randomization: Uses srand(time(NULL)) to ensure unique password generation in every session.

Memory Management: In Mode 2, the program uses dynamic memory allocation (malloc) to store passwords and safely releases it (free) after the search.

⚠️ Disclaimer
This program is for educational purposes only. It is designed to demonstrate programming concepts like loops, file handling, and memory management. It is not intended for any malicious use.

📄 License
This project is open-source and available under the MIT License.
