#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

start:

	int n = 0;
	printf("������� ����� ������� 11,12: ");
	scanf("%d", &n);

	switch (n)
	{
	
	case 11: {
		//11.	��������� �� ��������� ���, ���� ��, �� ��� ������ �� �����, ���� �� �� ������� ������:
		//cout << " ��������� ������� q � ������� r ��� �������, � �� d:" << endl;
		int a = 0, d = 0, q = 0, r = 0;

		printf("������� �������� �: ");
		scanf("%d", &a);

		printf("������� �������� d: ");
		scanf("%d", &d);

		q = a / d;
		printf("������� - %d\n", q);

		r = a%d;
		printf("������� - %d\n", r);

	}
			break;
	case 12: {
		int a = 0;
		printf("������ �� �� ����� ���������������� ����������? ��: 1 ���: 2");
		scanf("%d", &a);
		if (a == 1) {
			printf("�� ������? ��: 1 ���: 2");
			scanf("%d", &a);
			if (a == 1) {
				printf("������ ����������? ��: 1 ���: 2");
				scanf("%d", &a);
				if (a == 1) {
					printf("����� ����? ��: 1 ���: 2");
					scanf("%d", &a);
					if (a == 1) {
						printf("������ ������ ��������? ��: 1 ���: 2 �� ����: 3  ");
						scanf("%d", &a);
						if (a == 1) {
							printf("������ �������� ������� �����? ��: 1 ���: 2");
							scanf("%d", &a);
							if (a == 1)
								printf("�����\n");
							else if (a == 2) {
								printf("������ � ���� ��� ����� �������� � ������� ���� ���� ����� �������? ��: 1 ���: 2");
								scanf("%d", &a);
								if (a == 1)
									printf("�������\n");
								else if (a == 2)
									printf("��������\n");

							}

						}
						else if (a == 2) {
							printf("...� ����? ��: 1 ���: 2");
							scanf("%d", &a);
							if (a == 1)
								printf("��������\n");
							else if (a == 2) {
								printf("� ��� ���� �������� �����? ��: 1 ���: 2");
								scanf("%d", &a);
								if (a == 1)
									printf("�����\n");
								else if (a == 2)
									printf("�����\n");

							}
						}
						else if (a == 3)
							printf("�������\n");


					}
					else if (a == 2) {
						printf("�� ��������� ������? ��: 1 ���: 2");
						scanf("%d", &a);
						if (a == 1)
							printf("����������\n");
						else if (a == 2)
							printf("������\n");

					}

				}
				else if (a == 2) {
					printf("������ ���������� �� 8 ����� � ����? ��: 1 ���: 2");
					scanf("%d", &a);
					if (a == 1) {
						printf("������ ����� �����? ��: 1 ���: 2");
						scanf("%d", &a);
						if (a == 1)
							printf("������\n");
						else if (a == 2)
							printf("�������\n");
					}
					else if (a == 2) {
						printf("���� ������? ��: 1 ���: 2");
						scanf("%d", &a);
						if (a == 1)
							printf("����\n");
						else if (a == 2)
							printf("����\n");
					}
				}
	



			}
				else if (a == 2) {
					printf("������ ������? ��: 1 ���: 2");
					scanf("%d", &a);
					if (a == 1)
						printf("�������� � ������");
					else if (a == 2) {
						printf("������ ����������? ��: 1 ���: 2");
						scanf("%d", &a);
						if (a == 1) {
							printf("����� ����? ��: 1 ���: 2");
							scanf("%d", &a);
							if (a == 1) {
								printf("������ ������ ��������? ��: 1 ���: 2 �� ����: 3  ");
								scanf("%d", &a);
								if (a == 1) {
									printf("������ �������� ������� �����? ��: 1 ���: 2");
									scanf("%d", &a);
									if (a == 1)
										printf("�����\n");
									else if (a == 2) {
										printf("������ � ���� ��� ����� �������� � ������� ���� ���� ����� �������? ��: 1 ���: 2");
										scanf("%d", &a);
										if (a == 1)
											printf("�������\n");
										else if (a == 2)
											printf("��������\n");

									}

								}
								else if (a == 2) {
									printf("...� ����? ��: 1 ���: 2");
									scanf("%d", &a);
									if (a == 1)
										printf("��������\n");
									else if (a == 2) {
										printf("� ��� ���� �������� �����? ��: 1 ���: 2");
										scanf("%d", &a);
										if (a == 1)
											printf("�����\n");
										else if (a == 2)
											printf("�����\n");

									}
								}
								else if (a == 3)
									printf("�������\n");


							}
							else if (a == 2) {
								printf("�� ��������� ������? ��: 1 ���: 2");
								scanf("%d", &a);
								if (a == 1)
									printf("����������\n");
								else if (a == 2)
									printf("������\n");

							}

						}
					}
				}
		}
		else if (a == 2) {
			printf("������ ����������� � ���������? ��: 1 ���: 2");
			scanf("%d", &a);
			if (a == 1) {
				printf("������ ��������? ��: 1 ���: 2");
				scanf("%d", &a);
				if (a == 1) {
					printf("������ ������? ��: 1 ���: 2");
					scanf("%d", &a);
					if (a == 1)
						printf("������\n");
					else if ("����������\n");
				}
				else if (a == 2) {
					printf("�� ������? ��: 1 ���: 2");
					scanf("%d", &a);
					if (a == 1)
						printf("������� �����\n");
					else if (a == 2)
						printf("�������\n");
				}
			}
			else if (a == 2) {
				printf("������ ����������� � �������? ��: 1 ���: 2");
				scanf("%d", &a);
				if (a == 1) {
					printf("�� ������? ��: 1 ���: 2");
					scanf("%d", &a);
					if (a == 1)
						printf("������� �����\n");
					else if (a == 2)
						printf("�������\n");
				}
				else if (a == 2)
					printf("�����\n");
			}


		}
	}
			 break;
	default:
		break;
	}
	goto start;
}
