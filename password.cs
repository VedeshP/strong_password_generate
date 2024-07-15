using System;

class Program
{
    private static readonly string CHARACTERS = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";

    public static string GeneratePassword(int length)
    {
        Random random = new Random();
        char[] password = new char[length];
        for (int i = 0; i < length; i++)
        {
            password[i] = CHARACTERS[random.Next(CHARACTERS.Length)];
        }
        return new string(password);
    }

    static void Main()
    {
        int length = 12; // change the length as needed
        Console.WriteLine(GeneratePassword(length));
    }
}
