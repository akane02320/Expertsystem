#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

/*---------------Expertsystem�쐬---------------*/

int main(void) {

	/*---------------�K�v�ɂȂ�ϐ�---------------*/


	//�ꍇ����

	int type;


	//���l�v�Z�ŗp����

	int value1, value2, result, typ1, typ2, typ3, storage;
	int i;
	char Operator;

	//�ō��v�Z�ŗp����

	double tax;
	int excluded, Included, price;
	int calculation, Continue;

	//���^�v�Z�ŗp����

	int Salary, wage, daily, work;
	double time;

	//�������Ԍv�Z�ŗp����

	double Distance, arrival, walking, bicycle, automobile, Change;
	int means = 0;
	int transportation = 0;
	int keep = 0;

	//BMI�v�Z�ŗp����

	double weight, height, evaluation, conversion, modification, reasonable;
	int continuing = 0;

	//���N��v�Z�ŗp����
	int birth_year, birth_month, birthday;
	int year, month, day, Age;
	int go = 0;


	printf("���l�v�Z�̏ꍇ��1���A�ō��v�Z���������ꍇ��2���A���^�v�Z���������ꍇ��3���A\n");
	printf("�ړI�n�܂ł̓������Ԃ�m�肽���ꍇ��4���ABMI���v�Z�������ꍇ��5���A���N����v�Z�������ꍇ��6����͂��Ă�������\n");
	scanf("%d", &type);

	if (type == 1) {

		/*---------------- ���l�v�Z�̏ꍇ ----------------*/

		value1 = 0;
		value2 = 0;
		result = 0;

		printf("�g���鉉�Z�q��+�A-�A*�A/�A%%�A^�ł�\n\n");
		printf("���͗�F2 + 3\n");
		scanf("%d %c %d", &value1, &Operator, &value2);

		switch (Operator)
		{

		case('+'):

			result = value1 + value2;
			break;

		case('-'):

			result = value1 - value2;
			break;

		case('*'):

			result = value1 * value2;
			break;

		case('/'):

			result = value1 / value2;
			break;

		case('%'):

			result = value1 % value2;
			break;

		case('^'):
			for (i = 0; i < value2; i++) {
				result = result + (value1 * value1);
			}
			break;

		}

		//�v�Z���ʕ\��

		printf("=%d\n", result);

		typ1 = 0;
		typ2 = 0;
		storage = 0;

		printf("�v�Z���ʂ��c���ꍇ��1���c���Ȃ��ꍇ��2�����Ă�������\n\n");
		scanf("%d", &typ1);

		if (typ1 == 1) {

			//�������Ɉꎞ�ۑ�

			storage += result;

			printf("���݂̕ۑ��l��%d�ł�\n\n", storage);
			typ2 = 0;
			printf("���̂܂ܕۑ��l�̕ҏW���s���ꍇ��1���A�V�X�e�����I������ꍇ��2����͂��Ă�������\n");
			scanf("%d", &typ2);

			while (typ2 == 1) {
				value1 = 0;
				value2 = 0;
				result = 0;

				printf("�g���鉉�Z�q��+�A-�A*�A/�A%%�A^�ł�\n\n");
				printf("���͗�F2 + 3\n");
				scanf("%d %c %d", &value1, &Operator, &value2);

				switch (Operator)
				{

				case('+'):

					result = value1 + value2;
					break;

				case('-'):

					result = value1 - value2;
					break;

				case('*'):

					result = value1 * value2;
					break;

				case('/'):

					result = value1 / value2;
					break;

				case('%'):

					result = value1 % value2;
					break;

				case('^'):
					for (i = 0; i < value2; i++) {
						result = result + (value1 * value1);
					}
					break;

				}

				//���ʕ\��
				printf("=%d\n", result);

				//����������
				typ3 = 0;

				printf("�ۑ��l�ɑ����ꍇ��1���A�����ꍇ��2���A��x���Z�b�g���Ēl��ۑ��l�ɓ����ꍇ��3����͂��Ă�������\n");
				scanf("%d", &typ3);
				if (typ3 == 1) {

					//�ۑ��l�ɑ���
					storage += result;

				}
				else if (typ3 == 2) {

					//�ۑ��l�Ɉ���
					storage -= result;
				}
				else if (typ3 == 3) {
					//���Z�b�g���Ēl������
					storage = 0;
					storage += result;
				}

				printf("���݂̕ۑ��l��%d�ł�\n\n", storage);

				typ2 = 0;

				printf("���̂܂ܕۑ��l�̕ҏW���s���ꍇ��1���A�V�X�e�����I������ꍇ��2����͂��Ă�������\n");
				scanf("%d", &typ2);

				//�V�X�e���I��
				if (typ2 == 2) {
					exit(0);
				}
			}
		}
		else if (typ1 == 2) {

			printf("���̂܂ܕ���ꍇ��1���v�Z�𑱂���ꍇ��2����͂��Ă�������\n");

			if (typ1 == 1) {

				//�V�X�e������I��
				exit(0);

			}
			else if (typ1 == 2) {

				//�������ɕۑ������Ɍv�Z

				while (typ1 == 2) {

					value1 = 0;
					value2 = 0;
					result = 0;

					printf("�g���鉉�Z�q��+�A-�A*�A/�A%%�A^�ł�\n\n");
					printf("���͗�F2 + 3\n");
					scanf("%d %c %d", &value1, &Operator, &value2);

					switch (Operator)
					{

					case('+'):

						result = value1 + value2;
						break;

					case('-'):

						result = value1 - value2;
						break;

					case('*'):

						result = value1 * value2;
						break;

					case('/'):

						result = value1 / value2;
						break;

					case('%'):

						result = value1 % value2;
						break;

					case('^'):
						for (i = 0; i < value2; i++) {
							result = result + (value1 * value1);
						}
						break;

					}
					//���ʕ\��
					printf("=%d\n", result);

					printf("���̂܂ܕ���ꍇ��1���v�Z�𑱂���ꍇ��2����͂��Ă�������\n");
					scanf("%d", &typ1);
				}
				exit(0);
			}
		}
	}
	else if (type == 2) {

		/*---------------�ō��v�Z---------------*/

		while (type == 2) {
			tax = 0.0;
			price = 0;
			calculation = 0;
			excluded = 0;//�Ŕ����i
			Included = 0;//�ō����i

			printf("�ŗ�����͂��Ă�������(�����_)\n");
			scanf("%lf", &tax);

			tax = tax + 1.0;

			printf("���͐��l�̐Ŕ����i�����߂�ꍇ��1���A�ō��݉��i�����߂�ꍇ��2����͂��Ă�������\n");
			scanf("%d", &calculation);

			if (calculation == 1) {

				//�Ŕ����i���߂�

				printf("���l����͂��Ă�������\n");
				scanf("%d", &price);

				Included = price / tax;

				printf("�Ŕ����i��%d�ł�\n", Included);

			}
			else if (calculation == 2) {

				//�ō����i���߂�

				printf("���l����͂��Ă�������\n");
				scanf("%d", &price);

				excluded = price * tax;

				printf("�Ŕ����i��%d�ł�\n", excluded);

			}
			printf("�I������ꍇ��1�𑱂���ꍇ��2����͂��Ă�������\n");
			scanf("%d", &type);
			if (type == 1) {
				exit(0);
			}
		}
	}
	else if (type == 3) {

		/*---------------���^�v�Z---------------*/

		while (type == 3 || Continue == 2) {

			Salary = 0;
			wage = 0;
			time = 0.0;
			daily = 0;
			work = 0;
			Continue = 0;

			printf("��������͂��Ă�������\n");
			scanf("%d", &wage);

			printf("�J�����Ԃ���͂��Ă�������\n");
			printf("��F7.7\n\n");
			scanf("%lf", &time);

			Salary = wage * time;

			printf("���^��%d�~�ł�\n\n", Salary);

			printf("����(31���ԏo�΂Ƃ���)���v�Z����ꍇ��1����́A�o�Γ������猎�������߂�ꍇ��2���A���Ȃ��ꍇ��3����͂��Ă�������\n");
			scanf("%d", &daily);
			if (daily == 1) {

				//31���ԏo�΂̏ꍇ
				Salary = 0;
				Salary = wage * (time * 31);
				printf("������%d�~�ł�\n\n", Salary);

				printf("�I������ꍇ��1���A������ꍇ��2����͂��Ă�������\n");
				scanf("%d", &Continue);

				if (Continue == 1) {
					exit(0);
				}
			}
			else if (daily == 2) {

				//�o�Γ������w�肵���ꍇ
				printf("�o�Γ�������͂��Ă�������\n");
				scanf("%d", &work);

				Salary = 0;
				Salary = wage * (time * work);
				printf("������%d�~�ł�\n", Salary);

				printf("�I������ꍇ��1���A������ꍇ��2����͂��Ă�������\n");
				scanf("%d", &Continue);

				if (Continue == 1) {
					exit(0);
				}
			}
			else if (daily == 3) {
				printf("�I������ꍇ��1���A������ꍇ��2����͂��Ă�������\n");
				scanf("%d", &Continue);

				if (Continue == 1) {
					exit(0);
				}
			}
		}
	}
	else if (type == 4) {

		/*---------------�ړI�n�܂ł̓������Ԍv�Z---------------*/

		while (keep == 2 || type == 4) {

			printf("�ړI�n�܂ł̓������Ԃ��v�Z���܂����A�P���v�Z�ł���̂ŁA�K���������̎��ԂɂȂ�Ƃ͌���܂���\n");
			printf("���炩���ߓ��ŗ������Ă����Ă�������\n\n");

			Distance = 0.0;
			arrival = 0.0;
			walking = 4.0;
			bicycle = 15.0;
			automobile = 50.0;
			Change = 0.0;

			printf("������km�P�ʂœ��͂��Ă�������\n");
			printf("��F0.3\n");
			scanf("%lf", &Distance);

			printf("�������Ԃ����߂�ꍇ��1���A���]�Ԃ̎��Ԃ����߂�ꍇ��2���A�����Ԃ̎��Ԃ����߂�ꍇ��3����͂��Ă�������\n\n");
			scanf("%d", &means);

			if (means == 1) {

				//�������Ԃ����߂�

				printf("�������o���ꍇ��1���A�������o���ꍇ��2����͂��Ă�������\n");
				scanf("%d", &transportation);

				switch (transportation)
				{
				case(1):

					//����
					arrival = Distance / walking;
					printf("��%.1lf���ԂŖړI�n�܂œ������܂�\n\n", arrival);
					break;

				case(2):

					//����
					Change = walking / 60;
					arrival = Distance / Change;
					printf("��%.1lf���ŖړI�n�܂œ������܂�\n\n", arrival);
					break;

				}

			}
			else if (means == 2) {

				//���]�Ԃ̎��Ԃ����߂�

				printf("�������o���ꍇ��1���A�������o���ꍇ��2����͂��Ă�������\n");
				scanf("%d", &transportation);

				switch (transportation)
				{
				case(1):

					//����
					arrival = Distance / bicycle;
					printf("��%.1lf���ԂŖړI�n�܂œ������܂�\n\n", arrival);
					break;

				case(2):

					//����
					Change = bicycle / 60;
					arrival = Distance / Change;
					printf("��%.1lf���ŖړI�n�܂œ������܂�\n\n", arrival);
					break;

				}
			}
			else if (means == 3) {

				//�����Ԃ̎��Ԃ����߂�

				printf("�������o���ꍇ��1���A�������o���ꍇ��2����͂��Ă�������\n");
				scanf("%d", &transportation);

				switch (transportation)
				{
				case(1):

					//����
					arrival = Distance / automobile;
					printf("��%.1lf���ԂŖړI�n�܂œ������܂�\n\n", arrival);
					break;

				case(2):

					//����
					Change = automobile / 60;
					arrival = Distance / Change;
					printf("��%.1lf���ŖړI�n�܂œ������܂�\n\n", arrival);
					break;

				}
			}

			printf("�I������ꍇ��1���A������ꍇ��2����͂��Ă�������\n");
			scanf("%d", &keep);

			if (keep == 1) {
				exit(0);
			}
		}
	}
	else if (type == 5) {

		/*---------------BMI�v�Z---------------*/

		while (continuing == 2 || type == 5) {

			weight = 0.0;
			height = 0.0;
			evaluation = 0.0;
			conversion = 0.0;
			modification = 0.0;
			reasonable = 0.0;
			continuing = 0;

			printf("�̏d����͂��Ă�������\n");
			scanf("%lf", &weight);

			printf("�g������͂��Ă�������\n");
			scanf("%lf", &height);

			modification = height / 100;
			conversion = modification * modification;
			evaluation = weight / conversion;
			reasonable = modification * modification * 22;

			if (evaluation < 18.5) {
				printf("BMI�l��%.1lf�A��̏d�ł�\n\n", evaluation);
			}
			else if (evaluation < 25.0) {
				printf("BMI�l��%.1lf�A���ʑ̏d�ł�\n\n", evaluation);
			}
			else if (evaluation < 30.0) {
				printf("BMI�l��%.1lf�A�얞(1�x)�ł�\n\n", evaluation);
				printf("�K���̏d��%.1lf�ł�\n\n", reasonable);
			}
			else if (evaluation < 35.0) {
				printf("BMI�l��%.1lf�A�얞(2�x)�ł�\n\n", evaluation);
				printf("�K���̏d��%.1lf�ł�\n\n", reasonable);
			}
			else if (evaluation < 40.0) {
				printf("BMI�l��%.1lf�A�얞(3�x)�ł�\n\n", evaluation);
				printf("�K���̏d��%.1lf�ł�\n\n", reasonable);
			}
			else if (evaluation <= 40.0) {
				printf("BMI�l��%.1lf�A�얞(4�x)�ł�\n\n", evaluation);
				printf("�K���̏d��%.1lf�ł�\n\n", reasonable);
			}

			printf("�I������ꍇ��1���A������ꍇ��2����͂��Ă�������\n");
			scanf("%d", &continuing);

			if (continuing == 1) {
				exit(0);
			}
		}
	}
	else if (type == 6) {

		/*---------------���N����v�Z---------------*/
		while (go == 2 || type == 6) {

			birth_year = 0;
			birth_month = 0;
			birthday = 0;
			year = 0;
			month = 0;
			day = 0;
			Age = 0;

			printf("�a���������ꂼ��󔒂��J���ē��͂��Ă�������(�������)\n");
			printf("��F2021 2 20\n");
			scanf("%d %d %d", &birth_year, &birth_month, &birthday);

			printf("���߂��������̔N��������͂��Ă�������(�������)\n");
			printf("��:2022 2 20\n");
			scanf("%d %d %d", &year, &month, &day);

			if (birth_month < month) {
				Age = year - birth_year;
			}
			else if (birth_month == month && birthday <= day) {
				Age = year - birth_year;
			}
			else {
				Age = year - birth_year - 1;
			}

			printf("%d�N%d��%d���̖��N���%d�΂ł�\n", year, month, day, Age);

			printf("�I������ꍇ��1���A������ꍇ��2����͂��Ă�������\n");
			scanf("%d", &go);

			if (go == 1) {
				exit(0);
			}
		}
	}
	else {

		/*---------------1�A2�A3�C4�C5�ȊO�̐��l����͂��ꂽ�ꍇ---------------*/

		printf("��O�����͂��ꂽ�̂ŋ����I�����܂�\n");
		exit(0);
	}
}
