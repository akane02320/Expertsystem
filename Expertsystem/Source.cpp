#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

/*---------------Expertsystem作成---------------*/

int main(void) {

	/*---------------必要になる変数---------------*/


	//場合分け

	int type;


	//数値計算で用いる

	int value1, value2, result, typ1, typ2, typ3, storage;
	int i;
	char Operator;

	//税込計算で用いる

	double tax;
	int excluded, Included, price;
	int calculation, Continue;

	//給与計算で用いる

	int Salary, wage, daily, work;
	double time;

	//到着時間計算で用いる

	double Distance, arrival, walking, bicycle, automobile, Change;
	int means = 0;
	int transportation = 0;
	int keep = 0;

	//BMI計算で用いる

	double weight, height, evaluation, conversion, modification, reasonable;
	int continuing = 0;

	//満年齢計算で用いる
	int birth_year, birth_month, birthday;
	int year, month, day, Age;
	int go = 0;


	printf("数値計算の場合は1を、税込計算をしたい場合は2を、給与計算をしたい場合は3を、\n");
	printf("目的地までの到着時間を知りたい場合は4を、BMIを計算したい場合は5を、満年齢を計算したい場合は6を入力してください\n");
	scanf("%d", &type);

	if (type == 1) {

		/*---------------- 数値計算の場合 ----------------*/

		value1 = 0;
		value2 = 0;
		result = 0;

		printf("使える演算子は+、-、*、/、%%、^です\n\n");
		printf("入力例：2 + 3\n");
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

		//計算結果表示

		printf("=%d\n", result);

		typ1 = 0;
		typ2 = 0;
		storage = 0;

		printf("計算結果を残す場合は1を残さない場合は2を入れてください\n\n");
		scanf("%d", &typ1);

		if (typ1 == 1) {

			//メモリに一時保存

			storage += result;

			printf("現在の保存値は%dです\n\n", storage);
			typ2 = 0;
			printf("このまま保存値の編集を行う場合は1を、システムを終了する場合は2を入力してください\n");
			scanf("%d", &typ2);

			while (typ2 == 1) {
				value1 = 0;
				value2 = 0;
				result = 0;

				printf("使える演算子は+、-、*、/、%%、^です\n\n");
				printf("入力例：2 + 3\n");
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

				//結果表示
				printf("=%d\n", result);

				//メモリ処理
				typ3 = 0;

				printf("保存値に足す場合は1を、引く場合は2を、一度リセットして値を保存値に入れる場合は3を入力してください\n");
				scanf("%d", &typ3);
				if (typ3 == 1) {

					//保存値に足す
					storage += result;

				}
				else if (typ3 == 2) {

					//保存値に引く
					storage -= result;
				}
				else if (typ3 == 3) {
					//リセットして値を入れる
					storage = 0;
					storage += result;
				}

				printf("現在の保存値は%dです\n\n", storage);

				typ2 = 0;

				printf("このまま保存値の編集を行う場合は1を、システムを終了する場合は2を入力してください\n");
				scanf("%d", &typ2);

				//システム終了
				if (typ2 == 2) {
					exit(0);
				}
			}
		}
		else if (typ1 == 2) {

			printf("このまま閉じる場合は1を計算を続ける場合は2を入力してください\n");

			if (typ1 == 1) {

				//システム正常終了
				exit(0);

			}
			else if (typ1 == 2) {

				//メモリに保存せずに計算

				while (typ1 == 2) {

					value1 = 0;
					value2 = 0;
					result = 0;

					printf("使える演算子は+、-、*、/、%%、^です\n\n");
					printf("入力例：2 + 3\n");
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
					//結果表示
					printf("=%d\n", result);

					printf("このまま閉じる場合は1を計算を続ける場合は2を入力してください\n");
					scanf("%d", &typ1);
				}
				exit(0);
			}
		}
	}
	else if (type == 2) {

		/*---------------税込計算---------------*/

		while (type == 2) {
			tax = 0.0;
			price = 0;
			calculation = 0;
			excluded = 0;//税抜価格
			Included = 0;//税込価格

			printf("税率を入力してください(小数点)\n");
			scanf("%lf", &tax);

			tax = tax + 1.0;

			printf("入力数値の税抜価格を求める場合は1を、税込み価格を求める場合は2を入力してください\n");
			scanf("%d", &calculation);

			if (calculation == 1) {

				//税抜価格求める

				printf("数値を入力してください\n");
				scanf("%d", &price);

				Included = price / tax;

				printf("税抜価格は%dです\n", Included);

			}
			else if (calculation == 2) {

				//税込価格求める

				printf("数値を入力してください\n");
				scanf("%d", &price);

				excluded = price * tax;

				printf("税抜価格は%dです\n", excluded);

			}
			printf("終了する場合は1を続ける場合は2を入力してください\n");
			scanf("%d", &type);
			if (type == 1) {
				exit(0);
			}
		}
	}
	else if (type == 3) {

		/*---------------給与計算---------------*/

		while (type == 3 || Continue == 2) {

			Salary = 0;
			wage = 0;
			time = 0.0;
			daily = 0;
			work = 0;
			Continue = 0;

			printf("時給を入力してください\n");
			scanf("%d", &wage);

			printf("労働時間を入力してください\n");
			printf("例：7.7\n\n");
			scanf("%lf", &time);

			Salary = wage * time;

			printf("給与は%d円です\n\n", Salary);

			printf("月給(31日間出勤とする)を計算する場合は1を入力、出勤日数から月給を求める場合は2を、しない場合は3を入力してください\n");
			scanf("%d", &daily);
			if (daily == 1) {

				//31日間出勤の場合
				Salary = 0;
				Salary = wage * (time * 31);
				printf("月給は%d円です\n\n", Salary);

				printf("終了する場合は1を、続ける場合は2を入力してください\n");
				scanf("%d", &Continue);

				if (Continue == 1) {
					exit(0);
				}
			}
			else if (daily == 2) {

				//出勤日数を指定した場合
				printf("出勤日数を入力してください\n");
				scanf("%d", &work);

				Salary = 0;
				Salary = wage * (time * work);
				printf("月給は%d円です\n", Salary);

				printf("終了する場合は1を、続ける場合は2を入力してください\n");
				scanf("%d", &Continue);

				if (Continue == 1) {
					exit(0);
				}
			}
			else if (daily == 3) {
				printf("終了する場合は1を、続ける場合は2を入力してください\n");
				scanf("%d", &Continue);

				if (Continue == 1) {
					exit(0);
				}
			}
		}
	}
	else if (type == 4) {

		/*---------------目的地までの到着時間計算---------------*/

		while (keep == 2 || type == 4) {

			printf("目的地までの到着時間を計算しますが、単純計算であるので、必ずしもその時間になるとは限りません\n");
			printf("あらかじめ頭で理解しておいてください\n\n");

			Distance = 0.0;
			arrival = 0.0;
			walking = 4.0;
			bicycle = 15.0;
			automobile = 50.0;
			Change = 0.0;

			printf("距離をkm単位で入力してください\n");
			printf("例：0.3\n");
			scanf("%lf", &Distance);

			printf("歩く時間を求める場合は1を、自転車の時間を求める場合は2を、自動車の時間を求める場合は3を入力してください\n\n");
			scanf("%d", &means);

			if (means == 1) {

				//歩く時間を求める

				printf("時速を出す場合は1を、分速を出す場合は2を入力してください\n");
				scanf("%d", &transportation);

				switch (transportation)
				{
				case(1):

					//時速
					arrival = Distance / walking;
					printf("約%.1lf時間で目的地まで到着します\n\n", arrival);
					break;

				case(2):

					//分速
					Change = walking / 60;
					arrival = Distance / Change;
					printf("約%.1lf分で目的地まで到着します\n\n", arrival);
					break;

				}

			}
			else if (means == 2) {

				//自転車の時間を求める

				printf("時速を出す場合は1を、分速を出す場合は2を入力してください\n");
				scanf("%d", &transportation);

				switch (transportation)
				{
				case(1):

					//時速
					arrival = Distance / bicycle;
					printf("約%.1lf時間で目的地まで到着します\n\n", arrival);
					break;

				case(2):

					//分速
					Change = bicycle / 60;
					arrival = Distance / Change;
					printf("約%.1lf分で目的地まで到着します\n\n", arrival);
					break;

				}
			}
			else if (means == 3) {

				//自動車の時間を求める

				printf("時速を出す場合は1を、分速を出す場合は2を入力してください\n");
				scanf("%d", &transportation);

				switch (transportation)
				{
				case(1):

					//時速
					arrival = Distance / automobile;
					printf("約%.1lf時間で目的地まで到着します\n\n", arrival);
					break;

				case(2):

					//分速
					Change = automobile / 60;
					arrival = Distance / Change;
					printf("約%.1lf分で目的地まで到着します\n\n", arrival);
					break;

				}
			}

			printf("終了する場合は1を、続ける場合は2を入力してください\n");
			scanf("%d", &keep);

			if (keep == 1) {
				exit(0);
			}
		}
	}
	else if (type == 5) {

		/*---------------BMI計算---------------*/

		while (continuing == 2 || type == 5) {

			weight = 0.0;
			height = 0.0;
			evaluation = 0.0;
			conversion = 0.0;
			modification = 0.0;
			reasonable = 0.0;
			continuing = 0;

			printf("体重を入力してください\n");
			scanf("%lf", &weight);

			printf("身長を入力してください\n");
			scanf("%lf", &height);

			modification = height / 100;
			conversion = modification * modification;
			evaluation = weight / conversion;
			reasonable = modification * modification * 22;

			if (evaluation < 18.5) {
				printf("BMI値は%.1lf、低体重です\n\n", evaluation);
			}
			else if (evaluation < 25.0) {
				printf("BMI値は%.1lf、普通体重です\n\n", evaluation);
			}
			else if (evaluation < 30.0) {
				printf("BMI値は%.1lf、肥満(1度)です\n\n", evaluation);
				printf("適正体重は%.1lfです\n\n", reasonable);
			}
			else if (evaluation < 35.0) {
				printf("BMI値は%.1lf、肥満(2度)です\n\n", evaluation);
				printf("適正体重は%.1lfです\n\n", reasonable);
			}
			else if (evaluation < 40.0) {
				printf("BMI値は%.1lf、肥満(3度)です\n\n", evaluation);
				printf("適正体重は%.1lfです\n\n", reasonable);
			}
			else if (evaluation <= 40.0) {
				printf("BMI値は%.1lf、肥満(4度)です\n\n", evaluation);
				printf("適正体重は%.1lfです\n\n", reasonable);
			}

			printf("終了する場合は1を、続ける場合は2を入力してください\n");
			scanf("%d", &continuing);

			if (continuing == 1) {
				exit(0);
			}
		}
	}
	else if (type == 6) {

		/*---------------満年齢を計算---------------*/
		while (go == 2 || type == 6) {

			birth_year = 0;
			birth_month = 0;
			birthday = 0;
			year = 0;
			month = 0;
			day = 0;
			Age = 0;

			printf("誕生日をそれぞれ空白を開けて入力してください(西暦入力)\n");
			printf("例：2021 2 20\n");
			scanf("%d %d %d", &birth_year, &birth_month, &birthday);

			printf("求めたい未来の年月日を入力してください(西暦入力)\n");
			printf("例:2022 2 20\n");
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

			printf("%d年%d月%d日の満年齢は%d歳です\n", year, month, day, Age);

			printf("終了する場合は1を、続ける場合は2を入力してください\n");
			scanf("%d", &go);

			if (go == 1) {
				exit(0);
			}
		}
	}
	else {

		/*---------------1、2、3，4，5以外の数値を入力された場合---------------*/

		printf("例外が入力されたので強制終了します\n");
		exit(0);
	}
}
