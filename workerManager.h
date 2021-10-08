#pragma once
#include <iostream>
#include <fstream>
#include "worker.h"
using namespace std;

#define FILENAME "empFile.txt"

class WorkerManager
{
public:
	// ���캯��
	WorkerManager();

	// չʾ�˵�
	void  Show_Menu();

	// �˳�ϵͳ
	void ExitSystem();

	// ��¼ְ������
	int m_EmpNum;

	// Ա�������ָ��
	Worker** m_EmpArray;

	// ����ְ��
	void Add_Emp();

	// �����ļ�
	void save();

	// ��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;

	// ͳ������
	int get_EmpNum();

	// ��ʼ��Ա��
	void init_Emp();

	// ��ʾְ��
	void Show_Emp();

	// ɾ��ְ��
	void Del_Emp();

	// ����ְ������ж��Ƿ���ڣ������ڷ���ְ����������λ�ã������ڷ���-1
	int IsExist(int id);

	// �޸�ְ��
	void Mod_Emp();

	// ����ְ��
	void Find_Emp();

	// ����ְ��
	void Sort_Emp();

	// ����ļ�
	void Clean_File();

	// ��������
	~WorkerManager();
};