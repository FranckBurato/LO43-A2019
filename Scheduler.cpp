#include "Scheduler.h"
#include "Server.h"


Scheduler::Scheduler(): server() 
{}

void Scheduler::run()
{
   while (true)
   {
      if(sNumber != 4)
      {
         server.request();
         server.dataRcv();
         server.consolWrite();
         server.fileWrite();
         sNumber ++;
      }
      else
      {
         sNumber = 0;
      }
      
   }
}