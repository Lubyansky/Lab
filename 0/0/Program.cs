using System;

namespace WriteReadApp
{
    class Program
    {
        static void Main(string[] args)
        {
			Console.Write("Введите своё имя: ");
            string name = Console.ReadLine();
            Console.Write("Введите свой возраст: ");
            string age = Console.ReadLine();
            Console.WriteLine($"Ваше имя: {name}\nВаш возраст: {age}");    
            Console.ReadKey();
        }
    }
}