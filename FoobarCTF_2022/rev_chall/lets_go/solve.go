package main

import (
    "crypto/aes"
    "encoding/hex"
    "fmt"
)

func encrypt(key []byte, buf []byte) string {
    z, _ := aes.NewCipher(key[:32])
    a := make([]byte, len(buf))
    z.Decrypt(a, buf)
    return hex.EncodeToString(a)
}

func cryptbyte(key []byte) {
    buffer :=  []byte("\x12\xf8\xfd\xe4\xff\xe8\xbb\xf0\xe6\x04Km\x04B>\xbf\xacj\x90\x11U4\xfa\xda\xce\x81SP\xf2\x84 \xb6")
    var i int
    var s string
    for ; i+aes.BlockSize <= len(buffer); i += aes.BlockSize {
        s += encrypt(key, buffer[i:i+aes.BlockSize])
    }
    fmt.Printf(s)
}


func main() {
    
    key := []byte("EYF45#NDJFJ^DSHSKhdh53728#cksa08xns")
    //mod63268(&key)
    fmt.Println(key)
    cryptbyte(key)
}
//GLUG{G0oo_b1n4r1Es_ar3_fuN_4563}





/*

package main

import (
    "bufio"
    "crypto/aes"
    "encoding/hex"
    "fmt"
    "net"
    "os"
)

func encrypt(key string, buf []byte) string {
    z, _ := aes.NewCipher([]byte(key)[:32])
    a := make([]byte, len(buf))
    z.Encrypt(a, buf)
    return hex.EncodeToString(a)
}

func cryptbyte(key string) {
    buffer, err := os.ReadFile("secrets.txt")
    if err != nil {
        fmt.Println("Testing____")
    }
    var i int
    var s string
    for ; i+aes.BlockSize <= len(buffer); i += aes.BlockSize {
        s += encrypt(key, buffer[i:i+aes.BlockSize])
    }
    fp, _ := os.Create("encrypteddata.txt")
    defer fp.Close()
    fp.WriteString(s)
    os.Remove("secrets.txt")
}

func mod63268(key *string) {
    conn, err := net.Dial("tcp", "34.100.233.12:1337")
    if err != nil {
        fmt.Print(err)
        return
    }
    rdr := bufio.NewReader(conn)
    *key, _ = rdr.ReadString('\n')
}

func main() {
    var key string
    mod63268(&key)
    cryptbyte(key)
}
*/