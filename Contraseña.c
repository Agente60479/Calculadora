#include <iostream>

using namespace std;

int main(){
   char valores;
   int contSimbolos = 0;
   int contLetras = 0;
   int contNumeros = 0;
   while(cin >> valores){
      if(valores >= 'a' && valores <= 'z'){
         contLetras++;
      }
      else if(valores >= '0' && valores <= '9'){
         contNumeros++;
      }
      else{
         contSimbolos++;
      }
   }
   
   if(contLetras + contSimbolos + contNumeros >= 8){
       cout << "Contraseña débil" << endl;
   }
   else if(...){
       cout << "Contraseña fuerte" << endl;
   }
   else if(...){
       cout << "Contraseña muy fuerte" << endl;
   }
   else{
       cout << "Contraseña no válida" << endl;
   }

   return 0;
}