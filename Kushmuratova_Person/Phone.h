#pragma once
/**
	@file Phone.h
	@brief ������������ ���� ������ ��������
	@copyright ����
	@author ���������� �.�.
	@date 26.12.2023
	@versiom 1.0.0
\par ���������� ������
	@ref Phone
\par �������� �����
	@ref Phone

*/
/// ����� �������� ���������
/*
	�������� ������ ��������� ��� ����������
*/






#include <iostream>
#include <string>
#include <algorithm>

class Phone
{
private:
	std::string surname; ///<�������
	std::string name; ///<���
	std::string patronymic; ///<��������
	std::string address; ///<�����
	std::string number; ///<�����
	int time_icc; ///<����� ��������������� ����������
	int time_ldc; ///<����� ������������� ����������

public:
	/// ����������� ��� ������
	/**
		��������� ��������� ���	������ Phone 
		\param surname ������� ��������
		\param name ��� ��������
		\param patronymic �������� ��������
		\param surname ����� ��������
		\param number ����� ��������
		\param time_icc ����� ��������������� ���������� ��������
		\param time_ldc ����� ������������� ���������� ��������

	*/

	Phone(std::string surname, std::string name, std::string patronymic, std::string address, std::string number, int time_icc, int time_ldc)
		:surname(surname), name(name), patronymic(patronymic), address(address), time_icc(time_icc), time_ldc(time_ldc) {}
	/**
		������ ������� ������� �������� �� ���������, ����� ��������������� ���������� ������� ��������� ��������
        \brief ������ ��������� ����������� �����
        \param time_icc ����� ��������������� ���������� 
        \return surname ������� ��������
        \throw IsEmpty � ����� �������� �� �������� �����
	*/
	void showAbonentsWithExceededLocalCallTime(int time_icc_exceeded) {
		if (time_icc > time_icc_exceeded) {
			std::cout << surname << name << patronymic << address << number << std::endl;
		}
	}
	/** 
        ������ ������� ������� ������ ���������, ����������������� ������������� ������
        \brief  ������ ��������� ����������������� ������������� ������
        \param ����������� ����� ���������
        \return surname ������� ��������
        \throw IsEmpty ��������� ����������������� ������������� ������ ���
	*/
	void showAbonentsWithLongDistanceCalls(){
		if ( time_ldc > 0) {
			std::cout << surname << name << patronymic << address << number << std::endl;
		}
	}
	
};
int main() {

}