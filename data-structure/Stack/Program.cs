namespace Stack;

internal class Program
{
    private static void Main()
    {
        StackDoubles();
        StackStrings();
        
        // Output:
        // element 8.3
        // element 2.8
        // element 1.2
        // element bb
        // element aa
    }

    private static void StackDoubles()
    {
        var stack = new Stack<double>();
        stack.Push(1.2);
        stack.Push(2.8);
        stack.Push(8.3);
        
        while (stack.Size > 0)
        {
            Console.WriteLine($"element {stack.Pop()}");
        }
    }

    private static void StackStrings()
    {
        var stack = new Stack<string>();
        stack.Push("aa");
        stack.Push("bb");
        
        while (stack.Size > 0)
        {
            Console.WriteLine($"element {stack.Pop()}");
        }
    }
}