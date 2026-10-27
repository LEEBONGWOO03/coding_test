int* solution(int arr[], size_t arr_len, size_t* answer_len)
{
    
    int* answer = (int*)malloc(sizeof(int) * arr_len);

    
    *answer_len = 0;
    
    answer[0] = arr[0]; //정답의 첫번째 배열을 입력받은 arr[0]로 초기화
    int count = 1; //answer[0]는 이미 있으므로 1부터 카운트
    for (int i = 1; i < arr_len; i++) { //arr[]배열을 arr[1]부터 마지막까지 순환
        if (arr[i] != answer[count - 1]) { // 입력받은 배열의 i번째 배열이 결과 배열의 count 전 배열값과 다르다면
            answer[count] = arr[i]; // 결과 배열의 count번째 배열을 arr[i]로함
            count++;
        }

    }
    *answer_len = count; //결과 배열의 길이는 count값 (마지막에 증가시켰기 때문에 길이가 됌)

    return answer;  // 빌려온 메모리의 시작 주소를 main에 돌려줌
}