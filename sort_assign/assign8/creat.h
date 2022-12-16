//½¨Á¢Ë³Ðò±í.h
void creat(sequenlist r[],int n)
{
	srand(time(0));
	for(int i=0;i<n;i++)
		r[i].key=rand()%90;
}
