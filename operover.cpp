#include <iostream>
using namespace std;

class character{
public:
    character() : level(0){};
    void set_level(int x){
        level = x;
    }
    int get_level(){
        return level;
    }
    character operator + (character &operand);
protected:
    int level;
};

character character::operator+(character &operand){
    character result_character;
    result_character.set_level(level + operand.get_level());
    return result_character;
}

int main(){
    character character_obj1,character_obj2,character_obj3;

    character_obj1.set_level(10);
    character_obj2.set_level(5);

    character_obj3 = character_obj1 + character_obj2;

    cout << "character 1: level = " << character_obj1.get_level()<<endl;
    cout << "character 2: level = " << character_obj2.get_level()<<endl;
    cout << "character 3: level = " << character_obj3.get_level()<<endl;
}
