class Solution {
private:
char getSymbol(int num)
{
    switch (num)
    {
        case 1:
            return 'I';
        case 5:
            return 'V';
        case 10:
            return 'X';
        case 50:
            return 'L';
        case 100:
            return 'C';
        case 500:
            return 'D';
        case 1000:
            return 'M';
    }
    return '\0';
}    
public:
    string intToRoman(int num) {
    string toRet = "";
    int place = 0;
    while(num > 0)
    {
        if (num >= 400)
        {
            place = 100;
        }
        else if(num >= 40)
        {
            place = 10;
        }
        else{ 
             place = 1;
        }
        if(num <= 3*place)
        {
             toRet += getSymbol(place);
             num -= place;
        }
        else if(num >= 10*place)
        {
             toRet += getSymbol(10*place);
             num -= 10*place;
        }
        else if(num >= 9*place)
        {
             toRet += getSymbol(1*place);
             toRet += getSymbol(10*place);
             num -= 9*place;
        }

        else if(num>=5*place )
        {
             toRet += getSymbol(5*place);
             num -= 5*place;
        }
        else if(num>=4*place)
        {
             toRet += getSymbol(1*place);
             toRet += getSymbol(5*place);
             num -= 4*place;
         }
       }
       return toRet; 
    }
};