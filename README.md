#_printf Project
##Made by Paul Stewart and Caleb House

##Introduction
The goal of this project is to recreate the printf(3) function from scratch as "_printf(3)"

##Technologies
We implement our own versions of putchar and puts to recreate the printf command. This allows us to create our own printf function from scratch. _printf searches for the % character and then uses the character following that to determine the format type of the outputted string, whether it's an integer, decimal integer, string, or character. It also returns the number of characters printed.
