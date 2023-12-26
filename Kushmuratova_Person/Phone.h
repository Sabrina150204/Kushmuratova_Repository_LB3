#pragma once
/**
	@file Phone.h
	@brief Заголовочный файл класса телефона
	@copyright ВоГУ
	@author Кушмуратов С.Д.
	@date 26.12.2023
	@versiom 1.0.0
\par Использует классы
	@ref Phone
\par Содержит класс
	@ref Phone

*/
/// Класс описания телефонов
/*
	Содержит данные телефонов для фильтрации
*/






#include <iostream>
#include <string>
#include <algorithm>

class Phone
{
private:
	std::string surname; ///<Фамилия
	std::string name; ///<Имя
	std::string patronymic; ///<Отчество
	std::string address; ///<Адрес
	std::string number; ///<Номер
	int time_icc; ///<Время внутригородских разговоров
	int time_ldc; ///<Время междугородних разговоров

public:
	/// Конструктор для класса
	/**
		Принимает параметры для	класса Phone 
		\param surname Фамилия человека
		\param name Имя человека
		\param patronymic Отчество человека
		\param surname Адрес человека
		\param number Номер человека
		\param time_icc Время внутригородских разговоров человека
		\param time_ldc Время междугородних разговоров человека

	*/

	Phone(std::string surname, std::string name, std::string patronymic, std::string address, std::string number, int time_icc, int time_ldc)
		:surname(surname), name(name), patronymic(patronymic), address(address), time_icc(time_icc), time_ldc(time_ldc) {}
	/**
		Данная функция выводит сведения об абонентах, время внутригородских разговоров которых превышает заданное
        \brief Список абонетнов превысивших лемит
        \param time_icc Время внутригородских разговоров 
        \return surname Фамилию абонента
        \throw IsEmpty У этого абонента не превышен лимил
	*/
	void showAbonentsWithExceededLocalCallTime(int time_icc_exceeded) {
		if (time_icc > time_icc_exceeded) {
			std::cout << surname << name << patronymic << address << number << std::endl;
		}
	}
	/** 
        Данная функция выводит список абонентов, воспользовавшихся междугородней связью
        \brief  Список абонетнов воспользовавшихся междугородней связью
        \param минимальное время разговора
        \return surname Фамилию абонента
        \throw IsEmpty Абонентов воспользовавшихся междугородней связью нет
	*/
	void showAbonentsWithLongDistanceCalls(){
		if ( time_ldc > 0) {
			std::cout << surname << name << patronymic << address << number << std::endl;
		}
	}
	
};
int main() {

}