// Switch case statements
// switch case == when keyword in kotlin

fun main(args: Array<String>) {
    var day = 2;

    val result = when(day){
        1->"Monday"
        2->"Tues"
        3->"wed"
        4->"thrus"
        5->"fri"
        6->"sat"
        7->"sun"
        else->"invalid day"
    }
    println(result)
}