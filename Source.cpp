// Ctrl + Alt + N = run

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
    // to organizer functions, you can only declare on top of the code
    // and create actual definition at the end. This is called Prototype Function.

    // only declares
    void prototypeFunction();
    char getYesNo();
    void printAnswer(char answerToPrint);
    void askQuestion();

    int main(){
        askQuestion(); //Refactored function

        system("pause");
    }

    // has to have the same name
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

    // Refactoring: abstract all funcions from main to another function
    void askQuestion(){
        // calls function
        prototypeFunction();
        // created a variable to store the return result of the function
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
    // A way to group several related variables
    // Each variable in the struct is know as a member of the struct

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
    // A constructor is a special method that is automatically called
    // when a object of a class is created

    // class Dog{ // Classe
    // public:
    //     Dog(); // Constructor

    //     string Name;
    //     int age;
    //     float health;

    //     void Bark(); // Normal function inside Class Dog
    // };

    // int main(){
    //     Dog dog; // Object of Class Dog (this will call the constructor)
    //     cout << dog.Name << ", " << dog.age << ", " << dog.health << endl;

    //     system("pause");
    // }

    // Dog::Dog(){ // Constructor definition
    //     Name = "default name";
    //     age = 1;
    //     health = 100.f;

    //     Bark();
    // }

    // void Dog::Bark(){ // Function definition; need the full classified name (::) because it is inside Class Dog
    //     cout << "Woof!" << endl;
    // }



    struct Cat // Collection of variables related to Cat
    {
        Cat(); // Constructor

        string Name;
        void Meow(int health); // Funcion inside struct Cat
    };

    Cat::Cat(){ // Constructor definition
        cout << "You found a cat!" << endl;
        Name = "Miau";
        Meow(2);
    }

    void Cat::Meow(int health){ // Function definition
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

/*Inheritance
class Pokemon{
public:
    string name, gender;
    int health;

    Pokemon(); // Constructor    

    Pokemon(string nome, string sexo, int vida); // Constructor Overload
    
    void Report();
};

class WaterType : public Pokemon{ // WaterType is a derived/chield Class of Pokemon, it inherits everything from the parent Class
public:
    WaterType(); // Constructor

    WaterType(string nome, string sexo, int vida); // Constructor Overload

    void Speak();
};

class Squirtle : public WaterType{
public:

};

int main(){
    // Pokemon p1; // Calls the Constructor
    // p1.Report();
    // Pokemon p2("Squirtle", "Male", 85); // Calls the Constructor Overload

    // WaterType w1("Squirtle", "Male", 85);
    // w1.Speak();

    Squirtle squirtle;
    squirtle.Speak();
    squirtle.Report();
    
    system("pause");
}

// Constructor definition
Pokemon::Pokemon(){
    cout << "A wild pokemon appears!" << endl;

    // Some default values:
    name = "Pidgey";
    gender = "Undefined gender";
    health = 40;
}

// Constructor Overload definition
Pokemon::Pokemon(string nome, string sexo, int vida) : name(nome), gender(sexo), health(vida){
    Report();
}

// Constructor Definition
WaterType::WaterType(){
    cout << "It's a water type Pokemon!" << endl;
}

// Constructor Overload Definition
WaterType::WaterType(string nome, string sexo, int vida) : Pokemon(nome, sexo, vida){
    
}

void Pokemon::Report(){
    cout << "A " << gender << " " << name << " Appeared | " << health << " Hp." << endl;
}

void WaterType::Speak(){
    cout << "Squirtle, Squirtle!" << endl;
}*/

/*Access Modifiers
    class Creature{
    public:
        Creature();

        void SetName(string nome);
        
        string GetName();
        float GetHealth();

        void TakeDamage(float damage);

    private:
        string name;
        float health;

    protected:
        string loot;

    };

    class Dwarf : public Creature{
    public:
        Dwarf();

        string GetLoot();

    };
    
    int main(){
        // Creature c1;
        // c1.SetName("Spider");
        // cout << "It's a " << c1.GetName() << ". It has " << c1.GetHealth() << " hp" << endl;
        // cout << "You attack the " << c1.GetName() << " and caused 30 damage." << endl;
        // c1.TakeDamage(30.f);

        Dwarf d1;
        cout << "It's the Dwarf " << d1.GetName() << "! He has an " << d1.GetLoot() << " to sell." << endl;

        system("pause");
    }

    Creature::Creature(){
        health = 100.f; // Default value
        cout << "A creature has spawned!" << endl;
    }

    Dwarf::Dwarf(){
        SetName("Goodbarrel");
        loot = "Hand Axe";
    }

    void Creature::SetName(string nome){
        name = nome;
    }

    string Creature::GetName(){
        return name;
    }

    float Creature::GetHealth(){
        return health;
    }

    void Creature::TakeDamage(float damage){
        float currentHealth;
        currentHealth = health - damage;

        if (currentHealth <= 0.f){
            cout << "The " << GetName() << " has died!" << endl;
        } else {
            health -= damage;
            cout << "The " << GetName() << " now has " << GetHealth() << " hp left." << endl;
        }
    }

    string Dwarf::GetLoot(){
        return loot;
    }
*/

/*Stack and Heap
    struct Spam{
        Spam();

        void ShowId();
        
        int id;
        string message;
    };
    
    int main(){
        for (int i = 0; i < 100000; i++)
        {
            Spam* spmPtr = new Spam(); // Create object dynamically at memory (heap)
            
            spmPtr->ShowId();
            cout << spmPtr->message << endl;

            delete spmPtr; // Clear memory to use again
        }

        system("pause");
    }

    Spam::Spam(){
        message = "Default message!";
        id = 809;
    }

    void Spam::ShowId(){
        cout << "Id: " << id << " ";
    }
*/

/*Destructors
    class Weapon{
    public:
        Weapon();
        ~Weapon();

        string* weaponName;
        float* weaponDamage;
    };

    int main(){
        Weapon* wPtr = new Weapon();
        delete wPtr;

        system("pause");
    }

    Weapon::Weapon(){
        cout << "A new weapon was forged!" << endl;

        weaponName = new string("Hand Axe");
        weaponDamage = new float(10.f);
    }

    Weapon::~Weapon(){
        cout << "A weapon was destroyed!" << endl;

        delete weaponName, weaponDamage;
    }
*/

/*Static
    //1. Static Variables Inside of a Function
        void AddToCount(){
            static int count = 0; // Cannot reinicialize a static variable
            count ++; // Thats why calling several times this funcions works

            cout << count << endl;
        }

        int main(){
            for (int i = 0; i < 10; i++){
                AddToCount();
            }

            system("pause");
        }

    //2. Static Object of a Class
        class Item{
        public:
            Item(){
                cout << "An item has been created!" << endl;
            }
            ~Item(){
                cout << "An item has been destroyed" << endl;
            }
        };

        int main(){
            Item item1; // Does not call the Destructor
            
            // Limit the scope
            {
                Item item2; // Does call the Destructor
                // Destructor is called here, at the end of this scope
            }

            // Limit the scope, but static object lives past it
            {
                static Item item3 // Does not call the Destructor
            }
            
            system("pause");
            // Destructor would be called here, when the main scope ends
        }

    //3. Static Variables Inside of a Class
        class Critter{
        public:
            static int CritterCount; // Static variables cannot be initialized inside of a class
            
            Critter(){
                cout << "A critter is born!" << endl;
                CritterCount ++;
            }
        };

        int Critter::CritterCount = 0;
        
        int main(){
            Critter::CritterCount = 13; // Since its a static variable, it doesnt even need a instance to access this variable
            // But it can have one
            Critter c1;
            cout << Critter::CritterCount << endl;
            Critter c2;
            cout << Critter::CritterCount << endl;

            system("pause");
        }

    //4. Static Funcion inside of a Class
        class Critter{
        public:
            static int CritterCount;
            Critter(){
                cout << "A critter is born!" << endl;
                CritterCount++;
            }

            static void AnnouceCount(){
                cout << CritterCount << endl;
            }
        };

        int Critter::CritterCount = 0;

        int main(){
            // Because the AnnouceCount is static, it doesnt need to create a Crit in order to access that funcion.
            // Critter c1; 
            Critter::AnnouceCount();
            // Critter c2;
            Critter::AnnouceCount();
            // It prints 0 because Critter() was never accessed since no crit was created
            
            Critter* c3 = new Critter; // Dynamically creating a new crit
            Critter::AnnouceCount();
            delete c3;

            system("pause");
        }
*/

/*Virtual Function (Overrriding)
    class Object{
    public:
        virtual void BeginPlay();
    };

    class Actor : public Object{
    public:
        virtual void BeginPlay() override;
    };

    class Pawn : public Actor{
    public:
        virtual void BeginPlay() override;
    };

    int main(){
        // Object* obj = new Object;
        // obj->BeginPlay();

        Actor* act = new Actor;
        act->BeginPlay();

        Pawn* pwn = new Pawn;
        pwn->BeginPlay();

        // delete obj;
        delete act;
        delete pwn;
        system("pause");
    }

    void Object::BeginPlay(){
        cout << "Object BeginPlay called!" << endl;
    }

    void Actor::BeginPlay(){
        cout << "Actor BeginPlay called!" << endl;
        Object::BeginPlay();
    }

    void Pawn::BeginPlay(){
        cout << "Pawn BeginPlay called!" << endl;
    }
*/

/*Polymorphism
    class Object{
    public:
        virtual void BeginPlay();
    };

    class Actor : public Object{
    public:
        virtual void BeginPlay() override;
    };

    class Pawn : public Actor{
    public:
        virtual void BeginPlay() override;
    };

    int main(){
        Object* ptr_to_object = new Object;
        Actor* ptr_to_actor = new Actor;
        Pawn* ptr_to_pawn = new Pawn;

        Object* ObjectArray[] = {ptr_to_object, ptr_to_actor, ptr_to_pawn};

        for(int i = 0; i < 3; i++){
            ObjectArray[i]->BeginPlay();
        }

        delete ptr_to_object;
        delete ptr_to_actor;
        delete ptr_to_pawn;
        system("pause");
    }

    void Object::BeginPlay(){
        cout << "Object BeginPlay called!" << endl;
    }

    void Actor::BeginPlay(){
        cout << "Actor BeginPlay called!" << endl;
    }

    void Pawn::BeginPlay(){
        cout << "Pawn BeginPlay called!" << endl;
    }
*/

/*Casting
    class Object{
    public:
        virtual void BeginPlay();
        void ObjectFunction(){
            cout << "ObjectFunction called!" << endl;
        }
    };

    class Actor : public Object{
    public:
        virtual void BeginPlay() override;
        void ActorFunction(){
            cout << "ActorFunction called!" << endl;
        }
    };

    class Pawn : public Actor{
    public:
        virtual void BeginPlay() override;
        void PawnFunction(){
            cout << "PawnFunction called!" << endl;
        }
    };

    int main(){
        Object* ptr_to_object = new Object;
        Actor* ptr_to_actor = new Actor;
        Pawn* ptr_to_pawn = new Pawn;

        Object* ObjectArray[] = {ptr_to_object, ptr_to_actor, ptr_to_pawn};
        
        for(int i = 0; i < 3; i++){
            //ObjectArray[i]->BeginPlay();
            
            Object* obj = ObjectArray[i];
            
            Actor* act = dynamic_cast<Actor*>(obj);
            if (act){
                act->ActorFunction();
            }

            Pawn* pwn = dynamic_cast<Pawn*>(obj);
            if (pwn){
                pwn->PawnFunction();
            }

            // There is also a static_cast
        }

        delete ptr_to_object;
        delete ptr_to_actor;
        delete ptr_to_pawn;
        system("pause");
    }

    void Object::BeginPlay(){
        cout << "Object BeginPlay called!" << endl;
    }

    void Actor::BeginPlay(){
        cout << "Actor BeginPlay called!" << endl;
    }

    void Pawn::BeginPlay(){
        cout << "Pawn BeginPlay called!" << endl;
    }
*/
