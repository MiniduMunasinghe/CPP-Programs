#pragma once
class Event
{
private:
	int eventId;
	char eventType[20];
	char themeColor[20];
	char location[20];

public:
	void setEventDetailes(int eID, const char* eType, const char* theamC, const char* eLocation);
	void displayEventDetailes();
	void setEventLocation();
};


