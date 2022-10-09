datatype* dequeue(qu* sq) {
    if(sq->quelen == 0) return NULL;

    datatype* data = &(sq->sequ[(sq->rear + m - sq->quelen) % m]);

    sq->quelen--;

    return data;
}