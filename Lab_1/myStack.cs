using System;
using System.Collections.Generic;
using System.Text;

namespace Lab_1
{
    public class myStack<T>
    {
        public Cell<T> Head { get; set; }
        public int Count { get; set; }
        //public int _Count { get { return Count; } }
        public myStack()
        {
            Head = null;
            Count = 0;
        }
        public myStack(T data)
        {
            Head = new Cell<T>(data);
            Count = 1;
        }
        public void Push(T data)
        {
            var item = new Cell<T>(data);
            item.Previous = Head;
            Head = item;
            Count++;
        }
        public T Pop()
        {
            var item = Head;
            Head = Head.Previous;
            Count--;
            return item.Data;
        }
        public T Peek() 
        {
            return Head.Data;
        }
    }
}
