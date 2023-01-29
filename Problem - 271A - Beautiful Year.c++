#include <iostream>

using namespace std;

int main() {
    
    int year;
    cin >> year;
    
    int thousands = year / 1000;//1
    
    int hundredths = year % 1000 / 100;//9
    
    int tenths = year % 100 / 10;//9
    
    int units = year % 10 + 1;//9
    //10234
    while(thousands == hundredths || thousands == tenths || thousands == units || hundredths == tenths || hundredths == units || tenths == units) {
        
        if(hundredths == 9 && tenths == 9 && units == 9) {
            units = 0;
            tenths = 0;
            hundredths = 0;
            if (thousands != 9){
                thousands++;
                continue;
            }
        }
        
        if (tenths == 9 && units == 9) {
            units = 0;
            tenths = 0;
            if (hundredths != 9){
                hundredths++;
                continue;
            }
        } 
        
        if (units == 9) {
            units = 0;
            if (tenths != 9){
                tenths++;
                continue;
            }
        }
        
        else {
            units++;
            continue;
        }
        
        if (thousands == 9){
            units = 4;
            tenths = 3;
            hundredths = 2;
            thousands = 0;
        }
    }
    cout << thousands << hundredths << tenths << units << endl;
 
    return 0;
}
