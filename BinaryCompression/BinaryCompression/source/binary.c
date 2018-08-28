#include <stdio.h>
#define Colomn_Max 8
#define ROW_Max    8  
typedef enum { false = 0, true = 1 }bool;
typedef struct Matrix
{
	bool flag;  //��־
	bool finsh_flag;
	int data;  //����
//	int total;//һ���ж��ٺڵ�
};
//MatrixBin[Colomn_Max][ROW_Max]
int MatrixTest[Colomn_Max][ROW_Max] = { {0},{0,1,1,1,0,1,1,0},{ 0,1,1,1,0,1,1,0 },{ 0,1,1,1,0,1,1,0 },{ 0,1,1,1,0,1,1,0 },{ 0,1,1,1,0,0,0,0 },{ 0,1,1,1,0,0,0,0 },{0} };
struct Matrix MatrixBin[Colomn_Max][ROW_Max] = { false,false,0,0 };//��ʼ��
int start_index_col = -1, start_index_row = -1;
int counter_row = 0, counter_colomn = 0;
int total = 0;
void display()
{
	int i = 0, j = 0;
	printf("the row data is:\r\n");
	for (i = 0; i<Colomn_Max; i++)
	{
		for (j = 0; j < ROW_Max; j++)
		{
			printf("%d\t", MatrixTest[i][j]);
		}
		printf("\r\n");
	}
}
void init()
{
	int i, j;
	for (i = 0; i < ROW_Max; i++)  //��ʼ��
	{
		for (j = 0; j < Colomn_Max; j++)
		{
			MatrixBin[i][j].data = MatrixTest[i][j];
			MatrixBin[i][j].flag = false;
		}
	}
	for (i = 0; i < ROW_Max; i++)  //���ֺڵ�Ͱ׵�
	{
		for (j = 0; j < Colomn_Max; j++)
		{
			if (MatrixBin[i][j].data != 0)
			{
				MatrixBin[i][j].flag = true;
				total++;
			}
			else
				MatrixBin[i][j].finsh_flag = true;
		}
	}
}
void search_start()
{
	int i, j;
	for (i = 0; i < ROW_Max; i++)  //�ҵ���ʼ��
	{
		start_index_row = i;
		for (j = 0; j < Colomn_Max; j++)
		{
			if (MatrixBin[i][j].flag && (start_index_col == -1))
			{
				start_index_col = j;
				break;
			}
		}
		if (start_index_col != -1)
			break;
	}
	//	return start_index_col;
}
void search_end(int start_index_col, int start_index_row)
{
	int i, j, t = 0;
	for (i = start_index_row; i < ROW_Max; i++)
	{
		for (j = start_index_col; j < Colomn_Max; j++)
		{
			if (MatrixBin[i][j].flag && (MatrixBin[i][j].finsh_flag != true))//δ�����ηֿ�ĺڵ�
			{
				MatrixBin[i][j].finsh_flag = true;//�ȴ�����
				total--;
				counter_colomn++;
			}
			else
				break;
		}
		if (i == ROW_Max - 1)  //�ж��Ƿ������һ��
			break;
		for (t = start_index_col; t <= counter_colomn + start_index_col; t++)//0111
																			 //0100
			if ((MatrixBin[i + 1][t].flag != false) || (MatrixBin[i + 1][t].finsh_flag == true))//�ж���һ���Ƿ����˴�����߲��Ǻڵ�
				break;
		counter_row++;
	}
}
int main()
{
//	display();	
	init();
	search_start();
	while (total==0)
	{
		search_end(start_index_col,start_index_row);
		printf("counter_colomn=%d,counter_row=%d\r\n", counter_colomn, counter_row);
	}
	return 0;
}
