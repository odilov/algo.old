namespace Stack;

public class Stack<T>
{
    private readonly T[] _item;
    private int _index = -1;
    public Stack() => _item = new T[10];
    public int Count => _index + 1;
    public void Push(T p0) => _item[++_index] = p0;
    public T Pop() => _item[_index--];
}