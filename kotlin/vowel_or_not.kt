// check whether an alphabet is vowel or consonant using if.. wlse statement

// find ASCII value of character


fun main(args: Array<String>) {
    // val char = args[0];
    val char = "k"
    val vowel = listOf("a","e","i","o","u")

    if(vowel.contains(char)){
        println("It is a vowel")
    }
    else{
        println("it's a consonant")
    }
}