# 🔐 Brute Force Lab Program (C)

A simple brute-force simulation tool written in **C** for learning and testing purposes.  
This program allows you to generate passwords, save them to a file, and attempt to find a target password either from the file or from randomly generated guesses.

---

## ✨ Features

| Option | Description |
|--------|-------------|
| **1** | Brute force search for a password stored inside `passwords.txt` |
| **2** | Generate multiple 6-digit passwords in memory and brute force search for a target |
| **3** | Create 6-digit passwords and save them to `passwords.txt` |
| **4** | Exit the program |

---

## 📁 File Requirements

- When using **Option 1**, you must have a file named:

passwords.txt

css
Kodu kopyala

- It must contain one 6-digit password per line, example:

123456
654321
111111

yaml
Kodu kopyala

---

## 🛠️ Compilation

Compile using GCC (works on Windows, Linux, Kali, etc.):

```sh
gcc brute_force_lab.c -o brute_force_lab
Run the compiled program:

sh
Kodu kopyala
./brute_force_lab   (Linux / Kali)
brute_force_lab.exe (Windows)
🚀 Usage Example
python-repl
Kodu kopyala
Welcome to brute force lab program.

1- Brute Force without creating password
2- Brute Force with creating password
3- Create passwords
4- Exit

>>> 3
How many number are you want >> 5
Created Password, Line: 1, Password: 483920
Created Password, Line: 2, Password: 192837
...
Then brute force it:

pgsql
Kodu kopyala
>>> 1
Enter target password >> 192837
1. try X, it isn't 483920
2. try X, it isn't 192837
Your password is found in 2. line and it is > 192837
⚠️ Notes
Passwords are always 6 digits

Option 2 & 3 use malloc() for dynamic memory allocation

Uses srand(time(NULL)) to randomize guesses

This is NOT a real password cracker, only a lab simulation

🧠 Learning Concepts Used
✔ File handling (fopen, fscanf, fprintf)
✔ Dynamic memory (malloc, free)
✔ Random number generation (rand, srand)
✔ Loops and input validation
✔ Basic brute-force logic

