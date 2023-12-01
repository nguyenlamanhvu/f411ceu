#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#ifndef SIMULATOR
#include "main.h"
#endif
Model::Model() : modelListener(0),Pressure_Val(500),Temperature_Val(20),CO_Val(300),Hour(12),Minute(30),Second(30),tickCounter(0)
{

}

void Model::tick()
{
	tickCounter++;

		if (tickCounter % 60 == 0)
	    {
	        if (++Second >= 60)
		    {
	        	Second = 0;
		        if (++Minute >= 60)
		        {
		           	Minute = 0;
		            if (++Hour >= 24)
		            {
		               	Hour = 0;
		            }
		        }
		    }
	        Pressure_Val++;
	        Temperature_Val++;
	       	CO_Val++;
	    }
#ifndef SIMULATOR
	Pressure_Val=check();
#endif
	modelListener->setPressure(Pressure_Val);
	modelListener->setTemperature(Temperature_Val);
	modelListener->setCO(CO_Val);
	modelListener->updateTime(Hour,Minute,Second);
}
