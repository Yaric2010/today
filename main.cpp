#include "TXLib.h"
#include "play.cpp"
#include <iostream>
#include <fstream>
#include <string>

int X_mouse = 0;
int Y_mouse = 0;
int p = 0;
std::string a = "";
HDC  menu = txLoadImage ("menu.bmp");
HDC  login = txLoadImage ("login.bmp");
HDC  ball = txLoadImage ("ball.bmp");
HDC  reg = txLoadImage ("register.bmp");

std::string line;






struct stik_ios
{
    int x;
    int y;
    HDC right;


};

void boll()
{
    txBitBlt (txDC(), 0, 0, 800, 600, ball);

    while(true)
    {
        txBitBlt (txDC(), 0, 0, 800, 600, ball);
            std::string prog1;
            std::ifstream in1("morning.txt"); // �������� ���� ��� ������
            while (getline(in1, prog1))
            {
                txSetColor(TX_BLACK);
                 txSelectFont ("Arial", 14, 0, FW_BOLD);

                txTextOut(4,31, prog1.c_str());
            }



        std::string prog2;
        std::ifstream in2("morning2.txt"); // �������� ���� ��� ������


            while (getline(in2, prog2))
            {
                txSetColor(TX_BLACK);
                 txSelectFont ("Arial", 14, 0, FW_BOLD);

                txTextOut(4,45, prog2.c_str());

            }

            std::string prog3;
    std::ifstream in3("morning3.txt"); // �������� ���� ��� ������

    if (in3.is_open())
    {
        while (getline(in3, prog3))
        {
            txSetColor(TX_BLACK);
             txSelectFont ("Arial", 14, 0, FW_BOLD);

            txTextOut(4,59, prog3.c_str());

        }
    }

        txSleep(20);
       //txTextOut (100, 100, prog1);

    }


}


void boll2()
{
    txBitBlt (txDC(), 0, 0, 800, 600, ball);
    std::string prog1;
    std::ifstream in1("morning.txt"); // �������� ���� ��� ������

    if (in1.is_open())
    {
        while (getline(in1, prog1))
        {
            txSetColor(TX_BLACK);
             txSelectFont ("Arial", 14, 0, FW_BOLD);

            txTextOut(4,31, prog1.c_str());

        }
    }


    std::string prog2;
    std::ifstream in2("morning2.txt"); // �������� ���� ��� ������

    if (in2.is_open())
    {
        while (getline(in2, prog2))
        {
            txSetColor(TX_BLACK);
             txSelectFont ("Arial", 14, 0, FW_BOLD);

            txTextOut(4,45, prog2.c_str());

        }
    }

    std::string prog3;
    std::ifstream in3("morning3.txt"); // �������� ���� ��� ������

    if (in3.is_open())
    {
        while (getline(in3, prog3))
        {
            txSetColor(TX_BLACK);
             txSelectFont ("Arial", 14, 0, FW_BOLD);

            txTextOut(4,59, prog3.c_str());

        }
    }

   //txTextOut (100, 100, prog1);




}


int main()
{
    setlocale(LC_ALL, "Russian");
    stik_ios stikmen_ios = {0, 0, txLoadImage("stik1.bmp")};
    txCreateWindow(800, 600);



    std::ofstream out;          // ����� ��� ������


    std::ofstream morning1;
    std::ofstream morning2;         // ����� ��� ������


    txDisableAutoPause();

    while(!GetAsyncKeyState(VK_ESCAPE))
    {

        X_mouse = txMouseX();
        Y_mouse = txMouseY();

        txBitBlt (txDC(), 0, 0, 800, 600, menu);

        if(X_mouse > 286 and X_mouse < 512 and Y_mouse > 405 and Y_mouse < 462 and txMouseButtons() == 1)
        {
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

            std::ofstream out;          // ����� ��� ������
            out.open("parol.txt"); // �������� ���� ��� ������
            if (out.is_open())
            {
                out << a << std::endl;
            }

            boll2();
            txSleep(200);
            txBitBlt (txDC(), 0, 0, 800, 600, ball);
            a = "";
            while(!GetAsyncKeyState(VK_RETURN))
            {
                txSleep(200);
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
                if(GetAsyncKeyState('U'))
                {
                    a = a += 'U';
                }
                if(GetAsyncKeyState('I'))
                {
                    a = a += 'I';
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

            }
            std::ofstream out1;          // ����� ��� ������
            out1.open("morning.txt"); // �������� ���� ��� ������
            if (out1.is_open())
            {
                out1 << a << std::endl;
            }
            std::ofstream out2;          // ����� ��� ������
            out2.open("morning2.txt"); // �������� ���� ��� ������
            if (out2.is_open())
            {
                out2 << " " << std::endl;
            }
            out2.close();


            std::ofstream out3;          // ����� ��� ������
            out3.open("morning3.txt"); // �������� ���� ��� ������
            if (out3.is_open())
            {
                out3 << " " << std::endl;
            }
            out3.close();
            txSleep(200);
boll2();
            a = "";
            while(!GetAsyncKeyState(VK_RETURN))
            {
                txSleep(200);
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
                if(GetAsyncKeyState('U'))
                {
                    a = a += 'U';
                }
                if(GetAsyncKeyState('I'))
                {
                    a = a += 'I';
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
                }std::ofstream out3;          // ����� ��� ������
            out2.open("morning3.txt"); // �������� ���� ��� ������
            if (out3.is_open())
            {
                out2 << " " << std::endl;
            }
            out2.close();
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


                }
                  //asd
                out2.open("morning2.txt"); // �������� ���� ��� ������
                if (out2.is_open())
                {
                    out2 << a << std::endl;
                }


                boll2();
              Sleep(200);


            boll2();
            txSleep(200);

            a = "";
            while(!GetAsyncKeyState(VK_RETURN))
            {
                txSleep(200);
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
                if(GetAsyncKeyState('U'))
                {
                    a = a += 'U';
                }
                if(GetAsyncKeyState('I'))
                {
                    a = a += 'I';
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


                }
                  //asd
                out3.open("morning3.txt"); // �������� ���� ��� ������
                if (out3.is_open())
                {
                    out3 << a << std::endl;
                }
                txSleep(1000);
          /*  std::ofstream out("morning.txt", std::ios::app);
            if (out.is_open())
            {
                out << "Welcome to CPP" << std::endl;
            }
            out.close();
           */
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

                std::ifstream in("parol.txt"); // �������� ���� ��� ������
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
            play();
        }
}

    txDeleteDC (menu);
    txDeleteDC (login);
    txDeleteDC (ball);





    txTextCursor (false);
    return 0;
}

