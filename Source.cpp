//Ctrl + Alt + N = run

#include <iostream>
#include <string>
using namespace std;

/*Variables and Data Type
    int main(){
        char myCharacter;
        myCharacter = 'y';

        int myInt;
        myInt = 13;

        cout << myCharacter << endl;
        cout << myInt << endl;

        myCharacter = 'n';
        myInt = 12;

        cout << myCharacter << endl;
        cout << myInt << endl;

        system("pause");
    }
*/

/*If Statement
    int main(){
        int a = 1;
        int b = 6;

        if (b < a){
            cout << "b is less than a." << endl;
        }
        else if (a < b){
            cout << "a is less than b." << endl;
        }
        else{
            cout << "a is equal to b." << endl;
        }

        system("pause");
    }
*/

/*Functions
    void welcome(){ //no return, no parameters
        cout << "Welcome!" << endl;
    }

    void printNumber(int numToPrint){ //no return, with parameter
        cout << numToPrint << endl;
    }

    int add(int a, int b){ //with return, with parameter
        int result;
        result = a + b;

        return result;
    }

    int main(){
        welcome();
        
        printNumber(5);
        
        int sum;
        sum = add(4, 8); //calls function add with the following parameters
        printNumber(sum); //calls function printNumber and pass the sum parameter

        system("pause");
    }
*/

/*Functions (Continuing)
    //to organizer functions, you can only declare on top of the code
    //and create actual definition at the end. This is called Prototype Function.

    //only declares
    void prototypeFunction();
    char getYesNo();
    void printAnswer(char answerToPrint);
    void askQuestion();
    
    int main(){
        askQuestion(); //Refactored function

        system("pause");
    }

    //has to have the same name
    void prototypeFunction(){
        cout << "The definition comes here" << endl;
    }

    char getYesNo(){
        cout << "Type: y (yes) or n (no)" << endl;
        char response;
        cin >> response;

        return response;
    }

    void printAnswer(char answerToPrint){
        cout << "You typed: " << answerToPrint << endl;
    }

    //Refactoring: abstract all funcions from main to another function
    void askQuestion(){
        //calls function
        prototypeFunction();
        //created a variable to store the return result of the function
        char answer = getYesNo();
        printAnswer(answer);
    }
*/

/*Increment Operators
    //sum:  subtract:  multiply:  divide:
    // +=      -=         *=        /=
    //subtract 1:   adds 1:
    //    --          ++
    //stores then increments:  increments then store:
    //       = i++;                    = ++i;

    int main(){
        int i = 3;
        float j = 2.f;
        
        int k = j / i;

        cout << k << endl;

        system ("pause");
    }
*/

/*While Loop
    int main(){
        int myInt = 0;
        int count = 0;

        while (count <= 10){
            cout << myInt << endl;
            myInt++;
            count++;
        }
        
        system("pause");
    }
*/

/*Do While Loop
int main(){
    double numberPi = 3.14159;
    double numberE = 2.718281828;
    
    int count = 0;

    bool condition = true;
    
    do{
        cout << "The number pi is: " << numberPi << endl;
        cout << "The numver e is: " << numberE << endl;
        cout << "Count: " << count << endl;
        cout << "pi + e * count = " << numberPi + numberE * count << endl;
        
        count++;
        if(count <=10){
            condition = true;
        }else{
            condition = false;
        }
    } while (condition);
    

    system("pause");
}
*/

/*For Loop
    int main(){
        for (int i = 0; i <= 10; i++)
        {
            cout << i << endl;
        }

        system("pause");
    }
*/

/*References
    //Cria uma refenrencia a uma variavel para que possa ser
    //modificada por uma funcao fora do escopo dela, ou seja
    //modificar a propria variavel passada pelo argumento de 
    //uma funcao sem criar uma variavel local e retornar ela
    //pois a referencia aponta para o mesmo locar de memoria
    //que esta o valor da variavel, modificando ela mesma.

    void ChangeStr(string& str);

    int main(){
        string myStr = "Helo";
        ChangeStr(myStr);

        cout << myStr << endl;

        system("pause");
    }

    void ChangeStr(string& str){
        str += " ,te amo!";
    }
*/

/*Function Overloading
    //Functions with same names, but with different paramters
    //so they do different things based on what data type you
    //feed them. The compiler will know what function you are
    //trying to call based on that.

    void Print(string str);
    void Print(int i);
    void Print(string str1, string str2);
    void Print(int i, string str);

    //But you cant overload a function distinguished by return
    //type alone, ex: string Print(string str); thats a no no.

    int main(){
        int myInt = 129;
        string myStr1 = "Magikarp";
        string myStr2 = "Gyarados";

        //Demonstrating many ways to call it
        Print("Helo, te amo");
        Print(129);
        Print(myInt);
        Print(myStr1, "Helo");
        Print(myInt, myStr1);

        system("pause");
    }

    void Print(string str){
        cout << str << endl;
    }

    void Print(int i){
        cout << i << endl;
    }

    void Print(string str1, string str2){
        cout << "String 1: " << str1 << endl;
        cout << "String 2: " << str2 << endl;
    }

    void Print(int i, string str){
        cout << "Integer value: " << i << endl;
        cout << "String valeu: " << str << endl;
    }
*/

/*And / Or
    //And: both need to be true
    //Or: just one need to be true
    
    int main(){
        int i = 1;
        int j = 2;
        int k = 3;

        if(i <= k || i == j){
            cout << "This will be printed" << endl;
        }

        if(i <= k && i == j){
            cout << "This will not be printed" << endl;
        }

        if((i <= k && i < j) || j == k){
            cout << "This will be printed" << endl;
        }

        system("pause");
    }
*/

/*Array 
    int main(){
        int myIntArray[10];

        for (int i = 0; i < 10; i++)
        {
            myIntArray[i] = i;
        }
        
        cout << "The first element of myIntArray is: " << myIntArray[0] << endl;
        cout << "The fifth element of myIntArray is: " << myIntArray[5] << endl;

        int myArray[] = {1, 23, 5, 4, 9};

        for (int i = 0; i < 5; i++)
        {
            cout << "myArray[" << i << "] = " << myArray[i] << endl;
        }

        system("pause");
    }
*/

/*Enums
    enum playerStatus{
        pS_crouched, pS_standing, pS_walking, pS_running
    };

    enum movementStatus{
        mS_crouched, mS_running
    };

    int main(){
        playerStatus p_status;
        movementStatus m_status;

        p_status = pS_crouched;
        if (p_status == pS_crouched){
            cout << "The player is crouching!" << endl;
        }

        p_status = pS_running;
        if (p_status == pS_crouched){
            cout << "The player is running!" << endl;
        }

        p_status = playerStatus::pS_running;

        m_status = movementStatus::mS_running;

        system("pause");
    }
*/

/*Switch Statement
    enum playerStatus{
        pS_running, pS_walking, pS_crouching
    };

    const float runSpeed = 800.f;
    const float walkSpeed = 400.f;
    const float crouchSpeed = 250.f;

    void UpdateMovmentSpeed(playerStatus status, float& speed);

    void SwitchOnInt(int i);

    int main(){
        float movementSpeed;
        playerStatus p_status = playerStatus::pS_walking;

        UpdateMovmentSpeed(p_status, movementSpeed);
        cout << "MovementSpeed = " << movementSpeed << endl;

        //int value = 99;
        //SwitchOnInt(value);
        
        system("pause");
    }

    void UpdateMovmentSpeed(playerStatus status, float& speed){
        switch (status)
        {
        case pS_running:
            speed = runSpeed;
            break;
        case pS_crouching:
            speed = crouchSpeed;
            break;
        default:
            speed = walkSpeed;
            break;
        }
    }

    void SwitchOnInt(int i){
        switch (i)
        {
        case 0:
            cout << "Your number is zero." << endl;
            break;
        case 1:
            cout << "Your number is one." << endl;
            break;
        case 2:
            cout << "Your number is two." << endl;
            break;
        default:
            cout << "Your number is not registred" << endl;
            break;
        }
    }
*/

/*Struct
    struct LocationVector{
        float x, y, z;
    };

    struct Player{
        int level;
        float health, stamina, damage;

        LocationVector location = {0.f, 0.f, 0.f};
        
        int GetLevel(){
            if (level > 3){
                cout << "Prestige levels! Your current level is: ";
            }
            return level;
        }

        float TakeDamage(float dmg){
            health -= dmg;
            return dmg;
        }

        void DisplayLocation(){
            cout << "Player coordinates: x = " << location.x << " y = " << location.y << " z = " << location.z << endl;
        }
    };

    int main(){
        Player p1 = {4, 100.f, 30.f, 80.f};
        
        cout << "Player 1 level: " << p1.GetLevel() << endl;
        cout << "Player 1 takes " << p1.TakeDamage(30.f) << " damage. Current health: " << p1.health << endl;
        p1.DisplayLocation();

        Player p2 = {2, 60.f, 10.f, 40.f, {35.5f, 67.45f, 1.003f}};

        cout << "Player 2 level: " << p2.GetLevel() << endl;
        cout << "Player 2 takes " << p2.TakeDamage(50.f) << " damage. Current health: " << p2.health << endl;
        p2.DisplayLocation();

        system("pause");
    }
*/

/*Pointers
    int main(){
        int a = 1;
        int* a_pointer = &a;

        cout << *a_pointer << endl;

        int b = 2;
        a_pointer = &b;

        cout << *a_pointer << endl;


        int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        int* numbers_pointer = numbers;

        cout << *numbers_pointer << endl;
        numbers_pointer ++;
        cout << *numbers_pointer << endl;
        numbers_pointer += 4;
        cout << *numbers_pointer << endl;

        system("pause");
    }

    struct PlayerLocation{
        string Name;
        int x, y, z;
    };
    

    int main(){
        PlayerLocation p1 = {"Helo", 8, 9, 21};
        PlayerLocation* p1_pointer = &p1;

        cout << (*p1_pointer).Name << endl; // Mesma coisa do de baixo, mas o de baixo le-se melhor

        cout << p1_pointer->Name << endl; // Nao precisa derreferenciar (*___) pq a setinha (->) ja faz isso, e da acesso ao conteudo

        system("pause");
    }
*/

/*Objects and Classes
    
    
    class Dog{
    public:
        string Name;
        int age;
        float health;

        void bark(){
            cout << "Woof!" << endl;
        }
    };
    
    int main(){
        Dog Luna;
        Dog Lessie;

        system("pause");
    }
*/

/*Constructors
    class Dog{
    public:
        Dog();

        string Name;
        int age;
        float health;

        void Bark();
    };
    
    int main(){
        Dog dog;
        cout << dog.Name << ", " << dog.age << ", " << dog.health << endl;

        system("pause");
    }

    Dog::Dog(){
        Name = "default name";
        age = 1;
        health = 100.f;

        Bark();
    }

    void Dog::Bark(){
        cout << "Woof!" << endl;
    }


    struct Cat
    {
        Cat();

        string Name;
        void Meow(int health);
    };

    Cat::Cat(){
        cout << "You found a cat!" << endl;
        Name = "Miau";
        Meow(2);
    }

    void Cat::Meow(int health){
        cout << "My name is: " << Name << endl;
        switch (health)
        {
        case 0:
            cout << "I'm dying" << endl;
            break;
        case 1:
            cout << "I'm not healthy" << endl;
            break;
        case 2:
            cout << "I'm healthy" << endl;
            break;
        default:
            cout << "I don't know how i'm feeling" << endl;
            break;
        }
    }
    

    int main(){
        Cat cat1;

        cat1.Meow(1);

        system("pause");
    }
*/

