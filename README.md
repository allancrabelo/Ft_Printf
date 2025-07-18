![Design sem nome(6)](https://github.com/user-attachments/assets/87775e05-7e9b-4b2a-abe8-9f39b58bd63c)

# 🧠 From Stone Tablets to Syscalls

Since the dawn of civilization, writing has been the **ultimate cheat code** — a hack for memory, power, and legacy.

The Sumerians carved ideas into clay with reed styluses. They didn’t know it yet, but that was humanity’s **first commit**.
Public documentation before public repos. Versioning without version control.
Make a mistake? Too bad. No `git revert`.
Just smash the tablet and start over — literally a `rm -rf ./history`.

Then time marched on. From clay to papyrus, parchment to Gutenberg, mechanical keyboards to IDEs that autocomplete while you yawn.
But the spirit? Still the same. Every letter you type is a negotiation between your brain and the machine. It’s you saying:

> **"I command. You execute."**

---

## 🧔 Dennis Ritchie: The Man Who Printf’ed the World

In 1972, Dennis Ritchie stared into the void and said:

> “Let’s throw a `printf` in here and see what the hell is going on.”

That wasn't just a function. That was **a microphone to the soul of the machine**.
It was the debugger of the heart.
It was the first time someone wrote:

```c
printf("Hello, world!\n");
```

…and the machine blinked back with a terminal prompt and a binary sigh.

That moment didn’t just birth the C language.
It sparked the entire hacker ethos as we know it.

---

## 🦾 Your Turn to Hold the Pen

Now it’s your turn.
With `ft_printf`, you enter the inner circle. But here? No `stdio.h`. No training wheels.

You're about to **carve your own binary typography** with bare hands and pointer arithmetic.
No emotional support from standard libraries.
If you want to print `"42"` on screen, you're going to **negotiate directly with `write()` like it’s a hostage situation**.

You’ll finesse pointers like you're picking a digital lock.
You’ll convert integers with raw willpower and caffeine.
And each `%x`, `%p`, `%d` you reimplement is a battle cry in the void saying:

> “Relax, Dennis. I’ve got this.”

---

## 🤘 Writing Isn’t Dead. It Was Just Compiled.

Today you print logs, status messages, memory addresses, accented strings, angry errors, and proud successes.
But everything — and I mean **everything** — starts with one system call:

```c
write(1, &char, 1);
```

Poetic, isn’t it?
You’re running millions of cycles per second, packing 64GB of RAM, and still… when life hits the fan:

```c
printf("wtf is happening\n");
```

— Come on, you know that line has saved you more times than you’d admit in public.

---

## 🧘 The ft\_printf Zen

> “When you understand the difference between `%x` and `%X`,
> and can handle `(null)` with grace and compassion,
> then… you may proceed to the next level.”

## 🏅 125% Performance in the Project

During the ft_printf project evaluation, I achieved the maximum score of 100%, the result of delivering all mandatory and bonus functionalities with precision, while fully meeting the technical standards required, including:

    ✅ Correct and efficient reimplementation of all standard printf behaviors
    ✅ Handling of complex format specifiers and flags
    ✅ Full compliance with Norminette coding standards
    ✅ Zero memory leaks (Valgrind clean)
    ✅ Implementation of bonus features, such as extended format support and robust edge-case handling

This score demonstrates not only deep understanding of C and formatted output logic, but also a strong commitment to code quality, performance, and low-level programming practices — essential values at the core of the 42 curriculum.

<p align="center">
  <img src="https://github.com/user-attachments/assets/f3a5d881-f36f-440e-bd37-9d618c395e44" alt="Imagem" />
</p>

## 💡 About the Project

`ft_printf` is a manual reimplementation of the classic C `printf` function. Without relying on standard formatting libraries (`<stdio.h>`), we’re challenged to build a robust system that accepts multiple types, formats strings, converts integers, hexadecimals, and pointers — all while respecting precision, flags, and more.


```mermaid
---
title: Ft_Printf Flow & Logic (Expanded Layout)
---
classDiagram

    class Ft_Printf {
        + Iterates through format string  
        + Detects '%' specifier  
        + Calls print_* functions  
    }

    class va_list {
        + Accesses variadic arguments  
        + Uses va_start  
        + Uses va_arg  
        + Uses va_end  
    }

    class ft_putchar {
        + Prints a single character  
    }

    class ft_putstr {
        + Prints a string or "(null)"  
    }

    class ft_putnumber {
        + Prints signed integer  
    }

    class ft_putunsigned {
        + Prints unsigned integer  
    }

    class ft_puthex {
        + Prints hexadecimal number  
        + Supports lowercase (x) and uppercase (X)  
    }

    class ft_putpointer {
        + Prints pointer address in hexadecimal  
        + Format: 0x...  
    }

    class write {
        + System call: write()  
        + Sends output to stdout  
    }

    %% Connections from ft_printf
    Ft_Printf --> va_list
    Ft_Printf --> ft_putchar
    Ft_Printf --> ft_putstr
    Ft_Printf --> ft_putnumber
    Ft_Printf --> ft_putunsigned
    Ft_Printf --> ft_puthex
    Ft_Printf --> ft_putpointer

    %% Output handling
    ft_print* --> write

```

## 🧠 What You Will Master

While building `ft_printf`, I'll internalize fundamental low-level concepts that shape every high-performance language:

    ✅ Pointer manipulation and va_list
    ✅ Integer-to-string conversion (base 10, 16, and others)
    ✅ Buffer creation, counters, and flow control
    ✅ Modularization using structs and dispatch tables
    ✅ Full control over text formatting (without using printf!)

## 🚀 Technical Challenges Overcome

    ✅ Handling variadic arguments with stdarg.h
    ✅ Creating specific functions for each format type
    ✅ Converting negative integers without using itoa()
    ✅ Safe pointer printing with fallback to (nil)
    ✅ Accurate character return count (like the real printf)

# 📁 Project Structure
    📦 ft_printf  
    ┣ 📂 libft 
    ┃ ┣ 📜 ft_memset.c
    ┃ ┣ 📜 ft_bzero.c  
    ┃ ┣ 📜 ft_strncmp.c  
    ┃ ┗ 📜 ...
    ┃ 📜 ft_printf.c  
    ┃ 📜 ft_putchar.c  
    ┃ 📜 ft_putnumber.c  
    ┃ ┗ 📜 ...

## 📚 Key Functionalities

🔹 Manual Conversion – Total Control over Output

- `%c`: prints characters directly
- `%s`: handles strings, including NULL safety
- `%d`/`%i`: signed integers
- `%u`: unsigned integers
- `%x`/`%X`: hexadecimals (lowercase or uppercase)
- `%p`: pointer formatting with `0x` prefix
- `%%`: literal percent symbol

## 📖 Technical Glossary

| Concept            | Description |
|--------------------|-------------|
| `va_list`          | Type used to traverse variadic arguments |
| `va_start`         | Initializes the argument list |
| `va_arg`           | Accesses the next argument |
| `write`            | System call to print bytes |
| `itoa`             | Integer-to-string conversion (manual) |
| `%p`               | Pointer converter: prints memory addresses with `0x` |
| `recursion`        | Technique used to print numbers without buffer allocation |

---

## 🧠 Helpful Commands During Development

```
# Compile the project
make

# Clean compiled objects
make clean

# Clean all (including .a)
make fclean

# Recompile from scratch
make re
```

## 🧪 Compile and Test with a Custom Main

To test your implementation using your own main.c, you can compile it like this:

```
cc  main.c libftprintf.a 
```

    🔹 Make sure you have already run make so that libftprintf.a exists.
    🔹 The main.c file should include #include "ft_printf.h" to access your functions.
    🔹 It is acceptable to ignore warnings during compilation, as they are expected for testing the scope and analyzing the results of the project.
    
### 🌍 Vision and Impact

`ft_printf` is not just a technical exercise — it's a foundation. It teaches how complex systems interpret, translate, and display reality. From server logs to game console messages, every system communicates. And every digital communication begins with a `print`.

By building yours from scratch, you step into the heart of software engineering.

---

## 🧙 Alan Kay 

> “Reimplementing `printf` isn’t reinventing the wheel.
> It’s understanding **why the hell the wheel spins in the first place.**”



# 🚧 Tutorials (Coming Soon)

I'm currently working on a detailed tutorial to help others navigate the FT_PRINTF project more efficiently. This section will include:

    📹 Video Guide – A step-by-step walkthrough explaining key concepts and solutions.
    📄 PDF Guide – A structured document with explanations, tips, and best practices.

Stay tuned! The tutorial will be available soon. 🚀

# 🤝 Contributing

If you're also doing the Piscine, feel free to suggest improvements or share new approaches!

    📬 Contact: If you'd like to discuss solutions or exchange ideas, find me on Discord or GitHub!

<p align="center">
  <a href="https://github.com/allancrabelo" target="_blank" rel="noopener noreferrer">
    <img src="https://github.com/user-attachments/assets/b3000019-31b9-4735-90c2-ea1a72601c1c" alt="Imagem" />
  </a>
</p>

