#include <stdio.h>

int main(void)
{
    int a = 100;  //�Ϲݺ��� ����
    int b = 200;  //�����ͺ��� ����
    int* p;

    p = &a;     // a�ּҸ� �����ͺ��� p�� ����
    printf("a �ּ� = %p\n", ());  // a�� �ּ�
    printf("p �ּ�= %p\n", ());  // p�� �ּ�  ���
    printf("a  ��= %d\n", ());  // a�� ��
    printf("p  �� = %d\n", ());   // p�� ����Ű�� �ּ��� ��

    p = &b;    // b�ּҸ� �����ͺ��� p�� ����
    printf("p �ּ� = %p\n", ());  // p�� �ּ�  ���    
    printf("p  ��= %d\n", ());    // p�� ����Ű�� �ּ��� �� 

    return 0;
}