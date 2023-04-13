#include "TXLib.h"
#include "play.cpp"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int x = 361;
int X_mouse = 0;
int Y_mouse = 0;
int p = 0;
std::string a = "";
HDC  menu = txLoadImage ("menu.bmp");
HDC  login = txLoadImage ("login.bmp");
HDC  ball = txLoadImage ("ball.bmp");
HDC  reg = txLoadImage ("register.bmp");
HDC  menu_n = txLoadImage ("menu_n.bmp");
std::string line;
string popusk;
int qwe2;
std::ifstream in("pupik.txt"); // окрываем файл для чтения

using namespace std;



struct stik_ios
{
    int x;
    int y;
    HDC right;


};





void boll()
{
    int i = 0;
    string q;
    int o = 0;
    int res;
    txBitBlt (txDC(), 0, 0, 800, 603, ball);

    string str;

    ifstream file("dela.txt");
    txSetColor(TX_BLACK);
    while(file.good())
    {

        getline(file, str);
        txTextOut(4,29 + i, str.c_str());
        if(i == 140 or i == 56 or i == 210 or i == 322 or i == 451 or i == 563)
        {
            i +=28;
        }
        else
        {
            i +=14;
        }
    }
i = 0;
    for(int x = 0; x < 33; x++)
    {


        q = "";
        txSetColor(TX_BLACK);

        while(q == "")
        {

            if(GetAsyncKeyState('0'))
            {
                q = q + '0';
            }
            if(GetAsyncKeyState('1'))
            {
                q = q + '1';
            }
            if(GetAsyncKeyState('2'))
            {
                q = q + '2';
            }
            if(GetAsyncKeyState('3'))
            {
                q = q + '3';
            }
            if(GetAsyncKeyState('4'))
            {
                q = q + '4';
            }
            if(GetAsyncKeyState('5'))
            {
                q = q + '5';
            }
            if(GetAsyncKeyState('6'))
            {
                q = q + '6';
            }
            if(GetAsyncKeyState('7'))
            {
                q = q + '7';
            }
            if(GetAsyncKeyState('8'))
            {
                q = q + '8';
            }
            if(GetAsyncKeyState('9'))
            {
                q = q + '9';
            }


            txSetColor(TX_BLACK);
            txTextOut(378,29 + i, q.c_str());
            txSleep(100);
        }

        if(i == 140 or i == 56 or i == 210 or i == 308 or i == 406)
        {
            i +=28;
        }
        else
        {
            i +=14;
        }



        std::ofstream out2("ball.txt", std::ios::app);
        if (out2.is_open())
        {
            out2 << q << std::endl;
        }
        out2.close();
        istringstream(q) >> res;
        o = o + res;
        //spri(664, 84, (const char*)(o));
    }
    cout << o << endl;
    char str1[100];
    sprintf(str1, "%d", o);
    txTextOut(664, 84, str1);
    std::ofstream out2("pupik.txt", std::ios::app);
        if (out2.is_open())
        {
            out2 << str1 << std::endl;
        }
        out2.close();

   //txTextOut (100, 100, prog1);
   txSleep(5000);



}


int main()
{
    setlocale(LC_ALL, "Russian");
     int i= 0;
    txCreateWindow(800, 600);
    string str;


             // поток для записи


    txDisableAutoPause();

    while(!GetAsyncKeyState(VK_ESCAPE))
    {

        X_mouse = txMouseX();
        Y_mouse = txMouseY();
        if (in.is_open())
        {
            while(in.good())
            {
                getline(in, popusk);
                istringstream(popusk) >> qwe2;
            }
        }
        in.close();


        if(qwe2 > 0)
        {
            txBitBlt (txDC(), 0, 0, 800, 600, menu);
        }
        else
        {
            txBitBlt (txDC(), 0, 0, 800, 600, menu_n);
        }
        if(X_mouse > 286 and X_mouse < 512 and Y_mouse > 405 and Y_mouse < 462 and txMouseButtons() == 1)
        {
                std::ofstream out;          // поток для записи
                out.open("dela.txt"); // окрываем файл для записи
                if (out.is_open())
                {
                    out << "";
                }
                a = "";
                while(!GetAsyncKeyState(VK_RETURN))
                {
                    txSleep(200);
                    txBitBlt (txDC(), 0, 0, 800, 600, reg);
                    //txTextOut(0, 0, std::string a);
                    txSetColor(TX_BLACK);
                    txTextOut(226,407, a.c_str());

                    if(GetAsyncKeyState('A'))
                    {
                        a = a += 'A';
                    }
                    else if(GetAsyncKeyState('Q'))
                    {
                        a = a += 'Q';
                    }
                    else if(GetAsyncKeyState('W'))
                    {
                        a = a += 'W';
                    }
                    else if(GetAsyncKeyState('S'))
                    {
                        a = a += 'S';
                    }
                    else if(GetAsyncKeyState('E'))
                    {
                        a = a += 'E';
                    }
                    else if(GetAsyncKeyState('D'))
                    {
                        a = a += 'D';
                    }
                    else if(GetAsyncKeyState('R'))
                    {
                        a = a += 'R';
                    }
                    else if(GetAsyncKeyState('F'))
                    {
                        a = a += 'F';
                    }
                    else if(GetAsyncKeyState('T'))
                    {
                        a = a += 'T';
                    }
                    else if(GetAsyncKeyState('G'))
                    {
                        a = a += 'G';
                    }
                    else if(GetAsyncKeyState('Y'))
                    {
                        a = a += 'Y';
                    }
                    else if(GetAsyncKeyState('H'))
                    {
                        a = a += 'H';
                    }
                    else if(GetAsyncKeyState('U'))
                    {
                        a = a += 'U';
                    }
                    else if(GetAsyncKeyState('J'))
                    {
                        a = a += 'J';
                    }
                    else if(GetAsyncKeyState('I'))
                    {
                        a = a += 'I';
                    }
                    else if(GetAsyncKeyState('K'))
                    {
                        a = a += 'K';
                    }
                    else if(GetAsyncKeyState('O'))
                    {
                        a = a += 'O';
                    }
                }


                out.open("parol.txt"); // окрываем файл для записи
                if (out.is_open())
                {
                    out << a << std::endl;
                }

                i = 0;
                txBitBlt (txDC(), 0, 0, 800, 603, ball);

                for(int x = 0; x < 33; x++)
                {
                    a = "";
                    txSetColor(TX_BLACK);
                    txSleep(500);
                    while(!GetAsyncKeyState(VK_RETURN))
                    {

                        if(GetAsyncKeyState('A'))
                        {
                            a = a += 'A';
                        }

                        if(GetAsyncKeyState('Q'))
                        {
                            a = a += 'Q';
                        }
                        if(GetAsyncKeyState('W'))
                        {
                            a = a += 'W';
                        }
                        if(GetAsyncKeyState('E'))
                        {
                            a = a += 'E';
                        }
                        if(GetAsyncKeyState('R'))
                        {
                            a = a += 'R';
                        }
                        if(GetAsyncKeyState('T'))
                        {
                            a = a += 'T';
                        }
                        if(GetAsyncKeyState('Y'))
                        {
                            a = a += 'Y';
                        }
                        if(GetAsyncKeyState('O'))
                        {
                            a = a += 'O';
                        }
                        if(GetAsyncKeyState('P'))
                        {
                            a = a += 'P';
                        }
                        if(GetAsyncKeyState('S'))
                        {
                            a = a += 'S';
                        }
                        if(GetAsyncKeyState('D'))
                        {
                            a = a += 'D';
                        }
                        if(GetAsyncKeyState('F'))
                        {
                            a = a += 'F';
                        }
                        if(GetAsyncKeyState('G'))
                        {
                            a = a += 'G';
                        }
                        if(GetAsyncKeyState('H'))
                        {
                            a = a += 'H';
                        }
                        if(GetAsyncKeyState('J'))
                        {
                            a = a += 'J';
                        }
                        if(GetAsyncKeyState('K'))
                        {
                            a = a += 'K';
                        }
                        if(GetAsyncKeyState('L'))
                        {
                            a = a += 'L';
                        }
                        if(GetAsyncKeyState('Z'))
                        {
                            a = a +'Z';
                        }
                        if(GetAsyncKeyState('X'))
                        {
                            a = a + 'X';
                        }
                        if(GetAsyncKeyState('C'))
                        {
                            a = a + 'C';
                        }
                        if(GetAsyncKeyState('V'))
                        {
                            a = a + 'V';
                        }
                        if(GetAsyncKeyState('B'))
                        {
                            a = a + 'B';
                        }
                        if(GetAsyncKeyState('N'))
                        {
                            a = a + 'N';
                        }
                        if(GetAsyncKeyState('M'))
                        {
                            a = a + 'M';
                        }




                        txTextOut(4,29 + i, a.c_str());
                        txSleep(200);
                    }
                    if(i == 140 or i == 56 or i == 210 or i == 308 or i == 406)
                    {
                        i +=28;
                    }
                    else
                    {
                        i +=14;
                    }



                    std::ofstream out("dela.txt", std::ios::app);
                    if (out.is_open())
                    {
                        out << a << std::endl;
                    }
                    out.close();

                }








        }

        if(X_mouse > 100 and X_mouse < 325 and Y_mouse > 214 and Y_mouse < 269 and txMouseButtons() == 1)
        {

            a = "";
            p = 0;
            txBitBlt (txDC(), 0, 0, 800, 600, login);

            while(p==0)
            {



                if(GetAsyncKeyState('A'))
                {
                   a = a += 'A';
                }
                else if(GetAsyncKeyState('Q'))
                {
                    a = a += 'Q';
                }
                else if(GetAsyncKeyState('W'))
                {
                    a = a += 'W';
                }
                else if(GetAsyncKeyState('S'))
                {
                    a = a += 'S';
                }
                else if(GetAsyncKeyState('E'))
                {
                    a = a += 'E';
                }
                else if(GetAsyncKeyState('D'))
                {
                    a = a += 'D';
                }
                else if(GetAsyncKeyState('R'))
                {
                    a = a += 'R';
                }
                else if(GetAsyncKeyState('F'))
                {
                    a = a += 'F';
                }
                else if(GetAsyncKeyState('T'))
                {
                    a = a += 'T';
                }
                else if(GetAsyncKeyState('G'))
                {
                    a = a += 'G';
                }
                else if(GetAsyncKeyState('Y'))
                {
                    a = a += 'Y';
                }
                else if(GetAsyncKeyState('H'))
                {
                    a = a += 'H';
                }
                else if(GetAsyncKeyState('U'))
                {
                    a = a += 'U';
                }
                else if(GetAsyncKeyState('J'))
                {
                    a = a += 'J';
                }
                else if(GetAsyncKeyState('I'))
                {
                    a = a += 'I';
                }
                else if(GetAsyncKeyState('K'))
                {
                    a = a += 'K';
                }
                else if(GetAsyncKeyState('O'))
                {
                    a = a += 'O';
                }

                std::ifstream in("parol.txt"); // окрываем файл для чтения
                if (in.is_open())

                    while (getline(in, line))
                    {
                        if (line == a)
                        {
                            p=1;

                        }
                        cout << a << std::endl;
                    }

                in.close();
                txSleep(500);

             }

         boll();

         }

        if(X_mouse > 469 and X_mouse < 694 and Y_mouse > 209 and Y_mouse < 267 and txMouseButtons() == 1)
        {



            if (in.is_open())
            {
                while(in.good())
                {
                    getline(in, popusk);
                    istringstream(popusk) >> qwe2;
                }
            }
            in.close();

            cout << popusk << endl;
            if(qwe2 > 0)
            {                    S
                play();
            }
        }
}

    txDeleteDC (menu);
    txDeleteDC (login);
    txDeleteDC (ball);





    txTextCursor (false);
    return 0;
}

/*


if(GetAsyncKeyState('A'))
                {
                    a = a += 'A';
                }

                if(GetAsyncKeyState('Q'))
                {
                    a = a += 'Q';
                }
                if(GetAsyncKeyState('W'))
                {
                    a = a += 'W';
                }
                if(GetAsyncKeyState('E'))
                {
                    a = a += 'E';
                }
                if(GetAsyncKeyState('R'))
                {
                    a = a += 'R';
                }
                if(GetAsyncKeyState('T'))
                {
                    a = a += 'T';
                }
                if(GetAsyncKeyState('Y'))
                {
                    a = a += 'Y';
                }
                if(GetAsyncKeyState('O'))
                {
                    a = a += 'O';
                }
                if(GetAsyncKeyState('P'))
                {
                    a = a += 'P';
                }
                if(GetAsyncKeyState('S'))
                {
                    a = a += 'S';
                }
                if(GetAsyncKeyState('D'))
                {
                    a = a += 'D';
                }
                if(GetAsyncKeyState('F'))
                {
                    a = a += 'F';
                }
                if(GetAsyncKeyState('G'))
                {
                    a = a += 'G';
                }
                if(GetAsyncKeyState('H'))
                {
                    a = a += 'H';
                }
                if(GetAsyncKeyState('J'))
                {
                    a = a += 'J';
                }
                if(GetAsyncKeyState('K'))
                {
                    a = a += 'K';
                }
                if(GetAsyncKeyState('L'))
                {
                    a = a += 'L';
                }
                if(GetAsyncKeyState('Z'))
                {
                    a = a += 'Z';
                }
                if(GetAsyncKeyState('X'))
                {
                    a = a += 'X';
                }
                if(GetAsyncKeyState('C'))
                {
                    a = a += 'C';
                }
                if(GetAsyncKeyState('V'))
                {
                    a = a += 'V';
                }
                if(GetAsyncKeyState('B'))
                {
                    a = a += 'B';
                }
                if(GetAsyncKeyState('N'))
                {
                    a = a += 'N';
                }
                if(GetAsyncKeyState('M'))
                {
                    a = a += 'M';
                }

*/
