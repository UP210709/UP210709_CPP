# **<center> <span style="color: red;">UNIT 4</span>**
# **<center> <span style="color: cyan;">Torres de Hanoi y Sudoku</span>**
***
<details>
<summary> Introduction </summary>
<br>

***In this fourth unit, we worked on a fairly simple game such as a cat, a connect 4, battleship, towers of hanoi, etc.*** 

***Our team worked on 2 different games, a Towers of Hanoi and a Suduko.***

</details>

***
<details>
<summary> Functions </summary>
<br>

## <center> <span style="color: cyan;">Hanoi Towers

![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U4/Imagenes/T.png)

---
**void IT()** 

Draw the board for the hanoi towers.

---
**void ID(int matriz[][n])**

*matriz[][n] = Matrix values*

*n = 3*

Draws the disks for the tower of hanoi 

---
---
**void LM(int matriz[][n])**

*matriz[][n] = Matrix values*

*n = 3*

Assigns a value to the disks and adds a length to them

---
---
**void jugar(int d[n][n],int m1,int m2)**

*d[n][n] = Matrix values*

*m1 and m2 = Values to move the towers (m1 start, m2 end)*

After requesting the values of m1 and m2, the function places the values at the set positions and moves the disk from one side to the other and checks if the disk is larger than the one below it.

---
---
**boolean Che_Vic(int d[n][n])**

*d[n][n] = Matrix values*

Verify that you managed to win the game (pass all the towers to the other side).

---

## <center> <span style="color: cyan;">Sudoku

![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U4/Imagenes/S.png)

---
**int verificarC(int sudoku[n][n], int vuelta)**

*int suduko[n][n] = main matrix*

*int vuelta =  value*

verifies that the number is not repeated in any part of the row and column where it was placed.

---
---
**void Imprimir_Numeros(int sudoku[n][n], int ms[n][n])**

*int suduko[n][n] = main matrix*

*int ms[n][n] = verification matrix (0, 1)*

prints the numbers 

---
---
**void Imprimir_tablero()**

Draw the board for the suduko

---
---
**void LM(int sudoku[n][n])**

*int suduko[n][n] =*

Randomly generates the numbers of the suduko to be filled.

---
---
**void MMS(int ms[n][n])**

*int ms[n][n] = verification matrix (0, 1)*

generates numbers 0 and 1 in the verification matrix randomly


---
---
**boolean Revisar_Victoria(int ms[n][n])**

*int ms[n][n] = verification matrix (0, 1)*

Verify that you managed to win the game (complete the suduko )

---


</details>

***
<details>
<summary> Flow diagram Hanoi towers </summary>
<br>

![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U4/Imagenes/DDT1.png)

![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U4/Imagenes/DDT2.png)

</details>


***
<details>
<summary> Flow diagram Sudoku </summary>
<br>

![Inserte Imagen aqui](https://github.com/UP210639/UP210639_CPP/blob/main/U4/Imagenes/DDS.jpeg)

</details>