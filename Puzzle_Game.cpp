#include <iostream> 

using std::cout; 

using std::cin; 

using std::endl;; 

#include <cstdlib> 

using std::rand; 

using std::srand; 

 

#include <ctime> 

using std::time; 

const int arraySize = 4; 

char elements[ arraySize ] [ arraySize ] = {{'1','2','3','4'}, 

    {'5','6','7','8'}, 

 {'9','A','B','C'}, 

         {'D','E',' ','F'}}; 

  char check  [ arraySize ] [ arraySize ] = {{'1','2','3','4'}, 

 {'5','6','7','8'}, 

 {'9','A','B','C'}, 

 {'D','E','F',' '}}; 

int vSP = 3; // vertical space Position 

int hSP = 2; // horizontal space Position 

void moveUp(); 

void moveDown(); 

void moveRight(); 

void moveLeft(); 

void randomise(); // randomize the array  

int winer(); // checks if player have solved the puzzle 

int main() 

{ 

srand(time(0)); 

randomise(); 

bool quite(false); 

do 

{ 

for(int i = 0; i < arraySize; i++){ 

for(int j = 0; j < arraySize; j++) 

cout << "  " << elements[i][j]; 

cout << endl << endl; 

} 

char a; 

cout << "f - Up, a - Down, c - Left, e - Right" << endl;  

cin >> a; 

switch(a) 

{ 

case 'F': 

case 'f': 

moveUp(); 

break; 

 

case 'A': 

case 'a': 

moveDown(); 

break; 

 

case 'C': 

case 'c': 

moveRight(); 

 

break; 

 

case 'E': 

case 'e': 

moveLeft(); 

break; 

 

default: 

cout << "Wrong character, please type again!" << endl; 

break; 

} 

int c = winer(); 

if(c == 1){ 

cout << "Bravo! You solved the puzzle!" << endl; 

quite = true; 

} 

system("cls");  

}while(quite == false); 

return 0; 

} 

void moveUp() 

{ 

int vP = vSP; 

if(vP + 1 < 4 && vP >= 0){ 

elements[vSP][hSP] = elements[vSP + 1][hSP]; 

elements[vSP + 1][hSP] = ' '; 

vSP += 1; 

} 

} 

void moveDown() 

{ 

int vP = vSP; 

if(vP + 1 <= 4 && vP > 0){ 

elements[vSP][hSP] = elements[vSP - 1][hSP]; 

elements[vSP - 1][hSP] = ' '; 

vSP -= 1; 

} 

} 

void moveRight() 

{ 

int hP = hSP; 

if(hP + 1 <= 4 && hP > 0){ 

elements[vSP][hSP] = elements[vSP][hSP - 1]; 

elements[vSP][hSP - 1] = ' '; 

hSP -= 1; 

} 

} 

void moveLeft() 

{ 

int hP = hSP; 

if(hP + 1 < 4 && hP >= 0){ 

elements[vSP][hSP] = elements[vSP][hSP + 1]; 

elements[vSP][hSP + 1] = ' '; 

hSP += 1; 

} 

} 

void randomise() 

{ 

for(int i = 0; i < 20000; i++) 

{ 

int a = 1 + rand() % 4; 

switch(a) 

{ 

case 1: 

moveUp(); 

break; 

 

case 2: 

moveDown(); 

break; 

 

case 3: 

moveRight(); 

 

break; 

 

case 4: 

moveLeft(); 

break; 

} 

} 

} 

int winer() 

{ 

int ans; 

 

for(int i = 0; i < arraySize; i++){ 

for(int j = 0; j < arraySize; j++){ 

if(elements[i][j] == check[i][j]) 

ans = 1; 

else  

return -1; 

} 

} 

return 1; 

} 
