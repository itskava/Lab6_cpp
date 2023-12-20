#pragma once

#include <string>

// �����, ��������������� ��� ������������ ������ � ���������.
class AdditionalRouteInfo {
private:
	std::string weather;
	std::string destination_info;
public:
	AdditionalRouteInfo(const std::string& weather, const std::string& destination_info);

	friend std::ostream& operator<<(std::ostream& out, const AdditionalRouteInfo& info);
};

