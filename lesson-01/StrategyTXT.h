#pragma once
#include "Strategy.h"
// ����� ��������� ��� �������� ������ � TXT �������
class StrategyTXT : public Strategy
{
public:
	StrategyTXT();
	~StrategyTXT() = default;
private:
	std::string exportData() override;
};

