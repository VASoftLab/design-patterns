#pragma once
#include "Strategy.h"
// ����� ��������� ��� �������� ������ � CSV �������
class StrategyCSV : public Strategy
{
public:
	StrategyCSV();
	~StrategyCSV() = default;
private:
	std::string exportData() override;
};

