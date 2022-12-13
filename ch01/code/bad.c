/* compiler의 dignostic을 보기 위한 잘못된 코드 */

void main() {
    /* declaration(선언): 어떤 대상의 실제 내용을 
    compiler에게 알려주는 행위 */
    // definition(정의)와 차이는 memory address binding 유무로 구분할 수 있다.
    // 어떤 대상의 이름에 대응하는 memory상 address가 정해지면 definition(정의)
    // 그렇지 않고 이름만 정의하면 declaration(선언)
    int i;
    double A[5] = {
        9.0,
        2.9,
        3.E+25,
        .00007,
    };

    // 작업을 수행한다.
    for (i = 0; i < 5; ++i) {
        printf("element %d is %g, \tits square is %g\n",
            i,
            A[i],
            A[i]*A[i]);
    }

    return 0;
}