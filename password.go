package main

import (
    "crypto/rand"
    "fmt"
    "math/big"
)

const charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()"

func generatePassword(length int) (string, error) {
    password := make([]byte, length)
    for i := range password {
        charIndex, err := rand.Int(rand.Reader, big.NewInt(int64(len(charset))))
        if err != nil {
            return "", err
        }
        password[i] = charset[charIndex.Int64()]
    }
    return string(password), nil
}

func main() {
    length := 12 // change the length as needed
    password, err := generatePassword(length)
    if err != nil {
        fmt.Println("Error generating password:", err)
        return
    }
    fmt.Println(password)
}
