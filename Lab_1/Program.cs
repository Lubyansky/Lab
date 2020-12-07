using System;


namespace Lab_1
{
    class Program
    {
        static void Main(string[] args)
        {
            //массив лабиринта
            int[,] myArray = new int[,]
            {
                   {1, 0, 1, 1, 1, 1, 1},
                   {1, 0, 0, 0, 0, 0, 1},
                   {1, 1, 0, 1, 1, 0, 1},
                   {1, 0, 0, 0, 0, 0, 1},
                   {1, 0, 1, 0, 0, 1, 1},
                   {1, 1, 1, 1, 0, 1, 1}
            };

            //размерность массива
            int height = myArray.GetLength(0); //высота
            int width = myArray.GetLength(1); // ширина
            //стартовые координаты
            int x = 1;
            int y = 0;

            //создание объекта класса стек
            var myStack = new myStack<int>();
            //помещаем стартовую ячейку в стек
            myStack.Push(myArray[x, y]);
            while (x < width | y < height)
            {
                Console.WriteLine($"x = {x}");
                Console.WriteLine($"y = {y}");
                Console.WriteLine();
                if (myArray[x + 1, y] == 0 & x < width) 
                {
                    myStack.Push(myArray[x + 1, y]);
                    x += 1;
                }
                else if (myArray[x - 1, y] == 0 & x >= 0)
                {
                    myStack.Push(myArray[x - 1, y]);
                    x -= 1;
                }
                else if (myArray[x, y + 1] == 0 & y < height)
                {
                    myStack.Push(myArray[x, y + 1]);
                    y += 1;
                }
                else if (myArray[x, y - 1] == 0 & y >= 0)
                {
                    myStack.Push(myArray[x, y - 1]);
                    y -= 1;
                }
                else 
                {
                    myArray[x, y] = 2; 
                    myStack.Pop();
                }
            }

            for (int i = myStack.Count; 0 < i; i--)
            {
                Console.WriteLine(myStack.Pop());
            }

            /*
            for (int y = 0; y < height; y++)
            {
                for (int x = 0; x < width; x++)
                {
                    Console.Write(myArray[y, x] + "\t");
                }
                Console.WriteLine();
            }
            */
        }
    }
}
