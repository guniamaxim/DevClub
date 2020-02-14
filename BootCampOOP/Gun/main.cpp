#include "Gun.h"

int main() {
    
   // Gun gun;
   Gun pistolMakarov("pistolMakarov", 6);
      
   
   // std::cout << gun << std::endl;
   std::cout << pistolMakarov << std::endl;

   pistolMakarov.reload();
   pistolMakarov.prepare();
   try {
      pistolMakarov.shoot();
   } catch (NotReady) {
      std::cout << pistolMakarov.getModel() << ":" << "Не готов!" << std::endl;
   } catch (OutOfRounds) {
      std::cout << pistolMakarov.getModel() << ":" << "Нет патронов!" << std::endl;
   }

   
   // std::cout << gun << std::endl;
   std::cout << pistolMakarov << std::endl;
   
    return 0;
}