void enqueue(qu* sq, datatype x) {
    if(sq->quelen == m) return; // full

    sq->sequ[sq->rear] = x;
    sq->rear = (sq->rear+1) % m;
    sq->quelen++;
}