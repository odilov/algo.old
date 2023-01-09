namespace Stack;

public class Stack<T>
{
    private int _top = -1;
    private readonly T[] _stack;
    private int _capacity;
    public Stack(int capacity = 100)
    {
        _capacity = capacity;
        _stack = new T[capacity];
    }
    public void Push(T e) => _stack[++_top] = e;
    public T Pop() => _stack[_top--];
    
    public int Size => _top + 1;
    public bool IsEmpty => _top == -1;
}