using System;


namespace Lab_1
{
    public class Cell<T>
    {
        public T Data { get; set; }
        public Cell<T> Previous { get; set; }

        public Cell(T data)
        {
            Data = data;
        }
        //public int x { get; set; }
        //public int y { get; set; }
        public override string ToString()
        {
            return $"{Data}";
        }

    }
}
